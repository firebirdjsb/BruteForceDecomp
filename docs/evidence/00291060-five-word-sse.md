# 0x00291060: five stack words, scalar x87/SSE and output ordering

Status: bounded C11 draft reconstruction; both Windows target syntax checks
pass. **Not ABI-complete, linked, runtime-tested, or a byte match.**

## Provenance

- Original XBE SHA-256:
  `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
- Entry `0x00291060`, contiguous 297-byte range `0x00291060..0x00291188`.
- Original body SHA-256:
  `C79EBE3C1270F0EE163096F56B5E2862416864C2F7EA963BC70400411D66C983`.
- Reviewed C source SHA-256:
  `1A28B96B676B050CF22F7A4C6C73158E74B7B4579E314C54BED476C59FD4D130`.

Fresh private inspection checks the full pinned XBE and ordered body digest
before decoding. No third-party game behavior was used.

## Entry and caller evidence

Let `S` be ESP on original entry. SUB ESP,12 and PUSH ESI give `B=S-16`.
The body reads object at `B+20=S+4`, sample m32 at `B+24=S+8`, output one at
`B+32=S+16`, and output two at `B+36=S+20`. The word at `S+12` is not read.
Both returns use RET 20; x87 ST(0) receives the scalar result. The old draft's
three-argument representation conflated the sample, output pointers and reused
stack words. The replacement represents all five words, leaving the third
word opaque. Ordinary host C does not implement the original stack cleanup.

Original DWORD table entries `0x39120C`, `0x391240`, `0x391274`, `0x3912A8`,
`0x391414`, `0x391448`, and `0x39147C` contain `0x291060`, each at byte offset
32 in its surrounding table. No E8-relative call candidate to this function
was found in the raw backed XBE sections; these table observations support
indirect dispatch without proving each runtime object type.

Relevant caller `0x002344B0`, body SHA-256
`32635E240C5EAEB5D5AFF606D36DEC6ACA5FA86C03FD7F565EB67975A1006CF3`,
at `0x23451F..0x234530` pushes, in order, two distinct stack-output addresses,
an opaque DWORD loaded from object byte offset 52, sample bits and the selected
object, then CALLs virtual byte offset 32. On return `0x234533` FSTPs ST(0)
to m32. This establishes a compatible five-word call shape; the selected
runtime object's exact table is not proven by this caller alone.

## Instruction facts and changes

| Original sites | Preserved observation |
| --- | --- |
| `0x291068..0x291085` | Signed 16-bit load at object+12, subtract one as integer, FILD, multiply by raw m32 at object+16; second multiply uses original constant `0x3A4F88`, verified bits `00000000` (+0) |
| `0x29108B..0x291094` | FCOMP lower versus sample; TEST AH,0x41/JNE selects index zero only when lower is ordered greater |
| `0x2910A5..0x2910B2` | FCOMP sample versus upper; TEST AH,0x41/JP selects last index for greater or unordered; equal proceeds through quotient/conversion |
| `0x2910B8..0x2910E6` | x87 division rounded to m32, actual CVTTSS2SI, signed minimum of converted index and last, then equality check against last |
| `0x2910EF..0x291123` | Integer index and index+1 converted by FILD; extended multiply/subtract/divide sequence; final ratio rounded to m32 |
| `0x291125..0x291137` | MAXSS ratio,+0 then MINSS result,1 in that operand order; source operand wins equal/NaN cases |
| `0x291143..0x291162` | Callback(index), store out1, reload vtable, callback(index+1), store out2; return previously stored clamped ratio |
| `0x29116B..0x291180` | Endpoint callback once, store out2 then out1, return the entry-initialized +0 m32 slot |

All guest addresses, table words and output values are DWORDs. Address
arithmetic wraps as uint32 before conversion to host pointers. The source
does not add object fields or gameplay meaning. Signed minimum matters for
CVTTSS2SI's masked-invalid INT_MIN result; a host numeric float-to-int cast
would introduce undefined behavior for invalid or out-of-range conversion.
Index+1 cannot overflow: the interpolating path has index<last<=32766.

The output stores remain around the callbacks in observed order. In particular,
out1 can alias the object/table storage and affect the second dispatch; the
second vtable load must not be hoisted above the first output write. Endpoint
stores retain out2-before-out1, including equal output addresses.

## Callback contract boundary

Every local callback pushes index then object and reads the result from EAX.
The known table at `0x391220` points its +28 slot to `0x291480`; the table at
`0x3911EC` points that slot to `0x291E80`. Fresh original instruction windows
show both read the two stack words, compute EAX from guest storage, and use
RET 8 on the inspected return paths. No callee source was changed.

The reconstruction retains the existing non-prototype `code` draft type for
indirect calls. It does not assign a guessed C calling convention or claim
that every possible table target has been reviewed. The object's dispatch
target, original register preservation, host calling conventions and callback
side effects outside the observed loads/stores remain ABI_UNVERIFIED.

## Checks and residual limits

- Original XBE/function digest verification and fresh disassembly.
- Caller push order, ST(0) consumption, table words and representative callback
  instruction windows checked independently of Ghidra inferred argument types.
- Focused Clang C11 syntax passes with `tools/sweep_c11.py` FLAGS, `-msse`,
  include directory `include`, targets `i686-pc-windows-msvc` and
  `x86_64-pc-windows-msvc`.
- An independent reviewer checked the complete pinned original body, caller
  push sequence, branch predicates, conversion/clamp order and output stores.
  Approval covers these changed facts, not a complete ABI or behavior claim.

No original-versus-C execution oracle was used. Host long double is only a
proxy: x87 precision control, rounding, exception state, NaN payloads and
extended register lifetime remain unverified. SSE intrinsics use host MXCSR;
the guest MXCSR is not installed. Guest pointers require identity mapping;
ordinary C calls do not emulate guest RET 8/RET 20, all registers or fault
timing. Callback writes to the original guest stack arguments are not modeled
by host parameter variables. No bounds checks or replacement helper behavior
was invented to hide these gaps.

Scope: one source and this evidence note. No metadata, shared verifier,
deployment, game files or production data changed. Rollback restores those
two files; no installed artifact needs rollback.
