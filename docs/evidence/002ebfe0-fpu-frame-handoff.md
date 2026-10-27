# 0x002EBFE0: deferred x87 control and caller-frame reconstruction

Status: **DEFERRED; original C source unchanged.** No repair, syntax pass,
linked execution, runtime equivalence or byte match is claimed. This is a
compact evidence handoff for a later reconstruction of the original FPU frame.

## Provenance and current source

- XBE SHA-256:
  `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
- Function entry `0x002EBFE0`; one contiguous original body range
  `0x002EBFE0..0x002EC1A4`, 453 bytes; original body SHA-256:
  `9634200AABE2CC9A1D2B0C379F36FFA1A570EC8721F0EDABDAEA4DA596CF2503`.
- Source:
  `src/main_unclassified/band_002e/0x002ebfe0.c`.
- Source SHA-256 at this review:
  `81E65D802DAEBF011CAF9BABBA10EB19B736A7DCD8A1F926EF7A28ECC64B7111`.
- Fresh inspection verified the whole-XBE hash, ordered function bytes and
  body digest before disassembly. No third-party game behavior was used.

The visible first diagnostic is undeclared `_local_4`; `local_4` is declared
as a short while its synthetic CONCAT22 expression has DWORD width. Hidden
errors include array pseudo-fields, an impossible array assignment and scalar
`param_2._3_1_`. Fixing those spellings does not recover the frame protocol.

## Saved DWORD: two different upper-half lifetimes

Let `S` be ESP immediately on entry, including the original return address.

| Site | Observed instruction effect |
| --- | --- |
| `0x2EBFE0` | ECX receives the full input EAX |
| `0x2EBFE2` | PUSH EAX makes ESP=`S-4`; saved DWORD initially contains all input EAX bits |
| `0x2EBFE3..0x2EBFE4` | WAIT; FNSTCW writes exactly two bytes at `S-4`; upper 16 bits at `S-2` retain input EAX |
| `0x2EBFE7..0x2EBFEF` | Compare saved low word with `0x027F`; call `0x2F060D` if unequal |
| `0x2F060D` | At helper ESP=`S-8`, load DWORD `[ESP+4]` = saved DWORD at `S-4` |
| `0x2F0611..0x2F061F` | AND `0x300`, OR `0x7F`; write WORD `[ESP+6]` = `S-2`, then FLDCW that word |

Thus the high half is **not preserved for the entire lifetime**: the slow path
repurposes it as a temporary control word `(original_control & 0x0300) | 0x007F`.
The low half continues to retain the original control word. The exact helper
body has no EAX or ECX write; treating its C return as a new EAX or inventing a
new ECX result would misrepresent this observed edge.

Helper `0x002F060D` has 23 original bytes, SHA-256:
`E6EC999D45C3C78E22ED722D9CDD003CA3E8685D7954A7D030915DF1E55EB902`.

Tail target `0x002F0696` compares the saved low word at its entry ESP with
`0x027F`, conditionally FLDCW from that low word, then POP EDX and RET. This
uses the caller's saved slot rather than an ordinary standalone C call frame.
Its 13-byte original body SHA-256 is
`B0971B5D2CB4945DC056293D2DAC8D989FC1D1488B22EDB4125E67FDF93C85BD`.
The local `0x2EC075..0x2EC076` exit also POPs EDX before RET. Restore behavior
on other helper/tail paths must be recovered, not assumed from these examples.

## FPU save frame and the unsupported 80-bit draft value

Let `B=S-4`, ESP on the normal body after the saved DWORD was pushed. On the
`0x2EC0DF` path:

1. SUB ESP,`0x74` allocates 116 bytes: frame base `F=B-116`.
2. MOV ECX,ESP; PUSH ECX places the frame-pointer word at `F-4`.
3. SUB ESP,`0x10` places the two scalar argument slots at `F-20` and `F-12`.
4. `0x2EC0E8` and `0x2EC0EB` FSTP two **qword** values into those slots.
5. WAIT; `0x2EC0F0` FNSAVE writes the 32-bit x87 save format at `ECX+8`:
   108 bytes at `F+8..F+115`, and resets the x87 state.
6. CALL `0x2F07E5` at `0x2EC0F3`; actual argument words and x87 state belong
   to this machine frame, not the draft's inferred C prototype.
7. ADD ESP,16; POP ECX recovers `F`.
8. `0x2EC0FC` FRSTOR reads `F+8`; `0x2EC0FF` FLD qword `[F]` loads a result
   from the frame's first eight bytes; ADD ESP,116 restores `B`.

The existing `local_78[20]` does not represent the 116-byte frame. Merely
enlarging it would leave the initial FNSAVE contents absent and could pass
uninitialized host memory to a helper that expects a complete protocol.
The helper's frame writes, argument order and register dependencies have not
been reconstructed here.

There is **no 80-bit memory store in this function body**. Its xword memory
instructions at `0x2EC150` and `0x2EC195` are loads from guest constants.
The draft assignment `auStack_e = (undefined1[10])in_ST7` therefore has no
observed original 80-bit store to preserve. Every other use of `auStack_e` is
a synthetic return-address write to pseudo-field `._6_4_`; there is no read of
this draft array. `in_ST7` is used only by that impossible assignment.
`uStack_64` is assigned a synthetic return address and never read. Such dead
draft artifacts could be removed during a frame reconstruction, but doing so
does not supply the missing FNSAVE/FRSTOR or x87 stack operations.

## Additional register and precision boundaries

`0x2F063D` (the export named `__fload_withFB`) reads EDX-addressed guest
storage, loads ST(0), returns EAX classification bits and condition flags, and
on its special path also changes ECX. The caller branches on its ZF result
immediately at `0x2EC00F`. The existing draft reuses a Boolean computed before
the call, which is not that flag output. No conventional C prototype has been
established for this edge.

Helper `0x002F063D` has 67 original bytes, SHA-256:
`49756C88592603C59A91D5ECF8589DAB665FC8A2AD0F138E5D6E3C3B05C21169`.

`0x2EC13F..0x2EC16A` explicitly loads CH from stack byte `[ESP+0xF]`,
shifts CH by seven, and tests CH against the helper's CL. That source byte
is the high byte of the draft's `param_2` word, but CL's register result must
remain separately established. Helper `0x2EC1A5` has x87 stack effects and
returns its classification in CL; it is not a numeric scalar C return.

Guest control-word rounding/precision, x87 stack state, exceptions, condition
codes, extended constants, EAX/ECX/EDX inputs/outputs and tail exits remain
unresolved at function scope. Host long double and ordinary numeric casts do
not establish these contracts. The discarded `log2` expression does not model
the original FYL2X instruction either.

## Recommended next scope and checks

Assign a single senior owner to reconstruct the saved DWORD, actual 116-byte
FPU frame, two qword argument slots, helper state transitions and tail exits
from the pinned original instructions. Review `0x2F07E5`, `0x2F05A4`,
`0x2F05F8` and `0x2F06E1` before choosing any host interface. Preserve unknown
entry bits; do not zero-fill the FPU frame or supply guessed helper arguments.

Checks completed: source-use inspection, original-XBE/body digest verification,
fresh instruction inspection of this function and the four helper bodies
described above (`0x2EC1A5`, `0x2F060D`, `0x2F063D`, `0x2F0696`), and a clean
source-only diff. No source repair or new syntax pass was attempted. Only this
handoff document was added; metadata, shared tools, game files and production
were untouched. Rollback consists of removing this document.
