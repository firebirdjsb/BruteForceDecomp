# Xbox CRT _ftell: evidence and unresolved contracts

Entry: `0x002EB634`, original function-body SHA-256 `23A82B0A52E6ACB59EC49FADCBA1FD5471B12F40561238A032D51F05A833ED7B`.

The recovered function accesses stream fields corresponding to the shared
`bf_xbox_crt_stream32` layout:

| Guest offset | Recovered role | Important constraint |
| --- | --- | --- |
| +0x00 | buffer cursor | Guest address; never a native `FILE *` |
| +0x04 | signed remaining count | 32-bit signed comparisons and subtraction |
| +0x08 | buffer boundary | Guest address |
| +0x0c | flags | Tests include `0x108`, `0x03`, `0x08`, `0x400` |
| +0x10 | file handle | Passed to guest low-level seek function |

The Ghidra draft uses host `FILE` members, `FILE *` arithmetic, and a
`_shortbuf` expression to represent *integer arithmetic* on guest state.
These are not valid evidence of a host `FILE` layout.

Original behavior requires more than changing field names:

1. Seek current file position via `FUN_002ef651(handle, 0, 1)`.
2. Reject failed seek and handle invalid stream flags/position.
3. Adjust the position for buffered unread data using signed 32-bit count.
4. In text mode, consult the original guest descriptor table at
   `DAT_004a8ea0`, inspect buffered bytes for newline translation, and
   preserve the seek-and-restore branch.
5. Preserve the byte test of the flags word at offset +0x0d and the guest
   arithmetic for the `0x200` fallback.
6. Keep guest pointers as 32-bit integers until the native runtime provides
   explicit address translation. No direct `(void *)(uintptr_t)guest_address`
   dereference is safe on Windows/Linux/Android.

**Status:** C11 reconstruction deferred until the original x86 control flow,
descriptor-table layout, and buffer-relative arithmetic are independently
checked. Do not substitute host `ftell` or `FILE`.
