# Deferred callback-frame reconstruction at 0x002ca850

Status: instruction investigation only; source unchanged. The original XBE
was authenticated as SHA-256
`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
The section-mapped, ordered 1,860-byte body matches
`1BB7A9C9653E63E2BE680B7627D15F89B99C8CEBE8B7E11A68A8C0BA3B98EDA7`.
The inspected C source SHA-256 is
`1AC3FB9053F2523E439B9F72DDC64743CA86A7D2E4550A2AF5F76C24ECEB330A`.

Let `S` be ESP after `SUB ESP,0xc80` and four saved-register pushes.
The five caller arguments occupy `S+0xc94` through `S+0xca4`.

## Observed frame lifetimes and outputs

- `0x002ca864..6d` passes the first constructor output `S+0x6e8`
  and `DWORD[argument4+8]` to `0x002c96d0`. `0x002ca87c..85`
  passes output `S+0x140` and `DWORD[argument5+8]`. These are two
  consecutive 0x5a8-byte output ranges. Constructor implementation review
  belongs to its separate owner; no constructor helper was edited here.
- The two normalized direction vectors occupy `S+0x5c` and `S+0x7c`;
  their zero fourth words are at `S+0x68` and `S+0x88`.
  `0x002ca97a..9e2` uses separate `MOVSS`/`MOVHPS`, `SUBPS`, stores
  exactly twelve output bytes, then calls `0x002b65a0` for each vector.
  Packed y/z words are IEEE-754 float bits, not integer-to-float conversions.
- `S+0x28/+0x2c` initially hold spilled float transform components.
  `0x002cad31/68` later replaces those slots with guest addresses of the
  second normalized direction. `S+0x30/+0x34` hold addresses of the first.
  Thus `local_c68` has separate scalar and pointer lifetimes.
- Cross X/Y spill to `S+0x94/+0x98` at `0x002cab09/1a`.
  `0x002cad9a..db` later writes argument pointers to `S+0x94/+0x98`
  and `S+0x9c/+0xa0`. Thus `local_bfc/local_bf8` also have separate
  float and pointer lifetimes; float-to-pointer casts do not model them.
- `0x002cad70..cd` builds four constructor-routing pointer slots at
  `S+0xdc/+0xe0/+0xe4/+0xe8`, pointing at the two output objects.
  Their guest words must not be replaced with truncated arbitrary host
  pointers. Host-only routing arrays would require an explicit distinction
  from the original guest slots and from the helper interfaces.

## Callback-record and arithmetic boundaries

The first callback record begins at `S+0x38`: vtable word `0x0038e5cc`,
f32 fields at `+4/+8`, vectors at record offsets `+0x14/+0x24/+0x34/+0x44`,
and the final sign word at `+0x54`. Its explicit extent is 0x58 bytes.
The other callback records begin at `S+0xec` (vtable `0x0038e5c4`) and
`S+0xa8` (vtable `0x0038e5c0`), each with f32 fields at `+4/+8` and
vectors at `+0x14/+0x24`, for 0x34 bytes. Observed fourth vector words
are zeroed. Unwritten gaps are not grounds for zero-initializing entire
records. Native `undefined **` storage would scale to eight-byte pointers
on the x64 syntax target and does not express these original DWORD layouts.

`0x002cabc7`, `0x002cacb0`, and `0x002caf67` pass these records to
`0x002dd8d0` / `0x002dd650`, respectively. The latter call repeats four
times with forward direction/index routing and reverse argument/object
routing. They consume the constructor outputs and may invoke callbacks;
fixing only constructor writes does not establish callback ABI or behavior.

The transform of the second direction stays extended on x87 through the
cross products (`0x002caa40..aaa3`). The first direction's transformed
X/Y are spilled to f32 at `0x002caabd/aada`; its transformed Z stays
extended. Cross X/Y then spill to f32; cross Z remains extended into its
product with `DWORD[DWORD[argument1+0x10]+0x68]`. The dot accumulates
`(Z+Y)+X`, then negates before comparison with zero. `TEST AH,0x41`
at `0x002cab53` selects the +1 sign for below, equal, **or unordered**;
a host `<= 0` expression omits the unordered case. These spills/lifetimes
are not preserved merely by renaming the draft's float/pointer variables.

## Checks and next gate

Both focused Clang targets (`i686-pc-windows-msvc` and
`x86_64-pc-windows-msvc`) with the exact `tools/sweep_c11.py` flags
reproduce float/pointer-cast diagnostics beginning at lines 141/144/150.
No repair was attempted, so no syntax pass is claimed. A complete scoped
repair needs constructor linkage, exact callback-record byte layouts,
honest guest-versus-host routing, typed helper input/output boundaries,
and the observed x87/SSE storage sequence together. No helper prototypes,
this pointers, callback results or guest frame addresses were invented.

Guest execution, complete ABI, callback targets, x87 control/status,
MXCSR, linkage and runtime behavior remain `ABI_UNVERIFIED`; there is no
original-versus-reconstruction or byte-match result. Only this note is new.
No original binary, asset, process, save, deployment target or production
data changed. Rollback removes this note.
