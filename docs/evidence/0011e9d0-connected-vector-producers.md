# 0x0011e9d0 connected vector producers

Scope: repair observed caller storage/producers and host C11 syntax, retaining
the original entry signature and body digest. This is not complete guest ABI,
helper semantics, x87 state, Xbox behavior or byte-match verification.

The original XBE was authenticated against
`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
The private-byte verifier checks these complete contiguous original bodies:

| Entry | Bytes | SHA-256 |
| --- | ---: | --- |
| 0x0011e9d0 | 3337 | D500DE61C69517CCD74E13AA3A0A82E8EC4C365170F96B24917FF6C742A9F452 |
| 0x0001fdd0 | 40 | 13832B0FFE3CCB2E86EC5E06B944B7E16DDDFE35C04F722A781393BBBEECF49F |
| 0x00232180 | 113 | F20739B48A2D237E7011F0FF6CA28434B46CE0D1545169AD979AD4E3BDF5962C |
| 0x002334b0 | 219 | 9BB0B4B943F96BFC083B393902034811AAC5F139DD27A66A158A7FE6308AAC60 |
| 0x00232290 | 538 | 7ABC76E9D3883DB6E58D388BD0022C0B91D600872B4C039B31CB111E4D02866B |

## Connected storage

The caller originally drops register-supplied destinations from several helper
calls. Changing only qword pseudo-members would leave their values unproduced.
The repair binds the observed memory operations instead:

- Ten getter sites use the existing `bf_0001fdd0_produce` operation. EAX always
  addresses the twelve-byte scratch span at entry ESP-0xa8. Six ECX sources are
  self+0x5bc; two are the valid object at self+0x408, plus 0x14; two use the
  fallback object at self+0x6c, plus 0x14. Each writes and then consumes three
  four-byte values through the same scratch object.
- Both 0x00232180 calls push literal index zero. EBX is the selected component
  object, ESI addresses entry ESP-0xa8 and EDI addresses entry ESP-0x78. The
  original byte test at object+0x225 conditionally calls 0x0022e780 with that
  object. The new index-zero memory operation retains raw DWORD transfers:
  read +0x234/+0x230/+0x22c, store EDI+0/+8/+4, then read
  +0x260/+0x264/+0x25c and store ESI+0/+4/+8. It does not preload the second
  vector before the first stores, which matters when output/source spans alias.
- Getter scratch intentionally reuses the first cache-output C object. The
  cache/getter/packed-blend qword aliases now name F32 lanes in explicit arrays.
  No unknown bytes or missing outputs are initialized to manufacture a pass.
- The two intermediate matrices and product are distinct 36-byte objects.
  Four 0x002334b0 sites bind EAX as the product destination, ECX as self+0x278
  at 0x11efa0 or self+0x29c at the other three sites, and EDX as the observed
  intermediate matrix. The new operation preserves each original x87 operand
  read, multiplication/addition order, F32 store and subsequent read. It has
  no `restrict` and does not preload both complete matrices.
- Copies retain the observed byte-range order: output+0 (16 bytes), +0x20
  (four bytes), then +0x10 (16 bytes). EAX stays the supplied destination;
  no helper pointer return is invented. The first two old matrix-builder
  output aliases were reversed; the caller's addresses now agree with its
  original LEAs and the subsequent matrix inputs/consumers.
- Input float words at self+0x804/+0x80c/+0x808 use raw F32 stores in original
  order, with corresponding raw F32 reads. Four RSQRTSS and two SQRTSS sites
  use scalar intrinsics and low-lane extraction. Their upper lanes have no
  downstream consumers in these repaired expressions.

The operation headers are small memory projections, not replacements for
original register entrypoints. Host `long double` remains an x87 arithmetic
proxy with platform-dependent precision; original faults, status flags,
rounding modes and exceptional inputs are not emulated.

## Verification and residuals

The complete caller passes the existing sweep flags on Windows i686/x86_64.
`scripts/verify_0011e9d0_producer_storage.py` extracts actual caller stores,
getter bindings, cache-call blocks and matrix/copy blocks, then compiles strict
C11 fixtures at O0/O2. Tests cover 82 matrix alias/unaligned placements, 36
raw cache aliases, preserved input float stores/readbacks including signed
zero and a NaN payload, twelve finite SQRTSS/spill-expression cases,
all ten getter addresses, four conditional refresh paths and four
matrix call sites with distinct receiver matrices. Wrong receiver and getter
bindings are rejected by negative controls. These are bounded host fixtures,
not execution of the complete caller or original machine code.

The fixture cache-refresh function writes controlled values solely to test the
caller's conditional invocation and output binding. It does not validate
0x0022e780. Original 0x00232290 consumes four stack arguments, including the
direction span, and writes the intermediate matrix; its separate three-argument
C draft is incomplete and unchanged. The caller retains the four observed
arguments and actual output addresses. That builder, refresh logic,
0x0003d7a0 consumer, indirect callbacks, guest pointer mapping and full register/
stack ABI remain unverified. Passing caller syntax does not repair those drafts
or establish a linked runtime.

Independent review covers the changed producer/storage connections and
instruction access order. Inventory origin, ABI and behavior flags remain
unverified. Other candidates remain unchanged. No game process, installation,
assets, saves, deployment or production data was touched. Private XBE and full
disassembly remain untracked.
