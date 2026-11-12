# Two bounded guest literals and exact source declarations

## Admitted scope

This batch changes only two literal operands and adds the exact existing
source-draft declaration `extern void FUN_00066920(void);` in each caller.
It does not change caller or callee signatures, call expressions, returns,
other stores, shared headers, global declarations or earlier quarantine lists.
Both canonical caller functions and the callee remain `ABI_UNVERIFIED`.

**Neither caller may be executed.** Their `unaff_ESI` locals are uninitialized.
The exact `void(void)` source interface does not pass original `EAX=ESI` to
the callee, whose uninitialized `in_EAX` stands for a hidden register input.
Both original callers return `EAX=ESI`; their unchanged `void` source returns
do not represent that result. These mismatches are not solved by declarations.
`002aaac0` also omits three original local-stack zero stores. No whole-function
ABI, behavior, object layout, initialization behavior or byte-match claim follows.

## Baseline and provenance

- Source base: `7f4fd2dc86f96e9e3f7985814837c9c5a4b0181d`.
- Latest full audit: `679bed432acf202ea85facd60c7f324a631b5013`, 4,038 passes
  and 9,656 failures across 13,694 C++ drafts. The exact-source tree verifier
  confirms its per-function bytes still match the source base. Both selected
  callers fail for a missing declaration and a pointer-to-DWORD assignment.
- Fixed original-XBE label:
  `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
  This review uses private indexed export data; it does **not** independently
  reauthenticate the complete XBE.
- The public manifest pins each original body, range, instruction count,
  caller preimage SHA-256/Git blob and repaired source SHA-256. It also pins
  the unchanged canonical callee source and `include/bf_ghidra_types.h`.
  The latter defines `undefined4` as `uint32_t`, so the existing lvalue is
  already four bytes. No native pointer cast or storage type is introduced.

| Entry | Complete range | Bytes / instructions | Original body SHA-256 |
| --- | --- | --- | --- |
| `002ae200` | `002ae200..002ae233` | 52 / 11 | `A4005BDD9CB723123DCFF6A3F1241F55FC594B2B9E947CA83638140C1C657845` |
| `002aaac0` | `002aaac0..002aab0b` | 76 / 19 | `427A3E1341FC825128C6DC5A9736CF2D2B720785F6A3067BF36E1EEC0F9BBB13` |
| `00066920` | `00066920..0006696c` | 77 / 17 | `A93F04EAA98EAA37069145C133D48C99CD389EAE8A69E611C9CF34ADE8C8640B` |

## Original instruction facts

- `002ae200: 8b c6` is `MOV EAX,ESI`.
  `002ae202: e8 19 87 db ff` is the direct call to `00066920`.
  `002ae221: c7 06 d0 f4 38 00` is `MOV DWORD [ESI],0038f4d0`.
  `002ae231: 8b c6` restores `EAX=ESI`, followed by plain `RET`.
- `002aaac0: 83 ec 0c` reserves 12 stack bytes.
  `002aaac3: 8b c6` selects `EAX=ESI` and
  `002aaac5: e8 56 be db ff` calls the same callee.
  `002aaade: c7 06 00 f8 38 00` is `MOV DWORD [ESI],0038f800`.
  The original zeros `[ESP+8]`, `[ESP+4]` and `[ESP]` at `002aaae8`,
  `002aaaec`, `002aaaf0`. The source omits those local writes.
  `002aab06: 8b c6` sets `EAX=ESI`; `ADD ESP,0xc; RET` follows.
- The callee begins with `XOR ECX,ECX` and at `00066922` writes
  `DWORD [EAX+4]`. It reads and modifies the byte at `[EAX+0x90]`, has no
  calls or branch instructions, and ends at `0006696c` with plain `RET`.
  Its unchanged source definition is exactly `void FUN_00066920(void)`.

All three bodies are contiguous. A private replay validates full body hashes,
complete byte coverage and 47 independent Capstone 5.0.7 instruction boundaries,
then checks each flow target/fallthrough against the decoded bytes. No analyzed
flow, fallthrough or length override is accepted. The actual complete call list
is exactly one call per caller and no calls in the callee.

## Exact source edits and limitations

- `002ae200`: replace `*unaff_ESI = &PTR_LAB_0038f4d0;` with
  `*unaff_ESI = UINT32_C(0x0038f4d0);`.
- `002aaac0`: replace `*unaff_ESI = &PTR_FUN_0038f800;` with
  `*unaff_ESI = UINT32_C(0x0038f800);`.
- Add the same canonical source-only declaration and bounded explanatory
  comments. Remove precisely those additions and reverse the two expressions
  to recover both original source SHA-256 values and Git blob IDs.

The immediate words are guest values, not host addresses. Label names are not
proof of vtables, function targets, classes, inheritance or gameplay meaning.
Guest address mapping, native object lifetime, alignment, aliasing, bounds and
full register/flags/stack semantics remain unresolved. `002aaac0`'s omitted
stack operations and both callers' hidden input/return behavior remain intact
as evidence gaps rather than being modified to obtain syntax passes.

## Gates and results

Public gate:

```
python3 tools/test_cpp_20261105_literal_declaration_pair.py
```

Optional private replay and mutation checks:

```
python3 tools/test_cpp_20261105_literal_declaration_pair.py \
  --private-export <private-export-folder> --tooldeps <private-decoder-packages>
python3 tools/verify_cpp_20261105_literal_declaration_pair.py \
  --private-export <private-export-folder> --tooldeps <private-decoder-packages>
```

- Strict Clang C++17 at `-O0` and `-O2`, both syntax and object generation,
  passes each repaired caller. No permissive flags are used.
- Both callers plus the unchanged canonical callee compile together at both
  levels, with an exact `void (*)(void)` static assertion. This tests source
  declaration agreement, not a recovered ABI or a linked game.
- Restoring only the declaration failure, only the literal failure, and both
  failures produces the expected diagnostics at each optimization level.
  Wrong return and parameter declarations fail against the canonical callee.
- Source, callee, header, every manifest leaf and 74 public instruction-byte
  mutations are rejected. Duplicate keys and nonfinite JSON are rejected.
- Private corruption tests reject 913 altered records, including every byte
  of all 205 body bytes and their instruction copies (410 byte controls),
  every instruction's flow/coverage/override metadata, and 39 index controls.
- An isolated fixture evaluates only the exact repaired DWORD statements in
  real initialized `undefined4[6]` arrays. Both optimization levels preserve
  five surrounding words and write the expected four-byte value. All 20
  wrong-value, zero-value, wrong-offset, adjacent-word-write and partial-write
  negative runs fail. There are 24 total fixture runs, never game functions.
- CI receives one additive step. Existing gates remain unchanged.

No original x86 code, uploaded script, caller or callee executes. Isolated
host fixtures are not original-versus-reconstruction differential tests.
The expected local syntax gain is two; a new complete exact-commit audit is
required before publishing a revised repository-wide count.
