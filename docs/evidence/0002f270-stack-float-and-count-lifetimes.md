# 0x0002F270: raw stack words, float3 and count lifetimes

Status: scoped C11/instruction correction. The original entry and complete
function-body hash remain unchanged. Complete interfaces, original game
behavior, guest-stack mapping and byte-identical compilation remain unverified.

The original XBE was freshly authenticated against SHA-256
`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
Its contiguous 1,648-byte body at `0x0002F270` hashes to
`96B4BA7A1A3AB1E0B4D1AC6021874B9D129062D5437D8201040CA35F44872C27`.
`scripts/verify_0002f270_storage.py` checks the full body and 15 small
instruction/data windows, including the original threshold word.

## Original observations and limited corrections

Let S be ESP after SUB ESP,0x3fc and saved EBX/EBP/ESI/EDI.

- `0x0002F745..0x0002F751` stores a pointer word at S+0x18, the literal
  guest word `0x003A400C` at S+0x14, and the raw integer 10 at S+0x1c.
  The explicit argument to `0x000594A0` addresses S+0x14. A contiguous
  `uint32_t[3]` replaces three unrelated locals containing native pointers
  and a float. This recovers the observed 12-byte span without claiming the
  rest of that query object or its producer interface is reconstructed.
- `0x0002F508..0x0002F53C` retains X and Z differences in x87 before
  summing their squares. The sum spills as m32fp before SQRTSS. The low
  scalar result is stored; no packed computation in this edited region
  consumes inherited upper XMM0 bits. Separate numeric temporaries replace
  pointer casts and nonexistent vector pseudo-members.
- `0x0002F549..0x0002F580` tests the begin word at receiver+0x934 before
  loading receiver+0x938. The begin word is cached rather than reloaded.
  The wrapping 32-bit subtraction is interpreted as
  signed and divided by 24. Its zero test precedes the existing producer
  pointer test. This integer lifetime is separate from the earlier float
  norm that occupied the same guest stack word. No end-word load is added
  when the begin word is zero.
- `0x0002F606..0x0002F631` loads/subtracts Z, loads receiver X, explicitly
  writes positive zero to Y, subtracts input X, then spills Z and X. The
  replacement preserves this order and the contiguous float3 word span.
- `0x0002F647..0x0002F674` evaluates `(X*X + Y*Y) + Z*Z` in x87 and
  compares the unspilled sum with the original m32fp threshold `0x34000000`
  (2^-23). TEST AH,0x41 rejects <= and unordered. The successful branch
  spills the norm before RSQRTSS; each subsequent FMUL/FSTP separately
  stores reciprocal*X, reciprocal*Y and Z*reciprocal. Y multiplication is
  retained rather than assumed to produce zero.
- The virtual call at `0x0002F6CE` receives the same three-DWORD base.
  Its implementation, register inputs, calling convention and outputs are
  not established by this repair. Existing masks and explicit call target
  expressions remain in place.

The standard `FENV_ACCESS ON` directive is retained in the actual C source.
An initial optimized fixture without it narrowed an extended difference and
changed a subnormal under SSE DAZ. The final fixture and source preserve the
explicit environment-sensitive arithmetic under the documented test flags.
This directive does not implement the original x87/MXCSR state or trap ABI.

## Verification and boundaries

- The complete repaired source passes focused Windows i686/x86_64 Clang C11
  checks with the existing sweep flags. Additional pedantic checks retain
  the established exception for intentionally unresolved `code()` prototypes.
- The verifier extracts the actual distance, float3, count and record blocks.
  A capture callback substitutes only the virtual call; no helper or native
  interface is invented for the production reconstruction.
- At each of `-O0` and `-O2`, **16,308** distance/float3 cases compare with a
  separately transcribed, instruction-derived host assembly reference.
  Four DAZ/FTZ combinations cover deterministic signed zeros, subnormals,
  threshold neighbors, large finite values, infinities and quiet NaNs, plus
  4,000 deterministic random input tuples. Finite outputs and signed zeros
  compare by bits; NaNs compare by class, excluding payload and status claims.
- An explicit case has an unspilled norm above 2^-23 that rounds to exactly
  2^-23 in binary32. The original branch succeeds; a premature float spill
  is rejected. Other negative controls reject accepting unordered input,
  changing the signed divisor and substituting exact reciprocal square root.
- **56** wrapping signed-count cases compare with the original IMUL/SAR/sign
  correction instruction sequence. Raw query words, exact callback record
  address, adjacent canary and untouched object bytes are also checked.
- The host arithmetic fixture explicitly uses `-mlong-double-80`, disables
  FP contraction, and selects masked x87 exceptions, 64-bit precision and
  nearest rounding. It restores the caller's x87 control word and MXCSR.
  A default Windows `float10` remains an eight-byte host proxy: these focused
  results do not establish extended precision for a normal Windows build.

The reference adapts memory bases and host calling convention. It does not
execute the original 32-bit function, virtual call, helper sequence or complete
guest frame. Arbitrary alias configurations, guest memory integration, upper
XMM state, x87 status/control integration, FP exception behavior and other
Ghidra aggregates/register-only producer outputs remain unresolved.
Independent read-only review approved the scoped instruction/dataflow correction
and verifier; the alias and complete-interface limitations remain explicit.
No game, installation, assets, saves, deployment or production data is touched.
