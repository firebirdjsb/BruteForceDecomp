# 0x002cafa0 SSE storage repair and 0x002d8e40 deferral

Status: the changed lane/storage operations are observed in original bytes;
focused C11 syntax checks pass for the repaired source. Complete interfaces,
x87 equivalence, Xbox behavior and byte-identical rebuilding remain unverified.

## Original evidence

The original XBE was authenticated against SHA-256
`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
The ordered function-body bytes were read from XBE sections and independently
hashed against the function export:

| Entry | Bytes | Body SHA-256 |
| --- | ---: | --- |
| `0x002cafa0` | 1275 | `C1084551861B663E1F22057313342ECC7CD7FAAE50697FFD4807D51815FB3E6C` |
| `0x002d8e40` (deferred, unchanged) | 2145 | `B3AE974AA4B632FB10A3FC1711064F6D45A3FDF5348B258C98457AFDB63F0B4E` |
| `0x002cd2b0` (unchanged dependency) | 520 | `C028D0C3EFA30CA8C2F104DDD2BCDF9A132C1E73BB429530EF96A4334198421F` |

Source paths were resolved through `tools/source_layout.py`. No implementation
or data from another game was used.

## 0x002cafa0

Original `ESP+0x54/+0x58/+0x5c` is one twelve-byte region. Its initial values
come from the caller's own x87 stores at `0x2cb0c5/0x2cb0cb/0x2cb0cf`.
It is now a three-float array. The addresses formed at `0x2cb25d/0x2cb279`
and stored at `0x2cb270/0x2cb294` are the actual pointers later used for
the loop's output and norm reload. No new callee output was invented.

`0x2cb37a..0x2cb391` loads input triples with memory `MOVSS` plus `MOVHPS`,
giving lanes `[x,0,y,z]`, and performs `SUBPS XMM1,XMM2`. The repair retains
raw input words and the observed cleared lane 1. `0x2cb39b/0x2cb39f` stores
exactly four plus eight bytes through the original output pointer. This
removes decompiler numeric conversions from packed integer bit patterns.

`0x2cb3aa..0x2cb3c0` reloads that actual stored region and squares XMM0.
The complete reduction is represented as SSE operations in original order:

1. `SHUFPS XMM1,XMM0,0x80`, using the difference and squared vectors.
2. `ADDPS XMM1,XMM0`, retaining all four lane additions.
3. `SHUFPS XMM1,XMM1,3`, selecting the y/z square sum for lane 0.
4. `ADDSS XMM1,XMM0`, yielding `(y*y+z*z)+x*x` in the low lane.

`0x2cb3c4/0x2cb3ca/0x2cb3ce` stores and transfers one binary32 word.
`0x2cb3d5 RSQRTSS` replaces only lane 0 of the squared XMM0 vector;
the other lanes are retained. The three subsequent x87 multiplies still
use scalar C draft expressions. Their extended intermediates have not been
emulated or verified.

The entry signature and original-body hash remain unchanged. Other stack
objects, callback layouts, pointer-table arithmetic, implicit register inputs,
external prototypes, guest 32-bit addresses and complete stack cleanup remain
`ABI_UNVERIFIED`. The array repair establishes only this observed region,
not the surrounding draft's host stack layout or suitability for execution.

## 0x002d8e40: deferred without source edits

The current first errors are an array assignment from `rsqrtss`, an invalid
pseudo-member and a float/pointer collision in `local_fc`. Fixing these alone
would leave unresolved producers and register contracts:

- `0x2d8e46` saves the entry ECX pointer. The C signature does not carry that
  input and instead declares an uninitialized `in_ECX` local.
- Before the call at `0x2d9120`, `0x2d9069` forms an ESI output pointer into
  the caller's stack at `ESP+0xb4` (the prior push remains active). Before
  the call at `0x2d9149`, `0x2d9145` forms the second ESI output pointer at
  `ESP+0x48` (again with the pending push). Both C calls pass only the
  explicit stack argument and omit this ESI output bridge.
- The authenticated callee `0x002cd2b0` writes `[ESI+0xc]` at `0x2cd48b`
  and table-selected dwords through `ESI+EAX` / `ESI+EDX` at
  `0x2cd495/0x2cd4a5/0x2cd4b1`. Thus simply replacing caller locals with
  arrays cannot establish their producers. The caller reads the resulting
  stack data immediately at `0x2d914e` and later branches on it.
- `0x2d9314 RSQRTSS` modifies the low lane of the then-current XMM0.
  Calls before it may affect its upper lanes; the draft's `in_XMM0` array
  does not carry a verified entry/callee register state. No zero upper lanes
  or new register parameter has been manufactured.

The later `0x2d954e..0x2d9588` sequence has the same observed norm reduction
shape as the repaired function, but the complete changed dataflow would still
depend on the missing producer/ABI bridges above. This source is deferred
before a speculative repair. Its baseline syntax failures remain visible.

## Checks, scope and limits

An independent reviewer reauthenticated all three original bodies, checked
the changed storage/lane dataflow, and repeated both architecture checks.
Approval covers these changed facts and syntax, not complete interfaces.

Both sources initially failed focused i686 and x86_64 Windows C11 syntax
checks. The repaired `0x002cafa0` passes both without diagnostics using the
unchanged `FLAGS` imported from `tools/sweep_c11.py`; `0x002d8e40` remains
byte-for-byte unchanged and fails both at the original diagnostics. Source
whitespace and entry/body-hash retention were checked separately.

SSE operations use the host CPU and MXCSR. Exception flags, rounding modes,
NaN/subnormal behavior and Xbox-vs-host results have not been compared.
No runtime, game, link or byte-match test was performed.

Scope is one source and this note. Shared headers, metadata, verifiers and Git
state are coordinator-owned and were not edited by this owner. No original
game data, assets, deployment target or production process was touched.
Rollback consists of reverting the scoped source/note change after integration;
there is no installed module or game-state change to undo.
