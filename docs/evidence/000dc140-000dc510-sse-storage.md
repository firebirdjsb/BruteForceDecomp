# 0x000dc140 / 0x000dc510 SSE storage reconstruction

Status: original operands observed; C11 syntax checked. Neither complete ABI,
behavior, x87 equivalence nor a byte-identical rebuild is established.

## Pinned original evidence

The private original XBE was reauthenticated before editing:
`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
Ordered original body bytes were also independently hashed against the export:

| Entry | Bytes | Body SHA-256 |
| --- | ---: | --- |
| `0x000dc140` | 961 | `D05C90251EE01E8E1137C2502132DEB3F57847BC2F49B1760EE99FE490113E85` |
| `0x000dc510` | 803 | `7016E00C4E198173D11C4C91B58EFA1753B0E24A56226F189240ABF1F8D7C087` |
| `0x0009e9c0` (output dependency; not edited) | 131 | `F42CCE2D01444D7F2F84FA12E4C349438B319DBF1B126132C138CDAE8C40271E` |

Paths were resolved through `tools/source_layout.py`. No third-party game
implementation or normalization algorithm was substituted.

## 0x000dc140

- `0xdc42a` spills the x87 reciprocal to a four-byte stack word. At
  `0xdc42e/434`, memory `MOVSS` and `SHUFPS 0` broadcast that stored scalar.
- `0xdc43f/443` use memory `MOVSS` then `MOVHPS`: the three input floats
  occupy lanes 0, 2 and 3; lane 1 is zero because memory `MOVSS` clears
  the upper 96 bits. `0xdc447 MULPS XMM0,XMM1` multiplies all four lanes,
  including the unstored lane. The source preserves that operand order.
- `0xdc44e/452` store lane 0 and lanes 2/3 to contiguous scratch at original
  `ESP+0x20/+0x24/+0x28`. A real three-float scratch array now represents
  those twelve bytes. No sixteen-byte store or numeric uint64-to-float
  conversion is used.
- `0xdc456` saves scratch +8 as a raw dword; `0xdc45a/469` moves scratch
  +4 through x87 m32fp storage. `0xdc46d..488` writes input +0/+4/+8 in
  order. The last word is preserved by byte copy. Exact x87 signaling-NaN
  and exception effects of the first two transfers remain unverified.
- `0xdc492..4aa` computes `(x*x+y*y)+z*z` through x87 and spills one
  binary32 word. `0xdc4b4 RSQRTSS XMM0,m32` replaces only lane 0 of the
  preceding packed result. `_mm_move_ss` plus `_mm_rsqrt_ss` retains its
  high lanes; `0xdc4ba` consumes only its low result. Existing subsequent
  scalar multiplies remain C drafts of the x87 instructions.

## 0x000dc510

- `0xdc63f LEA EDX,[ESP+0x50]`, `0xdc643 PUSH EDX`, `0xdc644 PUSH ESI`,
  and `0xdc664 CALL 0x9e9c0` pass a real local output buffer. The callee
  reads that second stack argument and performs `FSTP [out]` at `0x9ea06`,
  `FSTP [out+4]` at `0x9ea1a`, `FSTP [out+8]` at `0x9ea2f`, and
  `MOV [out+0xc],0x3f800000` at `0x9ea36`, then `RET 8` at `0x9ea40`.
  Thus the replacement is an **uninitialized four-float array passed to
  that actual call**, replacing three unrelated scalar C locals. The
  caller subsequently consumes its first three components. No values
  are invented for an unpassed local.
- `0xdc613` spills the square-root input; `0xdc619 SQRTSS` and
  `0xdc61f MOVSS` calculate/store only its low result. The source uses
  that SSE operation rather than an undeclared `SQRT` call. Inherited
  upper lanes are dead before the later memory `MOVSS` overwrites XMM0.
- `0xdc721/725` store the reciprocal count. The first block,
  `0xdc729..746`, loads/broadcasts it in XMM1 and packs the three values
  of the second parameter with `MOVSS/MOVHPS` in XMM0. `MULPS XMM0,XMM1`
  is followed by a four-byte low store and eight-byte high store. The
  block at `0xdc75e..77b` repeats the same operation for parameter four.
  Both now use the observed SSE lane operations, replacing numerical
  uint64 conversions and invalid decompiler array members.
- `0xdc7cd..7e5` computes `(x*x+y*y)+z*z` through x87 and spills m32fp.
  `0xdc7ef RSQRTSS` replaces only XMM0's low lane; the high lanes retain
  the parameter-four packed product. The source retains those lanes and
  consumes only the low result, as `0xdc7f5` does.

## Validation and limits

Before editing, each file failed both i686 and x86_64 Windows syntax checks at
the invalid decompiler array members. After editing, all four checks pass with
no diagnostics using the unchanged flags from `tools/sweep_c11.py`.

These checks do not establish runtime behavior. Existing list storage,
indirect calls, signatures and other register/stack contracts remain
`ABI_UNVERIFIED`. Original x87 control word, extended intermediates, floating
exceptions, precise NaN behavior and threshold arithmetic are not emulated.
The SSE instructions run with host processor/MXCSR behavior; no Xbox-vs-host
execution comparison or exception-state verification was performed.

Scope is two C sources and this evidence document. No shared headers,
verifiers, metadata, game data or deployment targets were changed.

Coordinator integration: independent review accepted the changed operand and
storage facts. Only affected inventory source fingerprints/syntax labels and
the original-byte verifier are updated at integration. ABI and behavior labels
remain unverified. Focused syntax does not replace the complete tree audit.
