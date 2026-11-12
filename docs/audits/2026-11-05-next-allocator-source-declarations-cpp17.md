# Two further allocator source-interface admissions

This scratch proposal is based on `03dc660b01b358f4826cdf5bc07075f4ef60feb4`.
It adds declarations only to `00235c00` and `00243e90`. Every original source
expression, definition signature, cast, local type, parameter, return and branch
is unchanged. Removing the exact added blocks recovers the pinned SHA-256 and
Git blob of each source preimage.

Both include the existing `bf_002ea01d_allocator_guest32.h` without changing it.
`00235c00` adds the exact current `void FUN_00235c70(void)` source declaration.
`00243e90` adds the exact current definitions' declarations:

- `void FUN_0001f4f0(int param_1,uint param_2,uint param_3)`
- `int FUN_001bddb0(int param_1)`

These are source/interface admissions, not recovered ABI or behavior proofs.
The added comments retain unresolved implicit EAX/ESI or ECX inputs.

## Original-byte evidence

The private indexed stored-program export was read as JSON. Independent
Capstone 5.0.7 decoding verifies seven full contiguous stored bodies and 270
instructions, with no analyzed flow, length or fallthrough overrides. Every
real call in those bodies has a recorded continuation at the next instruction.
Every local branch target is an instruction in its selected body, and each
selected body ends in a real RET. The allocator import remains indirect.
Full original bodies and private exports are not part of this package.

`00235c00..00235c6c` is 109 bytes, SHA-256
`AC6F7D5740122A99DA800A1CCD653D3CC490655095551FD31EF83A91A0575D99`.
Its complete real call list is:

- `00235c0c: e80c440b00`, allocator `002ea01d`, preceded by `6a68`
  (PUSH 0x68). EAX is copied to EDX at `00235c11`; ADD ESP,4 at `00235c13`
  cleans the allocator size word.
- `00235c4f: e81c000000`, target `00235c70`, after EAX is loaded from
  the caller's incoming stack word at `00235c3b` and ESI is set to EDX.
- `00235c64: e807000000`, the same target, on the other path. EAX is
  loaded from `[ESP+8]` and ESI from `[EBX+0x10]` first.

Both paths restore ESI and execute RET 4. The current caller has a `(void)`
source signature despite that real incoming stack word. The callee's first
instructions load `[EAX]` and store through ESI. No missing register or stack
input has been invented or repaired. The existing `uint32_t`-to-pointer cast
is unchanged and is not a guest-address mapping. The REP STOSD direction flag,
zeroing behavior, failure path and dependent callees have not been modeled.

`00243e90..00243ed4` is 69 bytes, SHA-256
`59C0B5E22FF9F68FF9FFE9D21078F3E1CFCAA1250317298AC23B475FFCD511BD`.
Its complete real call list is:

- `00243e93: e885610a00`, allocator `002ea01d`, preceded by `6a30`
  (PUSH 0x30). EAX is copied to ESI at `00243e98`; ADD ESP,4 is at
  `00243e9c`, before the allocation-result comparison.
- `00243eb6: e835b6ddff`, target `0001f4f0`. Real stack words are pushed
  in order -1, zero, EDI; ECX receives ESI. The exact current source call
  remains `FUN_0001f4f0(unaff_EDI,0,0xffffffff)`. The callee takes three
  incoming words and returns with RET 12; its implicit ECX state is missing
  from the current source interface. Its real EAX return is also not modeled
  by the existing void declaration and is ignored by this caller.
- `00243ec8: e8e39ef7ff`, target `001bddb0`. LEA creates EDX=ESI+0x20
  and ECX=EDI+0x20; PUSH EDX supplies the existing single source argument.
  The callee reads `[EBP+8]`, saves incoming ECX in EBX, and returns with
  RET 4. Its SEH and implicit ECX state remain unmodeled.

Both caller paths restore ESI and RET. The successful path stores ESI through
EBX at `00243ecd`; the failed path stores zero through EBX at `00243ed1`.
The original signed `int iVar1` assignment from a `uint32_t` allocator result
is unchanged. Above INT_MAX that conversion is implementation-defined in
C++17. Signed address arithmetic, guest mapping, uninitialized pseudo-registers,
callee preservation, SEH, indirect dispatch and native linkage remain
unresolved. Callee source pins and full bodies do not validate their semantics
or recursively recover the ABI of their dependencies.

The existing allocator wrapper `002ea01d` forwards one size DWORD through
`00067cd0` to dynamic import slot `003bc650`. Its temporary PUSH 1 is not an
import argument. No host allocator or guest-pointer translation is provided.
Stored body/hash agreement is not fresh authentication of the original XBE.
The fixed original XBE hash remains
`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.

## Gate and measured results

The public gate pins exact source preimages/reversals, current callee source
signatures and hashes, both headers, all seven original body identities and
ranges, complete real call lists, and narrow public instruction windows.

Measured using strict Clang C++17:

- Eight passing candidate syntax/object builds across O0 and O2.
- Seven rejected original/declaration-removal syntax builds.
- 206 rejected metadata leaf mutations and 215 narrow-window byte mutations.
- 200,016 initialized scalar observations per optimization and four rejected
  wrong-size/return fixtures across O0/O2.
- Optional private replay: seven complete bodies, 270 instructions and 98
  rejected record mutations.

Only authored initialized scalar fixtures execute. One preserves the exact
`iVar1 = FUN_002ea01d(0x30)` expression; the other checks the `0x68` size and
unsigned return bits without performing the canonical pointer conversion.
They observe this compiler's signed high-bit round-trip, not portable signed
conversion, caller behavior, guest allocation or memory writes. Canonical
callers and original machine-code streams never execute.

Run the integrated public gate with:
`python3 tools/test_cpp_20261105_next_allocator_declarations.py --compiler clang++`.
The optional private replay adds `--functions PRIVATE_FUNCTIONS_JSONL` and
requires Capstone. A scratch package can use `--root REPO --overlay PACKAGE`.

Integration must add this gate to the existing canonical C++17 CI workflow,
perform an exact-tree full inventory audit and independently review this
proposal. No full inventory gain, baseline change, runtime test, link success
or 1:1 equivalence is claimed by these focused checks.

## Other triage outcomes

A fresh bounded scan of declaration-only allocator failures under 200 stored
bytes tried 57 exact-source declaration overlays; 11 passed syntax. This
screen was only candidate discovery. `0016d070` is explicitly rejected despite
passing syntax and its export validation flag: its official record has just
`33c0` at `0016d070..0016d071`, not the pseudocode's call continuations.
`002003a0` and `002083c0` remain excluded for false CALL_RETURN/missing
continuation, and `002b54f0` still requires incompatible argument/return edits.
Several other passing overlays have overridden/incomplete dependent bodies,
an unresolved indirect tail jump or known draft expression issues; none is
admitted by this package.
