# 2026-11-02: original-body provenance behind forty retail-XBE direct calls

**Scope:** strict C++17 evidence infrastructure only. The audited source baseline was
[95c2002](https://github.com/firebirdjsb/BruteForceDecomp/commit/95c200205a149c756148dec80dd5539c766511d1);
the staging parent was 0439c909e8979ddfa2d4aa5a6cbfd78935528e6a.

The private retail XBE authenticated as SHA-256
B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721.
The 40 already pinned E8 call sites were checked against 40 original caller
body digests and 26 distinct callee body digests: **66 complete original
function bodies matched**, including their original byte lengths. The
existing verifier independently checks 26 selected RET opcodes.

The private local negative-control pass rejected **66 individual original-body
byte mutations**, **40 E8 displacement mutations**, and **26 RET opcode
mutations**. Five public binary-free regression tests check the 40-row manifest,
pinned manifest hash, source entry/digest labels and corruption handling.
No original game executable bytes or full decompiler dumps were committed.

## Concrete machine-code observations, not recovered prototypes

- At caller 0x001D10B0, 0x001D10C0 pushes ESI and 0x001D10C1
  copies EBX into EAX immediately before direct CALL 0x001D10C3 to
  0x001D2D60. The callee starts by saving EBX and copying EAX into EBX,
  reads a stack word after saving registers, and has a selected RET 4
  at 0x001D2DD6. This **does not** justify converting an original guest
  pointer into a native C++ pointer or declaring a complete thiscall ABI.
- At 0x0027E5F7, the direct call targets 0x0027E580, whose draft is
  void-returning while its caller draft consumes a result. Original EAX
  register preservation and the full guest-memory interface need separate
  analysis; inventing a return expression is not an acceptable syntax fix.

## Gates and limitations

- New manifest: metadata/cpp_20261102_40_body_provenance.csv
- Private check: python3 scripts/verify_cpp_20261102_40_body_provenance.py
  --xbe PATH_TO_PRIVATE_RETAIL_XBE
- Public check: python3 tests/test_cpp_20261102_40_body_provenance.py
- Original function source edits: **zero**. No C++17 syntax net delta claimed.
- All draft interfaces remain ABI_UNVERIFIED unless independently evidenced.
  Caller register producers, stack cleanup, guest32 address translation,
  x87/SSE, virtual dispatch, cross-function linkage and game behavior
  require further function-by-function work.
- No demo content, original binary, commercial assets, or full pseudocode
  exports were added.
