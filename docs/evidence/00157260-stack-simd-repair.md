# 0x00157260 bounded storage repair

This supersedes the no-repair outcome in `00157260-stack-simd-deferred.md`
for the storage path below. It does not promote the entry function beyond
an ABI-unverified C draft. Original XBE SHA-256:
`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
Ordered original body ranges are `00157260..00157379` (282 bytes) and
`00157380..001575c5` (582 bytes). Their concatenated 864-byte SHA-256 is
`80C2A63D64FAD4C47F5885C9845DA25BF670BC67D50C0FF06AF6C64BF4EBB4E7`.
Both input-file and body digests were freshly checked against the private XBE.
No original binary or full disassembly is published here.

## Observed storage and lifetime facts

Let S be ESP after SUB ESP,4c and PUSH EBX/EDI/EBP/ESI. Inside the main
conditional body, the following offsets are relative to S, outside temporary
call-argument pushes. They are stack locations, not inferred object fields.

| Stack offset | Observed use |
| --- | --- |
| +14 | Saved incoming ECX; reloaded before indirect call and output stores |
| +18 | Saved iterator |
| +1c | Binary32 maximum; initialized zero, updated by raw DWORD copy |
| +20 | Binary32 coefficient spill at 1573ea |
| +24 | Binary32 second sum at 15743d |
| +28 | Binary32 third sum at 15742c, then address S+3c at 15745e |
| +2c | Immediate binary32 half, word 3f000000 |
| +30/+34 | Copied second/third result DWORDs; no subsequent relevant read of +30 |
| +38 | Iterator sentinel; later separately used as output scratch for 0xe0350 |
| +3c/+40/+44 | Three binary32 sums used through an internal stack pointer |
| +48/+4c/+50/+54/+58 | Five contiguous DWORD object passed to 0x1fe3d0; first three subsequently reused for SIMD output |

At 1572bc..1572dd the five words are `003a3fb4, 6, 0, ESI, ffffffff`.
ESI is zero or the observed selected EAX from 1572b6. PUSH changes the
instruction operands by four bytes. 1572e1 passes the address on the stack;
1572fc adds ESP,4. ECX is live at this call. The C array makes these five
guest-width words contiguous and keeps them alive for the entire entry;
it does not establish a host-compatible call prototype or object layout.
The vtable-looking word is an immediate guest address, not a host pointer to
an extern C variable. No later call in this body explicitly receives this
array; it is not split into unrelated C locals when reused.

157380..157391 compares binary32 values and copies a DWORD when ordered
greater; 15751e..157522 copies the final DWORD to ECX-derived storage +d4.
The old integer-to-float and float-to-integer conversions were removed.

1573be..1573ea computes the coefficient with x87 then spills to binary32.
The private original constant words at 3a4f78/3a51fc/3a5038 were checked as
`3f800000/3ecccccd/3f19999a`. The revised draft uses exact binary32 constants
and an explicit coefficient spill. 1573f0..157408 compares the extended
product against binary32 +100 before rounding the successful store to m32;
the draft now represents that ordering and copies the float storage.

15741b..15745a reads +f0/+2c, +ec/+28, +e8/+24 in that order, with each
sum rounded through an m32 FSTP before SIMD. At 157470 memory-source MOVSS
clears the upper 96 bits; MOVHPS overwrites lanes 2 and 3. Thus the packed
operand is `[sum0, +0, sum1, sum2]`: lane 1 is known zero, not inherited
register state. SHUFPS broadcasts half and MULPS scales every lane.
15747f/157483 write lanes 0,2,3 into the first three earlier object words.
15749c..1574a9 copy those DWORDs to +e8/+ec/+f0 only after all inputs have
been consumed. The file-local helper retains this staging, write order,
and the last two object words. It is an internal operation, not a new
original-game entry ABI or globally shared structure.

## Checks and explicit limits

- Clang C11 syntax passes for i686-pc-windows-msvc and x86_64-pc-windows-msvc
  using `tools/sweep_c11.py` FLAGS and `-Iinclude`.
- `tests/test_00157260_stack_simd.c` includes the actual changed source helper
  and compares it to `tests/x86_157260_reference.S`, a native instruction
  oracle adapting the observed sum/scale block's memory bases to the Windows x64 or SysV x64 test ABI.
- 20,392 finite-input comparisons pass, including zeros of both signs,
  subnormals, normal boundaries, finite extremes, 20,000 deterministic
  random inputs, direct input/output overlap, full destination-buffer
  comparison, and preservation of trailing scratch words. Both -O0 and -O2
  passed all 20,392 cases. Two negative controls mutate the actual helper:
  numeric conversion of raw float words, and clobbering the last two scratch
  words. Each must produce a reported result mismatch.
- Test mode is masked x87 extended/RNE and MXCSR 1f80 (no FTZ/DAZ). This is
  current-host instruction evidence, not execution of the original function.
  The test oracle saves/restores x87 control; the harness saves/restores MXCSR.

Run `python scripts/verify_00157260_stack_simd.py` on x64 with Clang.
The runner copies the exact file-local helper definitions preceding the entry
signature to a temporary header and includes those definitions in the test.
It does not link the unused, unresolved entry or fabricate its callees. Full
entry syntax is checked separately with sweep flags and the complete audit.
This explicit boundary also works at -O0, where relying on linker garbage
collection to remove unresolved calls failed. Add `--xbe <private-original>`
to authenticate the pinned body, instruction windows and constant words.
The oracle's memory bases adapt to either Windows x64 or SysV x64; neither
mode executes the original Xbox function. No installation/deployment occurs.

Independent integration review checked the body ranges, object words, ordered
maximum/threshold predicates, exact coefficient words, staged sums/lanes and
output ordering. No complete interface or behavior promotion is implied.

Host `long double` is not a portable x87 emulator (Windows Clang may use
binary64). The coefficient/product chain, non-default x87 precision/rounding,
NaN payload propagation, signaling NaNs, exception flags/traps and guest
control-state interactions remain unverified. In particular the finite
default-mode sum test does not validate the coefficient comparison chain.
Existing uninitialized `in_ECX`, indirect call register contracts, helper
prototypes, pointer widths elsewhere in the entry, the +38 output-scratch
callee interface, and original stack-frame exposure are still ABI_UNVERIFIED.
No gameplay meaning, byte match, complete entry behavior, or Xbox execution
is claimed. No production data or installed game was touched.
