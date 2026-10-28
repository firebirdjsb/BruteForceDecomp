#!/usr/bin/env python3
"""Synthetic original-instruction corruption tests, without private XBE bytes."""
from verify_0011c810_threshold_reset import WINDOWS,check_windows

def main():
    windows={address:bytes.fromhex(source) for address,source in WINDOWS.items()}
    def read(at,n):return windows[at][:n]
    check_windows(read)
    scenarios=1
    for address,old in list(windows.items()):
        for i in range(len(old)):
            bad=bytearray(old);bad[i]^=1;windows[address]=bytes(bad)
            try:check_windows(read)
            except ValueError as e:
                if f"0x{address:08X}" not in str(e):raise
            else:raise AssertionError(f"Incorrect opcode at {address:08x}+{i} accepted")
            finally:windows[address]=old
            scenarios+=1
    print(f"PASS {scenarios} threshold/reset original instruction window synthetic corruption tests")
if __name__=="__main__":main()
