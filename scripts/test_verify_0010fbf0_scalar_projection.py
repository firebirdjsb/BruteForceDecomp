#!/usr/bin/env python3
"""Synthetic opcode-window integrity tests; no original XBE bytes in CI."""
from verify_0010fbf0_scalar_projection import SCALAR_WINDOWS, verify_windows

class Region:
    def __init__(self):
        self.entries={address:bytes.fromhex(window) for address,window in SCALAR_WINDOWS.items()}
    def read(self,addr,n):
        return self.entries[addr][:n]

def main():
    r=Region()
    verify_windows(r.read)
    cases=1
    for addr in SCALAR_WINDOWS:
        original=r.entries[addr]
        for i in range(len(original)):
            bad=bytearray(original)
            bad[i]^=1
            r.entries[addr]=bytes(bad)
            try:verify_windows(r.read)
            except ValueError as e:
                if f"0x{addr:08X}" not in str(e):raise
            else:raise AssertionError(f"Corrupted opcode at 0x{addr:08x}+{i} accepted")
            finally:r.entries[addr]=original
            cases+=1
    print(f"PASS {cases} synthetic original-instruction-window integrity cases")
if __name__=="__main__":main()
