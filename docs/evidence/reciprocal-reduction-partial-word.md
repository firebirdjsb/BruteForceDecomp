# Reciprocal, packed reduction and partial DWORD repairs

Original XBE SHA-256:
`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
The storage verifier pins the original body digests and relevant instructions.

- `0x000D1BF0`, `0x00232F20`, `0x00233290`: replace invalid array-valued
  reciprocal expressions with RCPSS intrinsics and extraction of the consumed
  low float lane. This retains the observed approximate SSE operation rather
  than substituting division. Other draft arithmetic, numeric reinterpretation
  errors, implicit registers and inferred calls remain unverified.
- `0x002BA7F0`, `0x002CDCB0`: MOVSS/MOVHPS loads three memory floats into
  lanes 0, 2, 3 with lane 1 zero. MULPS, SHUFPS 0x80, ADDPS, SHUFPS 0x03,
  ADDSS preserve the original packed reduction and operand order. The former
  also uses SQRTSS before its final x87 division. Inherited upper temporary
  lanes and floating-point status are not fully modeled. Existing helper
  contracts and x87 denominator arithmetic remain unverified; the former's
  RET 16 versus two draft formal parameters is still an explicit ABI gap.
- `0x00210BF0`: byte stores at `0x210C00` and `0x210C1A` replace only the
  low byte of the incoming DWORD. The complete DWORD is loaded at `0x210C2F`
  and forwarded, so the other three bytes are preserved. Original EBP/ECX
  inputs, helper return and complete native calling convention remain open.

These are Level A syntax and limited Level B operand/storage corrections.
They do not establish complete Level C interfaces or Level D equivalence.
Original function identities and all body hashes are retained. No platform
adapter, gameplay enhancement or native runtime behavior is introduced.
