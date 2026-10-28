# 0x000BF7A0: connected vectors and 0x000A0C60 memory operation

Status: scoped storage, memory-operation and SSE correction. Both entries
pass focused syntax checks; original calling conventions, virtual interfaces,
x87 environment, complete helper semantics and game behavior remain unverified.
One formerly failing caller gains a syntax pass; the helper already passed.

## Provenance

The original XBE SHA-256 is
`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
Ordered body bytes were reauthenticated against these digests:

| Entry | Body bytes | SHA-256 |
| --- | ---: | --- |
| `0x000BF7A0` | 1691 | `762D235EBA97653EA681FA7726DE9FCF54CD4D582A8662525AAC0420ED6163F7` |
| `0x000A0C60` | 130 | `935B88AD31D3725F6207AA21E0490ED49242151D70F54666D78641AE85450B90` |
| `0x0006DFC0` (unchanged dependency) | 686 | `FB8D19C22EC7C4C248DA7329C705E6673926F9E7FB9AA9B82127F011FAD87928` |

Source paths are routed through `tools/source_layout.py`. Both original entry
signatures and body labels are retained. One shared C11 memory operation under
`src/contracts/` supplies the helper draft and this caller; no second algorithm,
new original-entry parameter, global register ABI or executable bridge is added.

## Observed caller dataflow

Offsets refer to the observed ESP at each instruction, not host stack adjacency.
For the stable frame in this branch, the three live regions are ESP+0x2c,
ESP+0x54 and ESP+0x6c, each twelve bytes. Their producers and consumers are:

1. `0x000bf90d/0x000bf91c` forms and passes ESP+0x2c to `0x0006dfc0`.
   That callee writes three DWORDs through its second stack argument at
   `0x0006e1d2/0x0006e1d8/0x0006e1e3`, then scales that same region at
   `0x0006e200..0x0006e213`. Its entry has four stack arguments and RET 16.
   The caller declaration matches the existing C definition, including two
   four-byte floats rather than default-promoted doubles. This establishes
   argument widths and connected output storage, not the complete callee ABI.
2. `0x000bf938..0x000bf959` obtains RCPSS from the preceding scalar, broadcasts
   it and multiplies `[X,0,Y,Z]`. The caller now retains all four MULPS lanes
   and the four-plus-eight-byte output stores. Numeric conversion of a packed
   integer and the undeclared `_fStack_1c8` alias are removed.
3. `0x000bf95d..0x000bf996` forms three float sums from the actual earlier
   virtual-return pointer. `0x000bf99a..0x000bf9bb` broadcasts binary32 0.5
   as the LEFT MULPS operand and writes twelve bytes at ESP+0x54. A packed
   two-float pseudo-variable and a float-to-pointer lifetime are unnecessary.
4. `0x000bf9e9` obtains the matrix pointer in EAX, retained in EDI. At
   `0x000bf9ee/0x000bf9f2/0x000bf9f6`, EDX receives ESP+0x54, EAX receives
   ESP+0x6c and ECX receives EDI. The shared memory operation is supplied
   exactly those three input/output objects. The original helper leaves EAX
   as its output address, so `0x000bf9fd` reads its actual third output.
5. FCHS at `0x000bfa00` produces the next scalar. `0x000bfa0e..0x000bfa2b`
   retains the full MULPS and twelve-byte in-place store at ESP+0x2c.
   Three x87 additions at `0x000bfa2f..0x000bfa56` then spill each coordinate
   as binary32. The same region is passed to the existing `0x0015b450` call.

ECX and EDX outputs from `0x000a0c60` are overwritten before their next use;
EAX's surviving address is accounted for by the connected output object.
No caller condition consumes the helper's flags. This liveness observation is
specific to this call site, not an interface promise for other callers.

## 0x000A0C60 operation and precision distinction

The shared operation has explicit host memory arguments corresponding to original
EAX output, ECX matrix and EDX input. The original `void(void)` entry still has
unbound register locals and delegates to that operation. It is not runnable as
an original Xbox entry merely because it compiles.

- FSUB results X and Y spill through FSTP m32fp at `0x000a0c68/0x000a0c72`.
- Z uses FST m32fp at `0x000a0c7c`, leaving its unspilled extended value on
  the x87 stack. The X dot product uses that value. Y and Z dot products load
  the rounded Z spill. The C proxy therefore keeps separate extended/spilled Z.
- Each dot product retains `(Z*matrix + Y*matrix) + X*matrix` operand order
  and original matrix-word read order. All source reads finish before any
  output write, including when input, matrix and output regions overlap.
- Z and Y spill first; output stores occur at offsets +8, +0 and +4 in that
  order. There is no `restrict` assumption or hidden zero initialization.

Host `long double` and float conversions are arithmetic proxies. Original
precision control, status, NaN quieting, traps and aliasing with the helper's
own guest scratch stack are not modeled or verified.

## Checks and boundaries

Before editing, the caller failed unchanged sweep flags on i686/x86_64 Windows
Clang; the helper passed. After editing both pass without diagnostics on both
targets. The earlier four-lifetime verification script now checks this complete
caller instead of compiling only its scalar reciprocal fixture.

Private native tests compared the exact shared operation with an adapted
sequence of the original x87/MOV instructions under masked RNE/extended x87
control `037f` and MXCSR `1f80`. O0 and O2 each passed 385,000 full-buffer
comparisons using exactly representable finite integer inputs/matrices and 77
aligned/unaligned, disjoint/overlapping output placements. A wrong matrix
offset mutation was rejected. The full XBE and original helper body were
authenticated before building this oracle; its host register/stack adapter
is not byte-identical original code or an original-machine execution test.
These cases do not test non-finite inputs, cancellation/rounding extremes,
exceptions, original flags/register state, complete callers or the game.

Independent review accepted the changed memory/storage/SSE facts and repeated
the four focused architecture checks and both oracle executables. The complete 0x0006dfc0
draft still has unresolved packed-lane/numeric conversions; all virtual targets,
other callback/output interfaces, guest addresses, original stack aliases,
x87 return transport and the later ignored/popped helper result remain
ABI_UNVERIFIED. Their existing code is not promoted to reviewed semantics.
No game execution, native port deployment, production or asset change occurred.
Rollback restores the two sources/script and removes this operation header/note.

Portable regression fixtures are retained in
`tests/test_20261028_memory_operations.c` and run by
`scripts/verify_20261028_memory_operations.py` in the full audit workflow.
Each O0/O2 run checks 745 fixed-value full-buffer cases, including unaligned
and overlapping output placements and FD10 raw first-word preservation.
These golden tests check the shared memory operations, not the caller ABI
or original-game execution.
