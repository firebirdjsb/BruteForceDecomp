# Ten short original-XBE guest32 drafts — bounded source reconstruction

## Original executable evidence

Authenticated **retail `default.xbe` SHA-256**:
`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.

The corresponding original function addresses, 32-bit complete body hashes,
body lengths, conditional-target operands and `RET`/`RET 4` sites are recorded
in [`metadata/20261107_ten_short_guest32_models.json`](../../metadata/20261107_ten_short_guest32_models.json).
The private original-XBE verifier checks **ten complete original x86 bodies**
(571 bytes), **31 conditional branch edges**, **19 RET sites**, and **571
single-byte corruption controls**. Every currently reconstructed source still
retains its archived original x86 body-hash label. The verifier neither uploads
nor executes the proprietary retail executable.

| Original entry | Bytes | Original machine behavior reviewed |
|---|---:|---|
| `0x00048000` | 37 | Eight-byte record search; `SETNE DL; MOV AL,DL` preserves EAX high bytes |
| `0x00126B20` | 21 | Guest pointer check; `MOV AL,1`/`XOR AL,AL`, preserving EAX high bytes |
| `0x00162CD0` | 38 | Counted four-byte record search; `SETNE DL; MOV AL,DL` |
| `0x00075620` | 81 | Three-way list rewire; exact byte-flag test and three `RET 4` exits |
| `0x000A7BD0` | 81 | Same list rewire with byte flag at `+0x19` |
| `0x000B11E0` | 81 | Same list rewire with byte flag at `+0x15` |
| `0x00085410` | 45 | Ordered four-byte sliding copy and terminal count decrement; `RET 4` |
| `0x000908F0` | 52 | Global DWORD table scan; address computation followed by partial-AL load |
| `0x0005C370` | 74 | Signed arithmetic-shifted count, unsigned compare, scan; partial-AL result |
| `0x0006EBC0` | 61 | Stack-supplied guest addresses, branch-dependent ordered data transfer |

Every selected original routine has **no direct or indirect outgoing calls**.
The ten previous Ghidra-derived sources failed isolated Clang++17 parsing.
Their replacements pass strict host Clang++17 O0/O2 syntax checks, no native
32-bit Xbox pointers are coerced into 64-bit host pointers, and the new
host wrappers deliberately identify their register/stack values as **explicit
guest32 models**, not recovered original native C++ signatures.

## Executed tests and limits

`tools/test_cpp_20261107_ten_short_guest32.py` independently replays synthetic
byte-addressable guest memory in Python, using a separately compiled C++
fixture for the actual canonical drafts. Its O0 and O2 cases compare:

- **5,120** deterministic source/oracle scenarios with ordered byte and DWORD
  reads and writes, guest-address wrapping, and guest-memory contents;
- full unsigned 32-bit returned values including **the original high 24 EAX
  bits after partial-AL assignments**;
- all three list rewire branch destinations and branch-dependent updates;
- ten deliberate operand, offset or write mutations rejected by the independent
  event oracle, without introducing nonterminating mutant loops.

These bounded native host models are not proof of an Xbox ABI. The following
remain **ABI_UNVERIFIED**: native calling conventions, true host/guest address
mapping, stack pointer translation and callee cleanup, EFLAGS and all implicit
nonreturn register live-outs, interrupt/fault timing, interaction with
unmodeled side effects, whole-function original x86 execution, and native-PC
linkage. The drafts must not be credited as verified 1:1 gameplay behavior
merely because these tests and isolated syntax checks are green.
