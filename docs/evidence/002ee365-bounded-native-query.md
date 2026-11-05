# 0x002ee365 bounded native byte-to-word query

## Scope and original evidence

Baseline: `03217aaba3f880229e72769a88b013e1286729cc`. The only canonical change
is the null-destination query's length expression. Its signature and the entire
copy branch remain byte-identical. The two truncating pointer-to-int casts become
`static_cast<uint>(param_2 - pcVar1)` with an explicit bounded native contract.
No guest argument, ABI, global, or library identity is invented.

The full raw body spans `0x002ee365` through `0x002ee3a5` inclusive: 65 bytes and
32 instructions, ending in RET. The original body SHA-256 is
`10A53C6D2C7A4B1EB2BF0213EC7CBEF4B63BAC4D7D97799377DCCDE1906854B8`.
The retained XBE identity is
`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
Selected private-export replay has matching canonical body hash, complete byte
coverage, no instruction/flow overrides and no validation issues. These facts
are not whole-XBE reauthentication.

The source preimage SHA-256 is
`f164bc530a4c6d5761ec423e9cc9a49972bf5a8db1c11a638a763a4363e2a083`,
and its Git blob is `01cd5204e548812fd24b5ea4093afc0c68fad307`.
The replacement SHA-256 is
`00a7c7fdb3ea315b6e90bc9e72787198287e58bf480c477e38a6a793b9dc3993`.

## Full-body operation evidence

Three explicit incoming stack words supply destination, source and capacity.
There are no calls, global reads, or hidden data-register inputs in this body.

- A null destination branches to `0x002ee394`, even when capacity is zero.
- The query loads source into EAX, computes source+1 in EDX, and reads/increments
  until a zero byte. SUB EAX,EDX returns the number L of preceding nonzero bytes.
- A nonnull destination with zero capacity returns zero without reading source.
- For positive capacity, MOVZX SI reads one unsigned source byte, MOV stores a
  16-bit word to destination, and CMP rereads the source byte **after** that store.
  The loop then increments the result and advances destination by two bytes.
- All seven branch targets are within the complete body. PUSH/POP EBP and ESI
  balance, and the final `C3` RET remains present.

The gate independently decodes every instruction with GNU objdump and checks
its opcode, operand, address, raw bytes and closed control-flow targets. Original
machine-code bytes are data only and are never executed.

## Defined native contract and limitations

For the repaired query, source is nonnull and belongs to one live char array.
Its first zero is at L <= min(UINT32_MAX,PTRDIFF_MAX). Every read through that zero
and the final one-past advance must be valid. The difference itself is L;
L+1 need not fit ptrdiff_t. Capacity is ignored in this branch. The unsigned
conversion is exact in this range on the tested 32-bit uint representation.

Native testing of the unchanged copy branch uses separate, initialized,
non-overlapping char source and ushort destination arrays, with 8-bit bytes,
16-bit ushort and 32-bit uint. Positive capacity C has C readable source bytes
and C writable live ushort elements; zero capacity permits null source and does
not access memory. These are bounded host tests, not inferred guest types.

No mixed-width native overlap claim is made. Overlap is modeled only by integer
indexes into byte memory. A store can zero the byte that the next CMP rereads;
checking the previously cached byte instead would change behavior. Neither a
snapshot copy nor a host memcpy/memmove substitution is admitted.

Guest memory mapping and address wrap, fault behavior, flags, register/stack
transport, full ABI, Xbox execution and byte-identical rebuilding remain
unverified. No native test executes the canonical function symbol; only a renamed,
initialized test seam executes.

## Reproducible verification

Run `python3 tools/test_cpp_002ee365_bounded_query.py`. Use `--sanitize` for GCC
ASan/UBSan (leak detection disabled), or `--private-export <directory>` for the
optional original selected-record replay. CI adds the public invocation without
changing existing gates. The exact historical fixture has a `-text` attribute.

Completed checks:

- Exact immutable source/manifest/fixture pins, forward and reverse replacement,
  unchanged signature, unchanged copy branch, and original identity labels.
- 107 public and 329 private-record corruption controls rejected.
- All 65 bytes / 32 instructions independently decoded with closed CFG.
- The preimage fails exactly two pointer-truncation diagnostics; the candidate
  passes strict Clang C++17 syntax at O0 and O2.
- At each of Clang O0, Clang O2 and GCC 14 ASan/UBSan: 202,441 initialized native
  query/disjoint-copy cases; 90,553 overlap-memory-model cases; 100,090 independent
  DWORD-arithmetic-model cases.
- A compiled query off-by-one mutation fails the independent length oracle.

No exact-tree aggregate syntax count or runtime claim follows from this focused
check. Integration still requires the repository's normal full audit.
