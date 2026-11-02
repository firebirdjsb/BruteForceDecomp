# Retail DWORD caller repair batch — 2026-11-02

Starting main: `2ff744b01aa6d48360fda6fcba41a43ebdada309`.
Active target: strict C++17 original-address drafts; historical C11 metrics excluded.
A completed exact-tree audit at `a69f074` measured 3,938 / 13,694 syntax passes (9,756 failures). Do not claim a new net delta until the pushed tree is audited.

## Scope and promotion

32 source candidates/caller-callee relationships were sampled from the completed audit and prior evidence-needed queues. Two source repairs passed bounded original-instruction, source-provenance and isolated Clang++17 gates; the others remain evidence-needed. No quota-driven ABI casts, virtual layouts or guessed arguments were introduced.

- `0x000230A0 -> 0x00023010`: original `0x000230B1` direct E8 call; caller `LEA EDX,[ESP+0xC]` supplies a four-byte local, callee writes exactly one DWORD to the destination and returns that destination in EAX through three `RET 8` paths. The caller reads the returned DWORD. Represent the original four-byte byte-array local as one four-byte `int` element and add the source-matched callee declaration. The original call expression is unchanged.
- `0x0010CBB0 -> 0x000EE5C0`: original `0x0010CBC2` direct E8 call; the caller pushes the exact IEEE-754 single-precision bits `0x3F000000` (0.5f), passes the address of a local DWORD, and copies that complete DWORD after return. The callee writes only bytes 0, 1 and 2 and exits with `RET 8`. The source passes the local host object's byte representation to the source-matched byte-pointer declaration; no Xbox guest address is cast to a native host pointer.

## Original retail evidence

User-owned retail XBE SHA-256 authenticated locally:
`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.

The complete contiguous original-body SHA-256 matched the pinned labels for `0x000230A0` (45 bytes), `0x0010CBB0` (62 bytes), and `0x000EE5C0` (114 bytes). Two E8 destinations and 16 selected register, local-store, return and immediate windows matched; two mutated E8 displacement controls were rejected. The `0x00023010` label is preserved, but its full Ghidra body digest was **not** reproduced from a contiguous raw byte span; only the relevant original write/return paths are claimed verified.

Local isolated Clang++17 O0/O2 checks passed for both repaired callers. Eight negative source/type controls were rejected, and the binary-backed local test passed. The committed binary-free CI regression pins both original source preimages, two unchanged callee drafts and the bounded edits.

## Limits and next queue

The changes do not establish Xbox ABI parity, full 1:1 behavior, native PC linkage or playable game state. The original `0x000EE5C0` uses x87 multiplication and SSE conversion; host C++ numeric rounding equivalence is still unverified. Guest32 memory translation, `thunk_FUN_00237EC0`, SEH, virtual dispatch and indirect-call contracts remain separate evidence-needed work. No demo content, original executable bytes or commercial assets were committed.
