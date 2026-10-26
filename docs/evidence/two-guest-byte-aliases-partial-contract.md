# Partial guest-byte alias checks for 0x000af1a0 and 0x002d29f0

- Pinned original XBE SHA-256: `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`. Its function export records one ordered contiguous 1,695-byte body for each entry: `0x000af1a0..0x000af83e`, SHA-256 `5359FFA6C8E65BC432570A6D7218903A70FBE089418D6C207DC53FDE44F7E6B9`, and `0x002d29f0..0x002d308e`, SHA-256 `8410B9159F7E13616468E55670C8D2C5B39AACB44E5CE477A904D7F75571CD49`.
- In the first body, byte stores at `0x000af205` and `0x000af359` feed the byte load/test at `0x000af41e/22`. In the second, `0x002d2a6c/70` sign-extend two selector bytes, and `0x002d2b28` later loads the selected signed word. The verifier now maps those seven windows through the authenticated XBE section table and checks both full body digests and unique source labels. Its former `address - 0x10000` file indexing was not an XBE section mapping.
- `--contracts-only` checks these partial source byte contracts and provenance labels without invoking Clang or claiming complete C11 syntax. At this baseline both complete source files still fail focused Clang syntax: `0x000af1a0` has an unresolved D3D symbol and mixed pointer/float scratch values; `0x002d29f0` has pointer/float casts around `local_88`. The mandatory repository sweep retains and counts those failures. Default strict mode still runs Clang O0/O2 over both complete files and fails until their independent repairs are justified.
- `tests/test_verify_two_guest_byte_aliases.py` rejects mutations to the `0x000af1a0` byte read, the `0x002d29f0` signed selector, a source body label and whole-XBE identity. With a private `--xbe` it also rejects a wrong expected original body digest and changed opcode window. These are byte/provenance checks, not a full interface, gameplay or native runtime test.

Independent review rechecked both original body hashes and section-mapped
windows. A persistent test injects a compiler failure and requires the strict
default to reject it, so contract-mode support cannot silently turn strict
syntax checks into a success. CI names the limited scope explicitly and
retains the complete source sweep and inventory consistency gates. Neither
source is credited as a completed repair by these partial checks.
