# Nine bounded object-pointer C++17 repairs — 2026-11-04

## Exact full-inventory result

- Starting source state: `d3d193be8d198bb328101f056ae0c4d356d952e3`, identical canonical source bytes to audited commit `6487b5b71c451d345f54f7abda1d8245dbf16591`.
- Five object-pointer spelling repairs: `800a5488`.
- Four pointer-argument spelling repairs and final audited tree: `80c91e2694cf5461bfe68f8712cf182830e578fe`.
- Compiler: official Debian Clang **19.1.7 (3+b1)**, x86_64 Linux host.
- Before: **3,947 / 13,694** passing, **9,747** failing, **28.822842%**.
- After: **3,956 / 13,694** passing, **9,738** failing, **28.888564%**.
- Net gain: **nine** complete isolated C++17 syntax passes, with no regressions.
- Full audit: **zero provenance errors and zero check errors**; exact-tree verification passed.

Cumulative gain across the two pointer batches is **eleven** passes, from the
original **3,945 / 13,694 (28.81%)** baseline to **3,956 / 13,694 (28.89%)**.
Only the nine entries below changed status in this batch, all fail to pass.
All other 13,685 canonical source hashes remain unchanged from the previous
batch. All original body-digest labels are unchanged.

This is a cloud-local audit, not a new published GitHub Actions result. The README
and published progress JSON remain tied to their existing real CI run. No CI run
ID or remote publication is invented.

Full after-report SHA-256: `5767a1f82f7fbb40183742f52c797f83648b996a4a9bf2c8d8ee70533fd0b5e8`.

## Changes and preservation boundaries

| Entry | Existing conversion made explicit |
| --- | --- |
| `0x0008c210` | Three unsigned DWORD global addresses to existing signed DWORD pointers; original indexing stays inside the casts |
| `0x000a50b0` | Unsigned DWORD pointer plus two elements to the existing signed DWORD pointer |
| `0x000b8860` | Existing global address returned through the already-declared unsigned-character pointer type |
| `0x0036a7c0` | Two unsigned DWORD pointer-plus-one expressions to existing byte pointers; the original four-byte stride is retained |
| `0x0036fbe0` | Unsigned DWORD pointer plus `0x12` elements to the existing signed DWORD pointer |
| `0x0004cb60` | Existing `int` local address to corresponding unsigned DWORD pointer argument |
| `0x00073550` | Existing `int` parameter address to corresponding unsigned DWORD pointer argument |
| `0x0008dfb0` | Existing `int` local address at two unchanged call sites |
| `0x000de540` | Existing `int` parameter address at an unchanged call site |

These are **thirteen explicit object-pointer casts**, not pointer-to-integer or
integer-to-pointer conversions. No argument count, function declaration,
function signature, numeric conversion, stored value, arithmetic expression,
dereference or control-flow statement was changed. Corresponding signed/unsigned
integer access and character views preserve the existing source-level address
intent. Original C11-era draft acceptance is not treated as proof of correctness.

Exact before/after source hashes, original body hashes and bounded replacements
are recorded in:

- `metadata/cpp_20261104_object_pointer_spellings.json`
- `metadata/cpp_20261104_pointer_argument_spellings.json`

Reversing those replacements reproduces each full prior source file byte for
byte. The pointer-argument records also pin unchanged existing declarations and
actual callee source signatures/hashes. No call prototype or register argument
was invented to obtain a pass.

## Historical evidence retained

The `0x0036fbe0` file also belongs to the existing 209-case literal repair ledger.
Its older manifest, source hashes and original operand evidence were **not**
rewritten. A separately pinned **source-only spelling overlay** composes the new
cast over the old reviewed source. It is explicitly excluded from new XBE
instruction-evidence claims.

The complete historical gates pass:

- 209-case ledger: **15 complete, 194 partial**, **469** original DWORD operands;
  fourteen prior instruction-gated completions and one explicitly source-only
  completion.
- Separate 250-case ledger: **43 complete, 207 partial**, **483** original DWORD
  operands, unchanged.

Both retain O0/O2 compilation, exact original-source/Git-blob restoration and
literal/overlay corruption controls. Ten new overlay tests reject changed source,
forged historical hashes, changed overlay metadata, reversed casts and mixing
source-only overlays into the instruction-evidence group.

## Additional tests

- All nine complete corrected files pass strict C++17 syntax at O0/O2; all
  original-source negative controls fail for their expected conversion errors.
- The four pointer-argument cases additionally compile to host object files at
  both optimization levels.
- Native fixtures test address identity, signed/unsigned scalar alias access and
  unchanged element strides; header-free i386 fixtures check 32-bit widths and
  compilation. These are expression checks, not Xbox ABI verification.
- A synthetic bounded-buffer harness executes `0x0036a7c0` at O0/O2 with counts
  0, 1, 2, 3, 4 and 6, checking output words, return value, pointer increments and
  untouched output tails. This is not comparison against original game execution.
- Independent review, source layout/body-label checks, repository safety,
  C++17-only policy, previous comparison regressions, declaration guards and
  progress/publication controls pass. New regression tests are wired into CI.

## Remaining limits and rejected candidates

Implicit registers, guest addresses, global-storage identities and bounds, table
adjacency, x87 behavior, full call ABI and native linkage remain unresolved. No
original retail XBE was reauthenticated. Neither syntax coverage nor these
synthetic fixtures certify a 1:1 game reconstruction or a playable native build.

Other reviewed candidates were held when they exposed integer/pointer narrowing,
missing register arguments, pointer-depth changes, undeclared calls or ambiguous
float/integer aliasing. No further complete-pass repair was found in the reviewed
byte/signedness/void-pointer queues. Original instruction and object/ABI evidence
is needed before resolving those remaining assumptions. No user-local files were
accessed; all work and compiler execution stayed in the cloud.
