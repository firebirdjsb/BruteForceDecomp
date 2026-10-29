# Three fixed storage projections — 2026-10-29

Status: bounded C11 storage corrections. Original entry/body identities are
unchanged. These projections do not establish complete guest ESP, stack probing,
helper interfaces, parser/decoder behavior or byte-identical output.

The original XBE was freshly authenticated against SHA-256
`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
The verifier checks all four complete contiguous bodies and instruction windows.
Only the first three source functions are edited.

| Entry | Bytes | Original SHA-256 |
| --- | ---: | --- |
| `0x00340983` | 884 | `BC2E07FA2B3F4D317175F53B94CD7BDA637F179A73C84A4F61919C4C4574BB8F` |
| `0x00342562` | 722 | `CC74015227A92774806260A6750CE6585FC4FE1066B401AA074C52D92678A324` |
| `0x0035B680` | 696 | `3FF21DD071F13A661216E296A1D0E1E7358ED2A33F667B84DC071811ACB934BC` |
| `0x00341D7A`, read-only helper evidence | 283 | `48DCD119EE6ED5BE01661502267F1566E8CFAB064545BF5B2149E240467AB1D9` |

## 0x00340983: fixed 500-DWORD scratch

`0x0034098F` supplies exactly 0x7d0 bytes to the original probe. After return,
`0x003409A8..0x003409C0` copies ESP into the scratch base, derives end=base+0x7d0,
and clears 500 DWORDs with REP STOSD. The C draft now uses uint32_t[500] for
that region and derives its base/current/end pointers from the same object.
The original zero loop remains; no guessed size, default output or extra
initialization was introduced. This follows the already documented fixed
scratch projection used by `0x0034031B` and `0x00341A1C`.

This array represents storage only. The unchanged probe call is not a connected
guest allocator in the C draft. Guest ESP, page-fault order, stack cleanup,
other frame aliases and omitted helper/register arguments remain unresolved.
In particular, the existing `local_f0[4]` followed by a 128-byte clear is a
separate C object-boundary problem. It is neither introduced nor fixed here;
the full function is not executed by the storage fixture.

## 0x00342562: coherent 0x34-byte record storage

The original tag record begins at EBP-0x33c. Instructions establish thirteen
DWORDs per record: a tag word at +0, five name words at +4, five value words
at +0x18, a count at +0x2c and a content word at +0x30. These are observed
byte offsets, not inferred application structures. The depth guard at
`0x00342651` rejects opening when depth is already 15.

The draft's disconnected locals and undeclared previous-record address are
replaced with one 17*13-DWORD arena. Row 1 represents the first original record;
rows 1..15 contain the observed live records. Row 0 provides address space for
the preincrement previous-record cursors, and row 16 permits postincrement
cursor formation at maximum depth. Neither padding row is initialized or read
as an additional guest record. No guest address or physical frame layout is
assigned to this C padding.

All existing name/value/count/content cursors now share that object. The three
existing record-base call arguments receive its row-1 base. The original
0x34-byte advance/pop expressions remain. The original `0x00341D7A` call
receives cap=5; its count initialization, DWORD name/value writes and cap test
bound the five-word spans. This makes the previous-row copies refer to the
same words the current-row writer produced, rather than an unrelated local.

Guest pointer words, host pointer width, helper argument ABI and complete
parser semantics remain unverified. The fixture uses controlled values within
the proven writer footprint; it does not substitute a parser into production.

## 0x0035B680: coefficient/sample alias

The original probe request is 0x4088 bytes before saving four registers. Let
S denote ESP after those pushes. Samples start at S+0x98, while coefficient
stores address S+0x30+4*i. The sample region extends to exclusive S+0x4098.
The C projection is one float[26+4096], covering S+0x30 through S+0x4098;
samples use base+26. Coefficient index 26 therefore aliases sample index zero.
Separate arrays would silently lose that original adjacency/overlap.

No initial values or new input bounds are supplied. The unchanged decoder's
count handling, entry arguments, x87 helper results, transform calls, probing,
fault behavior and guest stack remain unverified. Tests concern storage
positions and writes, not the decoder arithmetic or a Bink runtime.

## Checks and limits

All three complete sources pass the existing sweep flags on Windows i686 and
x86_64. The strict C11 fixture extracts the actual declarations, initialization,
record advances/pops and workspace writes. At `-O0` and `-O2` it checks:

- The original 500-word zeroing extent and base/current/end relationships,
  with surrounding canaries.
- Six traversals through all 15 record levels for attribute counts 0..5,
  checking every cursor offset, previous-row reads, untouched padding rows,
  unused attribute slots and canaries.
- All 26 coefficient slots and all 4,096 sample slots, including the final
  sample, shared index-26 boundary and canaries.

Negative controls reject a shortened clear, wrong previous-value cursor,
wrong record stride and wrong sample base. Test-only canary initialization
does not initialize production buffers. Independent read-only review approved
the bounded source changes and fixtures with the residuals above disclosed.

Other queue entries were inspected without speculative changes, including
`0x00117660` and `0x002C2A20`: their missing register-produced outputs remain
deferred. Conditional/dynamic scratch cases were not treated as fixed arrays.
No stubs, guessed prototypes, guessed guest frames or zero producer results
were added. Source inventory updates preserve origin and ABI/behavior flags.

No game process, installation, assets, saves, deployment or production data was
touched. Private binaries and complete disassembly remain untracked. Syntax
and these storage fixtures do not prove full function semantics or an Xbox build.
