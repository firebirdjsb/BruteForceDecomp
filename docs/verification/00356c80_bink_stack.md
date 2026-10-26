# 0x00356C80 — Bink filename guest-stack storage (instruction-backed C11)

Original user-provided Xbox XBE SHA-256: `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.

Original function entry: `0x00356C80`; original 337-byte body ends immediately after `RET 8` at `0x00356DCE` (exclusive end `0x00356DD1`). Complete original body SHA-256: `B419A42B9B74F00E61002A85F9B56045C38099739BB845BAA18B30A019492A6E`. Both digests were recomputed from the user's original XBE on 2026-10-26. No binary is stored in Git.

The original prologue at `0x00356C80` is `83 EC 40` (`SUB ESP,0x40`). The function then saves EBX, EBP, ESI, and EDI (four pushes). After those saves, the first buffer is `[ESP+0x10]`, and the second is `[ESP+0x30]`; these are offsets 0 and 32 within the same 64-byte local allocation. Original `0x00356CF0`/`0x00356CF4` load from `[ESP+EAX+0x10]` and store to `[ESP+EAX+0x30]`, establishing the byte-by-byte copy between them. `0x00356CB4` uses `LEA EDX,[ESP+0x14]`, placing the initial suffix at offset 4 in the first buffer.

The append loops scan from `[ESP+0x30]` (`0x00356CFD`) or `[ESP+0x10]` (`0x00356D3C`, `0x00356D71`). The original stores are `66 89 0F` at `0x00356D19`, `66 89 17` at `0x00356D52` and `0x00356D8C`, and trailing `88 57 02`/`88 47 02` at `0x00356D1C`/`0x00356D8F`. Original XBE constants at `0x00387B08`, `0x00387B10`, and `0x00387B14` are `BINK\0`, `M\0`, and `X2\0` respectively. The function returns with `C2 08 00` (`RET 8`), matching its two incoming DWORD arguments.

The C11 repair replaces Ghidra's split local objects and unresolved `stack0xffffffbf` pseudo-address with one 64-byte array and explicit byte writes. A focused regression test covers the first/second-buffer copy, M and X2 appends, and guard bytes at Clang `-O0`/`-O2`. This verifies **only** the observed storage and suffix operations for in-bounds inputs. It does not verify the external Bink API, global string table typing, unbounded string lengths, full Xbox ABI, or native runtime behavior. Keep `ABI_UNVERIFIED` until those are separately established.
