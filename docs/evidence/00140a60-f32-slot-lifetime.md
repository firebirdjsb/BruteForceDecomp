# 0x00140A60: reused binary32 stack word

Scoped source correction; syntax and the changed instruction facts are checked.
The entry signature, implicit register inputs, virtual-call contracts and x87
execution environment remain ABI_UNVERIFIED. This is not whole-function or
original-game equivalence.

The original XBE SHA-256 is
`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
The contiguous 621-byte body at entry `0x00140A60` hashes to
`E62F93A64226307B9C623DC0D55C30EC31D85EC4BABEB87A3D6CCB5874DC174E`.

## Observations and correction

Let S be entry ESP. SUB ESP,12 and the first three register saves leave
ESP=S-24 at 0x00140a87, where [ESP+32]=S+8 supplies the incoming object
pointer. PUSH EDI then leaves T=S-28. The C name `param_2` was incorrectly
reused for the later scalar [ESP+40] word. The post-call references below
use the observed ESP-relative operands; their T-relative interpretation
assumes the expected callee cleanup, which this scoped edit does not bind.
No entry parameters were added or retyped.

- 0x00140b59 stores the first helper's ST(0) to T+40 as binary32. After the
  second helper returns, 0x00140b64 stores ST(0) to T+16. The following FLD
  T+40 / FSUB T+16 / FSTP T+20 produces a rounded binary32 difference.
- 0x00140b6c overwrites T+40 with raw DWORD `0x7f7fffff`, maximum finite
  positive binary32. This is a bit pattern, not integer-to-float arithmetic
  or a pointer. A local float and a memcpy bit conversion represent it.
- The global at original 0x0040c9dc has bytes `9a99993e` and is loaded by
  FLD m32fp at 0x00140b90/0x00140bd3. Its existing unresolved uint32_t data
  declaration is retained; the source reinterprets its bits as binary32.
  The comparison zero at original 0x003a4f88 has bytes `00000000`.
- Each positive input first tries bias+input, then the input itself; only
  after both fail does control try the difference. FADD/FCOM compares the
  unspilled sum; FSTP m32fp rounds only after selection. `float10` retains
  that distinction within the existing host approximation. Branches retain
  the ordered comparisons, including equality and unordered rejection.
- 0x00140c03 compares the selected T+40 word to the limit. 0x00140c67 tests
  it against zero. 0x00140ca2/0x00140cab copy its four raw bytes to output+8;
  a host pointer-sized store would write eight bytes on x64. The final
  memcpy copies exactly four bytes with a 32-bit guest address calculation.

For FCOM outcomes greater/less/equal/unordered, AH&0x41 is respectively
0/1/0x40/0x41. TEST sets parity for the greater/unordered pair; JP therefore
skips selection in that pair. The ordered <= comparisons preserve this
decision. The positivity TEST/JNE accepts only ordered greater-than-zero.
No integer comparison or invented default output replaces these decisions.

## Validation and remaining work

Before the edit, unchanged sweep flags fail at pointer/float conversions on
both i686 and x86_64 Windows Clang. After the edit, both pass. The full XBE,
body and affected instruction/data windows are checked separately. An independent reviewer authenticated the original bytes and accepted only
the changed scalar, branch and store facts, repeating both architecture
syntax checks. Complete interfaces and runtime remain unverified.

The earlier register-only and virtual helper calls are left as unresolved
draft interfaces. This edit does not establish their return conventions,
full original RET 16 contract, guest-address translation, aliasing, x87
precision/control/exception state, or binary equivalence. In particular,
host `float10` is not proof of an original x87 execution model. No original-
versus-C runtime test or game execution was performed. Follow-up work must
bind those interfaces using original callers/callees, rather than infer them
from successful syntax.
