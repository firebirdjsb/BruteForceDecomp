# Guest32 aligned-index C++17 repairs — 2026-11-01

Original retail XBE SHA-256: `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.

This batch fixes two source-matched 32-bit aligned-address calculations, not the entire Xbox ABI or SSE behavior.

| Entry | Original x86 body SHA-256 | Instruction contract | Source change |
| --- | --- | --- | --- |
| `0x002DBAB0` | `A6D045A58353526FB35F79273C26B1B220648158B9A30CD8232B29180BAF2592` | `0x002DBADE`: AND ECX,-16; SUB EAX,ECX; SAR EAX,2; ADD EAX,EBX; RET 16 | Use `uVar1 & 0xfffffff0U` instead of casting `pfVar9` back to native `int` |
| `0x002DC030` | `5EEDD532F5DB5AAF205340C2B60C6A2D5D59FE10FB57695148AD37FCA9DC108F` | `0x002DC05C`: AND EDX,-16; SUB EAX,EDX; SAR EAX,2; ADD EAX,EBX; RET 16 | Use `uVar1 & 0xfffffff0U` instead of casting `pfVar10` back to native `int` |

The old source reconstructs the aligned address by casting a host pointer into a 32-bit integer. The new source uses the existing `uint32_t`-width `uVar1` guest address and original 16-byte alignment mask. The resulting difference is the original low nibble; arithmetic shift by two produces the lane index.

Source preimages (Git blobs): `57f16b40304e8deaa7722b9f9c44c5031bda37ac`, `d6636d9f9d8c807a4d514d28938b834c72aa4cfd`. Patched blobs: `c10595f5434c6e0cc192a6fc37b8c0925bdd0613`, `78960829857e0f9bedc13802b2557bdcba5eeb55`.

Local evidence: exact original function-body hashes, machine-code AND/SUB/SAR/ADD bytes, RET 0x10, negative body/operand mutations, 16 low-nibble algebra cases with multiple upper words, and full-file Clang++17 `-O0`/`-O2` old-fail/new-pass using equivalent local scalar aliases.

Unresolved: actual guest-memory translation, native host pointer dereferences, SSE floating-point behavior, virtual dispatch, platform linkage and gameplay. Original address/body comments and `ABI_UNVERIFIED` are unchanged. The original XBE must never be committed.
