# Two bounded callback-address DWORD operands

Status: original-operand evidence and isolated C++17 syntax only.
**ABI_UNVERIFIED. No native object, callback binding, whole-function behavior,
linked-game, original-versus-reconstruction or byte-match claim.**

The original-XBE identity pin remains
`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
This review uses the private indexed JSON export, not a newly authenticated
complete XBE. Complete ordered function bytes were hashed and independently
decoded; that proves consistency with the inventory body pins, not full-image
authentication. No original machine code, supplied script or game function ran.

## Exact operand evidence

| Entry | Complete inclusive body range | Bytes | Body SHA-256 |
| --- | --- | ---: | --- |
| `0x003455a6` | `003455a6..003455c0` | 27 | `5D762D4B09DF06F8D6D65CCF00F5431C964E3B91BE46D079066551B7215544A7` |
| `0x0034eea9` | `0034eea9..0034eecc` | 36 | `AB240CDB44D0D2A240FA63E30B664AE4AA662F5590252FA76EACD2880C2D9F47` |

Both entries begin with `8b442404`: load EAX from the DWORD at entry ESP+4.
At `003455b7` and `0034eebb`, respectively, exact bytes `c7401026c83400`
encode `MOV dword ptr [EAX+0x10],0x0034c826`. There is no operand-size
prefix. C7 /0 encodes a 32-bit memory destination and 32-bit immediate.
Both complete bodies end in `RET 4`; their internal jumps remain inside the
reviewed bodies. Their existing direct CALLs target `0x0034c826` and are unchanged.

Each source changes exactly one statement:

```cpp
*(code **)(param_1 + 0x10) = FUN_0034c826;
```

to:

```cpp
*(uint32_t *)(param_1 + 0x10) = UINT32_C(0x0034c826);
```

The source entry, label, body hash, direct-call declaration, direct call,
branches and all unrelated operations remain byte-for-byte unchanged.
One explanatory comment is added per file. Removing that comment and reversing
that statement reproduces the entire prior source SHA-256 and Git blob ID.
The complete pins and edit preimages are in
[`cpp_20261105_callback_dword_pair.json`](../../metadata/cpp_20261105_callback_dword_pair.json).
Neither entry overlaps the existing 100-function guest-address-literal batch.

## Explicit native storage limitations

The old draft has a `code**` cast and hence a `code*` lvalue: a host function
pointer object, ordinarily eight bytes on the tested 64-bit host. The original
instruction instead proves only a four-byte guest-memory write. It does not
recover a C++ class, object member type, host pointer, or executable binding.

The new `uint32_t*` cast deliberately represents the observed DWORD operand.
It changes the draft's purported pointee type and width, so it must **not** be
described as preserving an established native object contract. Access through
that lvalue requires suitable native object lifetime, aliasing/effective type,
alignment, address mapping and bounds. None has been established for the game
drafts. x86 itself allows unaligned ordinary DWORD accesses; C++ typed access
may not. The patch neither adds a native mapping nor dereferences these game
addresses in a test.

The pre-existing signed `param_1 + 0x10` expression and integer-to-host-pointer
conversion are retained. Signed overflow and guest address wraparound remain
unresolved. The decrement in `0x003455a6`, the read/zero store in `0x0034eea9`,
all memory side effects, direct-call ABI and full return/register state remain
outside this bounded repair. No host callback pointer is fabricated or cast
into a guest word. No shared prototype or runtime helper is introduced.

## Verification

Public gate:

```sh
python3 tools/test_cpp_20261105_callback_dword_pair.py
```

It requires Clang and checks exact source reversal, body/entry provenance,
all pinned manifest fields and instruction-byte mutations, the existing strict
C7 /0 decoder, and additive CI wiring. Both full translation units pass strict
C++17 syntax and object compilation at O0/O2 with uncapped diagnostics and
`-Werror=pointer-to-int-cast`. Reversing each source patch reproduces the original
callback-type error at both optimization levels. Existing integer-to-pointer
warnings are not suppressed or described as resolved.

An authored fixture extracts the patched RHS and substitutes an initialized,
aligned `uint32_t` array destination for the unresolved integer address.
It checks the written DWORD value and adjacent guard words at O0/O2, rejecting
wrong-value, zero, wrong-offset, short-write and wide-write mutants.
This is an isolated source/operand test, not a recovered memory mapping,
whole-caller execution, original hardware oracle or game behavior test.

Optional private validation:

```sh
python3 tools/test_cpp_20261105_callback_dword_pair.py --private-export <private-export-directory> --tooldeps <capstone-directory>
python3 tools/verify_cpp_20261105_callback_dword_pair.py --private-export <private-export-directory> --tooldeps <capstone-directory>
```

It reads only bounded JSON records selected by their validation index, checks
all 63 original body bytes and original hashes, covers every instruction,
rejects analysis overrides and independently decodes instruction boundaries
and exact operands with Capstone. Corruption controls cover both complete
records. Private exports and complete bodies stay outside Git.

Publication, inventory updates and a final exact-tree full syntax audit belong
to the coordinator after independent review. These two focused passes do not
increment published coverage by themselves. Rollback is the scoped source,
manifest, checker, test, evidence and additive CI change.
