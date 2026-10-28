#!/usr/bin/env python3
"""Synthetic fail-closed and arithmetic tests. No copyrighted XBE in CI."""
import importlib.util
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
path = ROOT / "scripts/verify_guest_stack_pair_20261028.py"
spec = importlib.util.spec_from_file_location("guest_stack_pair", path)
assert spec and spec.loader
module = importlib.util.module_from_spec(spec)
spec.loader.exec_module(module)
module.verify_guest_frame_arithmetic()

assert set(module.WINDOWS) >= {
    "0x00257b50", "0x002a75d0", "0x002329e0", "0x00252c60",
    "0x002a7510", "0x002ebea0", "0x002c2530", "0x00269600",
}
count = 0
for name, windows in module.WINDOWS.items():
    assert windows, name
    for address, hex_bytes, description in windows:
        assert description.strip(), (name, address)
        assert address >= module.TEXT_FILE_BIAS
        assert bytes.fromhex(hex_bytes), (name, address)
        count += 1
assert count >= 80, count

try:
    module.verify(b"this is not an authenticated Xbox XBE")
except ValueError as exc:
    assert "SHA-256 mismatch" in str(exc)
else:
    raise AssertionError("Wrong original-XBE hash was accepted")

print(f"PASS {count} well-formed instruction windows; frame arithmetic and hash rejection")
print("No original XBE in CI; original instruction bytes require private local verification")
