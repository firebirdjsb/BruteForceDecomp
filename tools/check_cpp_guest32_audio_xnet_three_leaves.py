#!/usr/bin/env python3
"""Pin and exercise three bounded audio/XNET guest32 models."""
from __future__ import annotations

import argparse
import hashlib
import json
from pathlib import Path
import shutil
import subprocess
import sys
import tempfile

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "scripts"))
from body_hash_labels import read_body_digest  # noqa: E402
from source_layout import source_path  # noqa: E402
from verify_nine_cpp_call_edges_xbe import XBE_SHA256, file_offset, sections  # noqa: E402


def require(value: bool, message: str) -> None:
    if not value:
        raise ValueError(message)


def main() -> None:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--xbe", type=Path,
                        help="private retail XBE used only for hash and body checks")
    args = parser.parse_args()

    evidence = json.loads((ROOT / "metadata/cpp_guest32_audio_xnet_three_leaves_20261113.json")
                          .read_text(encoding="utf-8"))
    require(evidence["original_xbe_sha256"].lower() == XBE_SHA256.lower(),
            "metadata XBE identity differs from the project pin")
    if args.xbe:
        raw = args.xbe.read_bytes()
        require(hashlib.sha256(raw).hexdigest() == XBE_SHA256, "retail XBE SHA-256 mismatch")
        layout = sections(raw)

    sources = []
    for entry, item in evidence["bodies"].items():
        path = source_path(ROOT, entry)
        require(read_body_digest(path.read_text(encoding="utf-8")) == (item["sha256"], False),
                f"source body label mismatch at {entry}")
        if args.xbe:
            offset = file_offset(layout, int(item["start"], 16), item["length"])
            body = raw[offset:offset + item["length"]]
            require(hashlib.sha256(body).hexdigest().upper() == item["sha256"],
                    f"retail body SHA-256 mismatch at {entry}")
            require(body.endswith(bytes.fromhex(item["ret"])), f"retail RET mismatch at {entry}")
        sources.append(str(path))

    clang = shutil.which("clang++")
    if not clang and Path(r"C:\Program Files\LLVM\bin\clang++.exe").exists():
        clang = r"C:\Program Files\LLVM\bin\clang++.exe"
    require(clang is not None, "clang++ is required")
    fixture = ROOT / "tests/fixtures/guest32_audio_xnet_three_leaves_20261113.cpp"
    with tempfile.TemporaryDirectory(prefix="bf-audio-xnet-three-leaves-") as folder:
        binary = Path(folder) / ("model.exe" if sys.platform == "win32" else "model")
        for optimization in ("-O0", "-O2"):
            subprocess.run([clang, "-std=c++17", "-pedantic-errors", "-Wall", "-Wextra",
                            "-Werror", optimization, "-I", str(ROOT / "include"),
                            str(fixture), *sources, "-o", str(binary)],
                           check=True, timeout=60)
            subprocess.run([str(binary)], check=True, timeout=10)
            print(f"PASS {optimization}: three models and exact guest access traces")
    if args.xbe:
        print("PASS exact retail XBE identity, body hashes, and RET bytes")


if __name__ == "__main__":
    main()
