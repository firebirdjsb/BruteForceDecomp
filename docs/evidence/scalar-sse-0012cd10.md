# 0x0012cd10: scalar results, m32fp storage and vector slots

This is a scoped C11/instruction repair. The original function entry and body
digest remain unchanged. Original XBE SHA-256 was freshly verified as
`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
The complete 3,381-byte body hashes to
`3AC6715802AE8AAD5CF7620719703E3793D02B4145B324328D60B792249E16C3`.
`scripts/verify_stack_storage_repairs.py` pins this body and the changed facts.

Observed facts and corrections:

- Let S be ESP after SUB ESP,0x23c and the four saved registers. Five existing
  stack vectors now have actual contiguous float[3] storage: S+0x20
  (`stack_22c`), S+0x2c (`stack_220`), S+0x4c (`stack_200`), S+0x58
  (`stack_1f4`) and S+0x64 (`stack_1e8`). The original loads/stores and LEAs
  establish their spans. The existing explicit call arguments now point to
  those arrays instead of one isolated scalar followed by unrelated C locals.
  This does not bind register-only calls such as `0x0012cb40` or `0x00066160`.
- `0x0012d04b..0x0012d067` sums squared Z,Y,X in x87, then spills m32fp.
  SQRTSS at `0x0012d06b` stores its low DWORD at `0x0012d071`.
  The later SQRTSS/RSQRTSS at `0x0012d2a5`/`0x0012d2b9` also store only
  their low words before x87 reloads them. Host scalar intrinsic temporaries
  compute those stored values. Their upper bits do not describe guest XMM0;
  unknown upper 96 bits at calls, entry and exit remain unresolved.
- `0x0012d1eb..0x0012d27f` reads the normal components as m32fp bits, retains
  the projection and original-vector norm in x87, spills residual components
  separately, then spills their squared norm. Z,Y,X association is retained.
  TEST AH,0x41 after both comparisons selects the zero path for <= or unordered.
  The exact threshold at `0x003a5150` is binary32 0x28800000, or 2^-46.
- `0x0012d2c5..0x0012d2fe` retains inverse-root times root without an
  intermediate float spill, then spills each scaled component. The Y result
  subtracts the m32fp globals at `0x003c05d4` and `0x003c05d8` through x87.
  Those labels and `0x003c05c0`/`0x003c05a4` are raw four-byte storage,
  interpreted using bit copies rather than pointer arithmetic or integer-to-float
  conversion. FLD/FMUL/FCOMP operands establish their local usage.
- `0x0012d631..0x0012d659` compares the Z,Y,X squared norm against the
  unspilled square of the m32fp value at `0x003c05c0`. At `0x0012d709`,
  length times `0x003c05a4` remains unspilled before being squared. The other
  branch performs extended division/FABS before the m32fp comparison; `fabsl`
  replaces an unbound pseudocode ABS call there and in its preceding test.

Validation: focused host Clang C11 checks pass for both i686 and x86_64 Windows
targets with unchanged inventory flags. Independent read-only source review
checked vector slots, reductions, spill boundaries, comparisons, scalar SSE
results and global word interpretation against the authenticated disassembly.

Limits: `float10` is a host `long double` proxy, including hosts without 80-bit
arithmetic. x87 precision/control/status, exceptions, SSE environment and complete
register/stack interfaces are unverified. Other draft numeric field conversions,
implicit calls, indirect calls and stack aggregates remain unresolved. This is
neither a complete interface audit nor original-machine differential execution,
full-function behavior equivalence, a linked PC game or a byte-identical rebuild.
No game, assets, deployment or production data were changed.
