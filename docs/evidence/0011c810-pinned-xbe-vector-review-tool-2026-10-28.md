# `0x0011C810` pinned-XBE vector and virtual-call instruction review

**Status: inspection utility, NOT original x86 source parity or resolved
virtual dispatch.** This work supplies a reproducible *local* review gate for
the two remaining blocker families in the original `0x0011C810` draft.
No user game files are uploaded or checked into Git.

`python3 scripts/inspect_0011c810_original.py --xbe /local/private/default.xbe`

The script requires GNU `objdump` (binutils), the **pinned original Brute
Force XBE SHA-256**, and matching body SHA-256s for the three original
functions (caller `0x0011C810`, producer `0x0001D0C0`, consumer
`0x0012B2A0`). It reuses the canonical repo's existing XBE guest-address
translator and body hash inventory rather than introducing a second
unchecked guest-image parser. A wrong XBE is refused before disassembly.

It prints four local linear x86 disassembly windows covering:

- First virtual `+0x30` caller and returned EAX handoff.
- `0x0001D0C0` matrix producer and 36-byte SSE copy.
- Second virtual call and the object component loads.
- `0x0012B2A0` EAX/ECX/EDX inputs and scalar-output lifetime window.

The output is intended to support **manual original instruction review**
for the unresolved vector source-to-destination lanes (`object+0x1C`,
`+0x28`, `+0x34` against frame `S+0x28`, `+0x2C`, `+0x30`) and the precise
negation instructions. The dynamic original virtual target additionally
requires vtable/class memory writes or runtime state: disassembly of an
indirect call cannot identify its actual target by itself. A linear dump
is not a control-flow graph, x87 differential test, ABI/return contract,
or byte-for-byte recompilation proof. Reviewers must not automatically
promote anything to 1:1 verified from this report alone.

`python3 scripts/test_inspect_0011c810_original.py` runs self-contained
synthetic parser tests: address window boundaries, byte extraction,
GNU-objdump 32-bit decoding, and rejection of a deliberately incorrect
XBE hash. Its fixtures **are not** original game instructions and don't
validate the user's private XBE. This test can run in public GitHub CI.

The private pinned XBE is not present in the current container or public
CI; therefore this pass has **not resolved the actual vector lane map or
virtual target**. The test-only input path does not accept a fake alternate
XBE for verification. The original 13,694 game C draft sources remain
unchanged and the syntax count is unaffected.
