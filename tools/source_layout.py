#!/usr/bin/env python3
"""Verified-XBE-section directory layout; no game/ABI semantics inferred."""
from __future__ import annotations
import csv
import re
from functools import lru_cache
from pathlib import Path

ENTRY = re.compile(r"0x[0-9a-f]{8}\Z")
SECTIONS = (
    ("main", 0x00012000, 0x003118B0),
    ("dsound", 0x003118C0, 0x0033001C),
    ("xonline", 0x00330020, 0x00344F0C),
    ("xnet", 0x00344F20, 0x00356C80),
    ("bink", 0x00356C80, 0x0036438C),
    ("bink32", 0x003643A0, 0x00365605),
    ("bink32a", 0x00365620, 0x00366B99),
    ("bink16", 0x00366BA0, 0x00367EBC),
    ("bink4444", 0x00367EC0, 0x00369460),
    ("bink5551", 0x00369460, 0x0036A594),
    ("binkyuy2", 0x0036A5A0, 0x0036B448),
    ("bink16mx", 0x0036B460, 0x0036B590),
    ("bink16x2", 0x0036B5A0, 0x0036BAF8),
    ("bink16m", 0x0036BB00, 0x0036BCF8),
    ("bink32mx", 0x0036BD00, 0x0036BEBC),
    ("bink32x2", 0x0036BEC0, 0x0036C44C),
    ("bink32m", 0x0036C460, 0x0036C5AC),
    ("d3d", 0x0036C5C0, 0x0037EC94),
    ("xpp", 0x0037ECA0, 0x0038633C),
)
PLATFORM = {
    "dsound": "platform/audio_dsound",
    "xonline": "platform/online_xonline",
    "xnet": "platform/network_xnet",
    "d3d": "platform/graphics_d3d",
    "xpp": "platform/xpp_role_unverified",
}

def section_for(entry: str) -> str:
    if not ENTRY.fullmatch(entry):
        raise ValueError(f"Invalid original x86 entry: {entry!r}")
    address = int(entry, 16)
    return next((name for name, start, end in SECTIONS if start <= address < end), "unmapped")

@lru_cache(maxsize=16)
def reviewed_aliases(root: Path) -> dict[str, str]:
    path = root / "metadata/asm_supported_readable_names.csv"
    if not path.is_file():
        raise FileNotFoundError(f"Missing assembly-reviewed name inventory: {path}")
    aliases = {}
    seen_names = set()
    with path.open(encoding="utf-8", newline="") as stream:
        for row in csv.DictReader(stream):
            entry = row["entry"].lower()
            alias = row["readable_alias"]
            if not ENTRY.fullmatch(entry) or not re.fullmatch(r"[a-z][a-z0-9_]*", alias):
                raise ValueError(f"Invalid reviewed identity: {entry} {alias}")
            if entry in aliases or alias in seen_names:
                raise ValueError(f"Duplicate reviewed identity: {entry} {alias}")
            aliases[entry] = alias
            seen_names.add(alias)
    return aliases

def relative_source_path(root: Path, entry: str) -> Path:
    entry = entry.lower()
    group = section_for(entry)
    alias = reviewed_aliases(Path(root).resolve()).get(entry)
    if alias:
        folder = f"reviewed_by_assembly/{alias}"
    elif group == "main":
        folder = f"main_unclassified/band_{int(entry, 16) >> 16:04x}"
    elif group in PLATFORM:
        folder = PLATFORM[group]
    elif group.startswith("bink"):
        folder = f"video_bink/{group}"
    else:
        folder = f"unmapped_unclassified/band_{int(entry, 16) >> 16:04x}"
    return Path("src") / folder / (entry + ".cpp")

def source_path(root: Path, entry: str) -> Path:
    root = Path(root).resolve()
    return root / relative_source_path(root, entry)

def discovered_sources(root: Path) -> list[Path]:
    root = Path(root).resolve()
    paths = sorted((root / "src").rglob("0x????????.cpp"))
    seen = set()
    for path in paths:
        entry = path.stem.lower()
        if not ENTRY.fullmatch(entry):
            raise ValueError(f"Invalid function filename: {path}")
        if entry in seen:
            raise ValueError(f"Duplicate function entry: {entry}")
        seen.add(entry)
        expected = source_path(root, entry)
        if path != expected:
            raise ValueError(f"Misfiled function {entry}: {path} != {expected}")
    return paths
