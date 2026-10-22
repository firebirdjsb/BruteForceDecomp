# Assembly-supported C calling convention — 0x00349413

Brute Force retail XBE original machine-code entry **`0x00349413`**, file-backed body SHA-256 **`3D6DE52EAEE73DCA453002F1885A0825D19DE948071E4DC585A321C52F8B7309`**, in the XNET section.

The original entry pushes, in order: `0`, `0`, `4`, the address of original second caller stack argument, the literal `0x5300`, then original first caller stack argument; it calls `0x00349366` and ends with `ret 8`. The callee saves incoming ECX in its local frame and ends with `ret 24`. This establishes a **context-in-ECX / two stack words** wrapper and **context-in-ECX / six stack words** callee contract, consistent with Microsoft x86 `thiscall`-style stack cleanup.

### Conservatively reconstructed role

Forward one 4-byte data word and tag `0x5300` into `FUN_00349366`. The latter writes a 16-bit tag and a length and copies supplied data buffers into an allocated record. We use names `four_byte_payload_word`, `header_tag`, and `incoming_ecx_context`. The recipient's gameplay meaning, endpoint identity, protocol purpose, and all cross-module call uses are **not** established.

Clang targeting **i386-pc-windows-msvc** emitted a call sequence with the same argument order, incoming ECX, and `ret 8`, but reorders `lea` relative to pushes, so it is *not byte-for-byte identical*. The source passed host strict C11 and Windows x86-target C11 syntax checks. It also passed host ASan/UBSan mock forwarding checks; those mocks are **not proof of original runtime behavior**.

The existing `src/0x00349366.c` still has an older Ghidra-derived declaration that does **not** encode its hidden ECX context. Until callee and every callsite are migrated, full-program interface/link verification remains blocked.
