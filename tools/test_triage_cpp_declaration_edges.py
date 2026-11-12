#!/usr/bin/env python3
"""Negative controls for read-only C++17 declaration/edge triage."""
from __future__ import annotations

import hashlib
import json
import tempfile
import unittest
from pathlib import Path

from triage_cpp_declaration_edges import ERROR, argument_count, triage


class DeclarationTriageTests(unittest.TestCase):
    def test_bounded_suggestion_preserves_missing_symbol(self):
        for diagnostic in (
            "use of undeclared identifier 'FUN_001e2a80'",
            "use of undeclared identifier 'FUN_001e2a80'; did you mean 'FUN_001d1a80'?",
            "use of undeclared identifier 'FUN_001E2A80'; did you mean 'FUN_001D1A80'?",
            "USE OF UNDECLARED IDENTIFIER 'fun_001e2a80'",
        ):
            with self.subTest(diagnostic=diagnostic):
                match = ERROR.fullmatch(diagnostic)
                self.assertIsNotNone(match)
                self.assertEqual(match[1].lower(), "fun_001e2a80")
                self.assertEqual(match[2].lower(), "001e2a80")

    def test_malformed_or_unbounded_diagnostic_is_deferred(self):
        bare = "use of undeclared identifier 'FUN_001e2a80'"
        suggested = bare + "; did you mean 'FUN_001d1a80'?"
        for diagnostic in (
            bare + "; did you mean 'FUN_001d1a80'",  # Missing question mark.
            bare + "; did you mean FUN_001d1a80?",   # Missing quotes.
            bare + "; did you mean 'FUN_001d1a80?",  # Unclosed quote.
            bare + "; did you mean 'FUN_001d1a8'?",  # Wrong address width.
            bare + "; did you mean 'FUN_001d1a80f'?",
            bare + "; did you mean 'FUN_001d1a8g'?", # Non-hex address.
            bare + "; did you mean 'other_symbol'?", # Unsupported suggestion.
            bare + "; did you mean 'thunk_FUN_001d1a80'?",
            bare + "; did you mean 'FUN_001d1a80'; injected?",
            suggested + " trailing", suggested + "\n", suggested + "\r\n",
            suggested + "; did you mean 'FUN_00000001'?",
            "prefix " + suggested, bare + " trailing", bare + "\n",
            suggested.replace("FUN_001e2a80", "DAT_001e2a80"),
            suggested.replace("FUN_001e2a80", "FUN_001e2a800"),
            suggested.replace("FUN_001e2a80", "thunk_FUN_001e2a80"),
        ):
            with self.subTest(diagnostic=diagnostic):
                self.assertIsNone(ERROR.fullmatch(diagnostic))

    def test_balanced_argument_counts(self):
        self.assertEqual(argument_count("()", 0), 0)
        self.assertEqual(argument_count("(a, f(b,c), (d,e))", 0), 3)
        # A cast or nested expression can occupy the entire argument slot.
        self.assertEqual(argument_count("((undefined1 *)(unaff_EDI + 4))", 0), 1)
        self.assertEqual(argument_count("((uint32_t)(in_EAX))", 0), 1)
        self.assertEqual(argument_count("((int *)p, (float)x)", 0), 2)
        self.assertEqual(argument_count("((f(a,b)), c)", 0), 2)
        self.assertEqual(argument_count("(a, 'x,y', \"z,z\")", 0), 3)
        self.assertIsNone(argument_count("(a, f(b)", 0))

    def test_audit_scope_must_be_complete(self):
        with tempfile.TemporaryDirectory() as temp:
            with self.assertRaisesRegex(ValueError, "full_inventory"):
                triage(Path(temp), {"scope": "sample", "checked": 3})

    def test_literals_comments_and_nested_delimiters(self):
        cases = {
            '("a,b)")': 1,
            "('x')": 1,
            '("", "second")': 2,
            r'("escaped\"quote,)", x)': 2,
            r'("ends\\", x)': 2,
            r"('\'', x)": 2,
            '("first" "second", x)': 2,
            '("/* , ) */", x)': 2,
            '(/* , ) */)': 0,
            '(a/* , ) */, b)': 2,
            '(a // , )\n, b)': 2,
            '(a[1, 2], {3, 4})': 2,
            '(f({1, 2}, array[i, j]), b)': 2,
        }
        for text, expected in cases.items():
            with self.subTest(text=text):
                self.assertEqual(argument_count(text, 0), expected)
        self.assertEqual(argument_count('FUN_x("a,b") trailing', 5), 1)

    def test_malformed_or_unsupported_arguments_are_deferred(self):
        for text in ('(,)', '(a,)', '(,a)', '(a,,b)', '(a, /*x*/)',
                     '(a[1), b]', '(a}', '(a /* unterminated)',
                     '(a // closing parenthesis is commented out)',
                     '("unterminated)', '("line\nbreak")',
                     '("dangling' + '\\',
                     '(R"tag(raw, ) text)tag")',
                     '(a // continued\\\n, b)'):
            with self.subTest(text=text):
                self.assertIsNone(argument_count(text, 0))
        for text, offset in (("", 0), ("", -1), ("(", -1), ("()", 2), ("x()", 0)):
            with self.subTest(text=text, offset=offset):
                self.assertIsNone(argument_count(text, offset))

    def test_source_hash_arity_and_negative_controls(self):
        with tempfile.TemporaryDirectory() as temp:
            root = Path(temp)
            caller = root / "src/main_unclassified/band_0001/0x00012340.cpp"
            callee = root / "src/main_unclassified/band_0001/0x00012400.cpp"
            caller.parent.mkdir(parents=True)
            (root / "metadata").mkdir()
            (root / "metadata/asm_supported_readable_names.csv").write_text("entry,readable_alias\n")
            source = ("/* Entry: 0x00012340\n * Input x86 body SHA-256: " + "A" * 64 + "\n */\n"
                      "void FUN_00012340() { FUN_00012400(1, helper(2, 3)); }\n")
            # Audit rows fingerprint exact file bytes on both Windows and Linux.
            caller.write_bytes(source.encode("utf-8"))
            callee_source = ("/* Entry: 0x00012400\n * Input x86 body SHA-256: " + "B" * 64 + "\n */\n"
                             "int FUN_00012400(int x, int y) { return x+y; }\n")
            callee.write_text(callee_source)
            callee_row = {"entry": "0x00012400", "source": str(callee.relative_to(root)),
                          "status": "pass", "source_sha256": hashlib.sha256(callee.read_bytes()).hexdigest(),
                          "original_body_sha256": "B" * 64}
            row = {"entry": "0x00012340", "source": str(caller.relative_to(root)),
                   "status": "fail", "errors": ["use of undeclared identifier 'FUN_00012400'"],
                   "source_sha256": hashlib.sha256(source.encode()).hexdigest(),
                   "original_body_sha256": "A" * 64}
            audit = {"scope": "full_inventory", "checked": 13694,
                     "checked_commit_sha": "b" * 40, "results": [row, callee_row] + [
                         {"entry": f"0x{0x00500000 + i * 16:08x}", "status": "pass"}
                         for i in range(13692)]}
            found = triage(root, audit)["candidates"][0]
            self.assertEqual(found["triage"], "DRAFT_ARITY_MATCH_REVIEW_TYPES_AND_XBE")
            self.assertEqual(found["caller_draft_arity"], 2)
            self.assertEqual(found["abi_status"], "ABI_UNVERIFIED")
            self.assertEqual(found["link_status"], "NOT_LINK_TESTED")
            # A suggestion of the caller itself must never change the callee.
            bare = row["errors"][0]
            row["errors"] = [bare + "; did you mean 'FUN_00012340'?"]
            self.assertEqual(triage(root, audit)["candidates"], [found])
            row["errors"][0] += " trailing"
            self.assertEqual(triage(root, audit)["candidates"], [])
            row["errors"] = [bare]
            # Exercise the scheduling classification, not just the lexer.
            for arguments, classification in (
                ('"first", "second"', "DRAFT_ARITY_MATCH_REVIEW_TYPES_AND_XBE"),
                ('"only"', "DRAFT_ARITY_MISMATCH"),
                ('1 /* , ) */, helper(2, 3)', "DRAFT_ARITY_MATCH_REVIEW_TYPES_AND_XBE"),
                ('1, /* missing argument */', "CALL_UNPARSEABLE"),
            ):
                with self.subTest(arguments=arguments):
                    changed = source.replace("1, helper(2, 3)", arguments)
                    caller.write_bytes(changed.encode())
                    row["source_sha256"] = hashlib.sha256(caller.read_bytes()).hexdigest()
                    self.assertEqual(triage(root, audit)["candidates"][0]["triage"], classification)
            caller.write_bytes(source.encode())
            row["source_sha256"] = hashlib.sha256(caller.read_bytes()).hexdigest()
            callee.write_text(callee_source.replace("int x, int y) { return x+y;", "int x) { return x;"))
            callee_row["source_sha256"] = hashlib.sha256(callee.read_bytes()).hexdigest()
            self.assertEqual(triage(root, audit)["candidates"][0]["triage"], "DRAFT_ARITY_MISMATCH")
            callee.write_text(callee_source + "// concurrent change\n")
            self.assertEqual(triage(root, audit)["candidates"][0]["triage"], "STALE_CALLEE_SOURCE")
            callee.write_text(callee_source.replace("B" * 64, "C" * 64))
            callee_row["source_sha256"] = hashlib.sha256(callee.read_bytes()).hexdigest()
            self.assertEqual(triage(root, audit)["candidates"][0]["triage"], "CALLEE_PROVENANCE_MISMATCH")
            callee.write_text(callee_source)
            callee_row["source_sha256"] = hashlib.sha256(callee.read_bytes()).hexdigest()
            callee_row["source"] = "src/wrong/path.cpp"
            self.assertEqual(triage(root, audit)["candidates"][0]["triage"], "CALLEE_AUDIT_ENTRY_MISSING_OR_PATH_MISMATCH")
            callee_row["source"] = str(callee.relative_to(root))
            caller.write_text(source + "// concurrent change\n")
            self.assertEqual(triage(root, audit)["candidates"][0]["triage"], "STALE_SOURCE")
            caller.write_text(source.replace("A" * 64, "B" * 64))
            row["source_sha256"] = hashlib.sha256(caller.read_bytes()).hexdigest()
            self.assertEqual(triage(root, audit)["candidates"][0]["triage"], "PROVENANCE_MISMATCH")


if __name__ == "__main__":
    unittest.main()
