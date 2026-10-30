#!/usr/bin/env python3
"""Fail closed if the original 13,694 function identities or sorted paths drift."""
import csv
import pathlib
import re
from source_layout import discovered_sources, relative_source_path, reviewed_aliases, section_for

ROOT = pathlib.Path(__file__).resolve().parents[1]
names = reviewed_aliases(ROOT.resolve())
assert len(names) == 15, f"Unexpected assembly-reviewed alias count: {len(names)}"
assert relative_source_path(ROOT, "0x000b4f20").as_posix() == "src/main_unclassified/band_000b/0x000b4f20.cpp"
assert relative_source_path(ROOT, "0x00372270").as_posix() == "src/platform/graphics_d3d/0x00372270.cpp"
assert relative_source_path(ROOT, "0x002eb322").as_posix() == "src/reviewed_by_assembly/bf_format_to_counted_buffer/0x002eb322.cpp"
assert section_for("0x00349413") == "xnet"
actual = discovered_sources(ROOT)
if len(actual) != 13694:
    raise SystemExit(f"Expected 13694 sorted function sources; found {len(actual)}")
entries = {p.stem.lower() for p in actual}
with (ROOT / "metadata/bulk_13694_inventory.csv").open(encoding="utf-8", newline="") as stream:
    inventory = [row["entry"].lower() for row in csv.DictReader(stream)]
if len(inventory) != 13694 or len(set(inventory)) != 13694 or entries != set(inventory):
    raise SystemExit("Function entries, canonical inventory, or uniqueness disagree")
actual_set = set(actual)
extras = [p for p in (ROOT / "src").rglob("*.cpp") if p not in actual_set]
if extras:
    raise SystemExit(f"Untracked C functions under src: {extras[:3]}")
with (ROOT / "metadata/function_groups/all_13694_functions.csv").open(encoding="utf-8", newline="") as stream:
    groups = list(csv.DictReader(stream))
if len(groups) != len(actual) or {row["entry"] for row in groups} != entries:
    raise SystemExit("Function navigation index does not cover the source inventory")
for row in groups:
    expected = relative_source_path(ROOT, row["entry"]).as_posix()
    if row["source_file"] != expected:
        raise SystemExit(f"Stale function navigation path: {row['source_file']} != {expected}")
for workflow in (ROOT / ".github/workflows").glob("*.yml"):
    for match in re.finditer(r"\bsrc/(?:[a-z0-9_]+/)*(0x[0-9a-f]{8})\.cpp\b", workflow.read_text(encoding="utf-8")):
        expected = relative_source_path(ROOT, match.group(1)).as_posix()
        if match.group(0) != expected or ROOT / expected not in actual_set:
            raise SystemExit(f"Stale workflow source path in {workflow.name}: {match.group(0)}")
print(f"Sorted layout OK: 13694 unique source entries, {len(names)} reviewed readable identities.")
print("Directory names are section/location evidence, NOT proof of C11, ABI, or runtime behavior.")

assert not list((ROOT / 'src').rglob('0x????????.c')), 'Old C function files remain'
