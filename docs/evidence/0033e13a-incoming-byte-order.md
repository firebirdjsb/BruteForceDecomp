# 0x0033E13A incoming DWORD byte order

Original XBE SHA-256: `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
Original body: 473 bytes, SHA-256 `3EAD9B1EA3AD925B15E8E133CF594F57F6D8B4A840DD9979A5B1D92058E8AED1`.

The EBP frame is established at entry. The third incoming DWORD occupies
EBP+0x10..0x13. At 0x33e262, 0x33e267, 0x33e26c and 0x33e271,
MOVZX reads bytes at +0x13, +0x12, +0x11 and +0x10 respectively.
Each value is pushed. The call at 0x33e27d therefore receives the bytes
low-first after its destination, size and format arguments; caller cleanup
removes seven DWORDs. Unsigned shifts and uint8_t conversions reproduce
these four zero-extended values without modifying the incoming word.

The existing formatter call and format are retained. This repairs only
decompiler subpiece expressions; it does not certify the formatter ABI,
other global declarations, guest pointer arithmetic, complete interfaces,
or runtime behavior. Focused checks use the repository sweep flags.
The body and relevant instruction windows are pinned by
`scripts/verify_stack_storage_repairs.py`.

Independent review confirmed no preceding writes to the incoming DWORD and
approved the limited byte extraction correction. Both i686 and x86_64 focused
syntax checks passed. Verification achieved: A and local B; no full C or D.
