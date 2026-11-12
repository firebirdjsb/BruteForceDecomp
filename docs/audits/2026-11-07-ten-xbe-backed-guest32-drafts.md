# Ten original-XBE-backed guest32 C++17 drafts — bounded source models

This batch replaces ten **individually syntax-failing** drafts with explicit
32-bit guest-address models. It does not assert original Xbox C++ signatures,
complete guest/host memory mapping, ABI linkage, or game equivalence.

**Retail executable evidence:** original, user-supplied XBE SHA-256
`b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721`.
No original XBE bytes are committed. Each source retains its existing canonical
entry and complete original-body SHA-256 provenance label.

| Original entry | Full bytes | Confirmed original instruction-level behavior |
|---|---:|---|
| `0x000756A0` | 28 | Traverse next-pointer words; stop when byte `+0x29` becomes nonzero |
| `0x000A83F0` | 28 | Same loop with byte flag `+0x19` |
| `0x000A8480` | 28 | Same loop with byte flag `+0x15` |
| `0x0017D460` | 31 | Same loop with byte flag `+0x81` |
| `0x001810F0` | 28 | Same loop with byte flag `+0x41` |
| `0x000F6820` | 34 | Follow link `+0`; compare payload `+8` to one dereferenced key DWORD |
| `0x0012AF50` | 34 | Scan DWORD array by four-byte strides to matching key or end |
| `0x00169D30` | 32 | Follow link `+0`; compare payload `+12` to caller-supplied DWORD |
| `0x0012B090` | 42 | Copy two DWORDs in original read/write/read/write order; advance by eight |
| `0x001CEC30` | 42 | Same paired-DWORD copy, preserving alias ordering |

## Exact original instruction and source checks

`python3 scripts/verify_20261107_ten_guest32_drafts_xbe.py --xbe /private/default.xbe`
requires the authenticated retail executable, confirms all **10 complete
contiguous original instruction-body digests (327 bytes)**, checks **31
instruction-boundary operand windows and 23 original short conditional branch
targets**, and rejects **350 negative mutation controls**. It is an offline
private test and does not run under public CI.

`python3 tools/test_cpp_20261107_ten_guest32_models.py` compiles the **actual 10
source files** with strict Clang C++17 at both `-O0` and `-O2`. Its fixture
records each guest memory operation through existing guest32 read/write
interfaces. For 8,192 bounded scenarios per function and optimization level,
independent mock-memory oracles compare read/write order, byte offsets, DWORD
contents, and modeled live-out EAX: **163,840 scenarios total**. Ten deliberate
wrong flag offsets, field offsets, or memory strides must be rejected.

All five walk functions return the initial EAX if the first node's flag is set;
otherwise EAX is the predecessor node when a flagged child is reached. All
three search functions preserve the original output-address EAX while writing
one guest DWORD through it. The two copy routines intentionally interleave
reads and writes: hoisting the second read would lose original alias effects.
The five traversal functions and three searches require a valid terminating
structure; the fixture exercises finite paths, not malformed loops.

The source files use the already published
`include/bf_xbe_guest32_record_model.h` declarations, including distinct
8-bit and 32-bit accesses. No host pointer is cast or truncated into a guest
address. Caller-provided register and original stack words are represented as
*host-only adapter parameters*, and are explicitly **ABI_UNVERIFIED** rather
than promoted to recovered C++ prototypes. Original EAX live-out values are
modeled, but unrelated machine registers, flags, fault timing, original stack
cleanup, object identity, and full native PC linkage remain unverified.

Repository-wide source-layout, original-label provenance, progress and safety
gates must pass before publication. A syntax pass does not establish the other
six stages of the BruteForce: Reloaded reconstruction roadmap.
