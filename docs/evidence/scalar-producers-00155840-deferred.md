# 0x00155840: scalar SSE and producer handoff

Status: investigated, source unchanged and still syntax-failing. Do not count
this note as a repair or a complete interface contract.

The original XBE was authenticated against SHA-256
`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
The complete ordered 1,500-byte caller body hashes to
`F7B7FFD8D854213AFA2EF6FFE9CE142C332CD7EC3A27B05BCCE526F83A1A78C6`.
Relevant source: `src/main_unclassified/band_0015/0x00155840.c`.

Authenticated caller facts:

- RSQRTSS at `0x001559ea`, `0x00155a36`, `0x00155aea`, `0x00155b4a`,
  `0x00155c28`, `0x00155ca9`, and SQRTSS at `0x00155bab` use scalar memory
  operands. Each consumed result is stored by MOVSS before later arithmetic.
  No observed local packed computation consumes the inherited upper 96 bits;
  their state at entry, calls and exit remains unresolved.
- FMUL at `0x00155aa6` reads the m32fp word at `0x0040c8b4`. The C draft's
  pointer declaration is unsupported by this operand. FMUL at `0x00155a03`
  likewise reads the word at `0x0040c8b8` as m32fp.
- `0x00155d38..0x00155d45` copies twelve DWORDs from `[EBP-0x68]` through
  `[EBP-0x3c]` with forward REP MOVSD. At `0x00155d49`, EDX receives the
  same base before the count-0xc call to `0x0036f6c0`. The existing five-float
  array followed by separate C locals does not establish that 48-byte object.
- Before `0x00022bc0`, `0x00155958` binds EDI to `[EBP-0x68]`; the explicit
  stack argument points separately at `[EBP-4]`. The current callee draft
  reads unbound `unaff_ESI`/`unaff_EDI`. Its apparent output stores are draft
  evidence only until its original instructions are authenticated.
- Before `0x000621c0`, `0x00155a8a..0x00155a92` binds ECX to the preceding
  virtual call's EAX, EDX to `[EBP-0x68]`, and EAX to `[EBP-0x2c]`. The current
  zero-argument callee draft has unbound EAX/ECX/EDX, so the caller's actual
  input/output objects are not connected through that C call.

Next action: authenticate both complete callee bodies and recover their reads,
writes, aliases and register contracts. Establish shared observed operations
and explicit producer bindings where supported, preserving the original
unbound entry wrappers separately. Then reconstruct contiguous output storage
and scalar results together. Verify the upload contract independently.

Do not merely expand the array, clear unknown bytes, invent guest addresses or
replace SIMD pseudo-members to produce a green result. Preserve the existing
partial-word selector evidence. Original entry ECX, virtual x87 return contracts,
helper interfaces, upload behavior and x87/SSE environment remain unverified.
Independent read-only review agreed with deferral. No game or deployment changed.
