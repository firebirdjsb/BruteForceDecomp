# XNET 0x00349366 dependency-level C11 reconstruction

The original x86 body `0x00349366..0x00349412` (173 bytes; SHA-256 `327EB0E73F75FB3D50A148A1166C6C1CADCB731A12A3DD5FA96CA70E2C63764C`) was independently disassembled against the supplied original-Xbox XBE.

- Incoming **ECX** is saved as the hidden context. The function accepts six 32-bit stack arguments and ends in `ret 24`. Its wrapper `0x00349413` accepts two stack words and ends in `ret 8`.
- `FUN_0034cb5a`: six stack arguments and `ret 24`; code passes constants 0x7654454E, 0x40004, and total byte count (first length + second length + 4), followed by three zeroes. Return is used as handle.
- `FUN_00347fe3`: context in ECX, three stack arguments and `ret 12`. The second stack argument of this call is copied from offset +4 of the wrapper's first caller stack word.
- `FUN_0034c932`: handle in ECX and plain `ret`; its return is treated as a record-buffer pointer.
- `FUN_00348e95`: original ECX context restored, three stack arguments and `ret 12`.

The reconstructed C stores the tag and (truncated-to-16-bit) record length, then copies two input byte ranges. The original assembly uses `rep movsd` followed by `rep movsb` in the **forward** direction; the model deliberately copies DWORDs one at a time, then byte tails, instead of replacing this with a bulk `memcpy` whose overlap behavior differs.

**Checks:** Both `0x00349366.c` and `0x00349413.c` pass strict host C11 syntax and `clang -target i386-pc-windows-msvc` syntax. Host linked test with mocks for the four dependencies passes, including ASan/UBSan. Windows-i386-generated code for the reconstructed callee ends with `ret 24`.

**Unresolved:** Actual semantics of the four callees, complete XNET record protocol, calls from other functions, linkable Xbox library definitions, actual game runtime behavior, byte equivalence, and original source names. The shared header deliberately does not make those claims.
