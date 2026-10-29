# 2026-10-29 — 0x00258040 shared guest third-argument address

**Status: instruction-backed bounded syntax repair, not 1:1 game behavior.**

The user's private original Xbox XBE independently matches SHA-256
`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
The source retains original function entry `0x00258040`, original function
body SHA-256 `FD6DD07E0862B300DCF5AC5D9F200C21DBD88ED3A36402B1DB1035EC61CAF0AB`
and unverified provenance/ABI/behavior labels.

At `0x00258040` the original instruction `SUB ESP,0x28` reserves 40
bytes. `PUSH EBX/EBP/ESI/EDI` at `0x258043/4D/52/57` saves 16 more,
giving stable original ESP = entry ESP - 0x38. At `0x258288`,
`LEA EDX,[ESP+0x44]` therefore points to **entry ESP + 0x0C**,
the *third* incoming 32-bit stack argument. The resulting pointer is pushed
to original direct callee `0x00257DA0` at `0x258295`.

The later `0x258379 LEA ECX,[ESP+0x44]` addresses the same third argument
at `entry ESP+0x0C`. Its address is pushed for original direct callee
`0x00071D20` at `0x258387`. The source's two
`&stack0x00000000` ghosts now both use `&param_3`, never
two separately allocated or zero-filled buffers. Original `RET 0x14`
at `0x25839E` also confirms five incoming DWORDs.

Focused verifier `scripts/verify_00258040_guest_third_argument.py`
checks the source arguments, complete XBE SHA and 12 exact opcode windows
when provided `--xbe /private/path/default.xbe`; it tests isolated whole
C11 source with unchanged host sweep flags at Clang O0/O2. The local
private-XBE run passed, and both complete C11 syntax checks passed.
The original `0x00258040` body digest was preserved as a label but
was **not independently rehashed from full original body ranges** in
this pass; the scoped opcode windows were verified instead.

The canonical inventory's C source digest becomes
`0df475715fa2db75ef5c92a4f2ff01e49ca87a9d08cf74d219d605f035c3201b`;
syntax status becomes `HOST_CLANG_OK`, while origin, ABI and behavior
remain unchanged. The baseline 13,633/61 is not recalculated until an
exact-tree full audit.

**Limits:** the original 32-bit guest stack-word address cannot be
represented by assuming a 64-bit host pointer has identical layout.
The virtual method, downstream caller/callee outputs, unbound register
values, guest memory translation and gameplay behavior remain
`ABI_UNVERIFIED`. No native PC game, linked ABI, original-Xbox runtime
oracle or byte-match has been established. No XBE, ISO, copyrighted assets,
Ghidra database or secrets are in the commit.
