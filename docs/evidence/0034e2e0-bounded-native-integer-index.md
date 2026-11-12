# 0x0034e2e0 bounded native integer index

## Exact scope

The historical draft saves `param_1` to `puVar2`, then abuses `param_1` as an
integer loop counter. This proposal gives that counter a separate `int`
`local_index`. One declaration and five exact use-site replacements change;
the signature, comparison, memory accesses, gap progression, backwards pointer
updates and return remain unchanged. There is no new external prototype,
argument, calling convention, data structure or gameplay interpretation.

Baseline is `03dc660b01b358f4826cdf5bc07075f4ef60feb4`. The preimage source
SHA-256 is `5d4ef125f7a2d28cdc2bbb954dcb7a8b0be9013f6d1ac91959b8007f0b89305e`,
and its Git blob is `dfce5d11c6b3e21fef7c8ae49f5db0965dc4f865`.
The manifest pins the after-source and exact reversible replacement strings.

## Original evidence

Original XBE identity remains
`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
The complete contiguous owned body is `0x0034e2e0..0x0034e35e`: 127 bytes,
61 instructions, hash
`F45E327C8D4530CC3F5B923C289E0970FD0BF16A9AD45241EA440F3E5D4A6891`.
The selected private export has matching canonical hash, complete instruction
coverage, no byte/flow overrides and no validation issues. This is selected
record replay, not reauthentication of the entire XBE.

The gate independently decodes every raw instruction using GNU objdump and
checks all nine closed conditional edges. No original bytes are executed.

- The body loads two incoming stack words. It has no calls or globals, and no
  hidden data-register input is used for the operation. The initial PUSH ECX
  allocates a local stack word, which is overwritten before use.
- At `0x0034e301`, ESI receives the original pointer from `[EBP+8]`.
- At `0x0034e309`, that former argument stack slot receives integer gap ECX.
- `0x0034e311/316` load the slot to EAX and read `[ESI+EAX*4]`.
- `0x0034e334` adds ECX to the slot; `0x0034e342..348` reload it and perform
  a signed comparison against count `[EBP+12]`.
- The memory value comparison at `0x0034e320..322` is unsigned JBE; signedness
  is not inferred from the library-looking operation.
- Each gap is divided by signed three. Register saves/restores and the final
  `C2 08 00` RET are present. This observes the raw frame, not a native ABI.

## Defined native domain and proof

Require 8-bit bytes, 32-bit `uint` and 32-bit `int`. For every signed count N<=1,
the body performs no pointee access or pointer arithmetic; null is allowed and
no allocation or guard prefix is required.

For 2<=N<=INT_MAX/2, the tested contract places the pointer at index N of one
initialized writable live `uint` array containing at least 2*N elements. Thus
N prefix elements and N logical suffix elements exist in the same array.
Separate adjacent allocations do not satisfy this contract. There is no
concurrent modification or volatile storage. In real C++ implementations the
object must of course be a valid constructible array of the stated size.

This prefix is necessary for the unchanged source cursor spelling, not an
assertion about an original caller's allocation:

1. Gap h starts at one. For N>=9, every growth starts at h<=floor(N/9), so
   3*h+1<=3*floor(N/9)+1<=N. No gap arithmetic overflows. Division by three
   strictly reduces each positive gap.
2. Each active pass has 1<=h<N and indices j=h,2*h,...<N. The final unused
   counter value is j+h<=2*N-2<INT_MAX. Merely requiring N<=INT_MAX would not
   suffice; the conservative half-maximum limit covers this final update.
3. Inner index k begins at j and decreases by h only when k>=h. Hence all
   stores use 0<=k<=j<N.
4. At each inner test, the cursor equals base+(k-h). Short-circuit evaluation
   permits its dereference only when k>=h, so every load lies in the logical
   suffix. After a shift, the unconditional pointer decrement may form base-h.
   It is not dereferenced, but it must still point within the same live array.
   Since h<=N, the guard prefix makes this formation defined.
5. `local_8` starts at base and is base+(j-h) before the iteration. Its final
   update yields base+j, with that iteration's j<N. No extra suffix is needed.

The native tests compare the renamed, initialized seam against an independent
64-bit index oracle and `std::sort`, checking every prefix/suffix canary.
A separate DWORD-register/address model follows the decoded instruction order,
including signed loop comparisons and unsigned data comparisons. Its explicit
modular address model tests wrap cases as integer calculations only, not as
host pointer behavior or a recovered guest-memory mapper. Boundary-only
arithmetic cases include near-maximum admitted counts without allocating or
claiming to test gigabyte-scale native buffers.

## Verification and boundaries

Run `python3 tools/test_cpp_0034e2e0_integer_index.py`. Optional `--sanitize`
runs GCC ASan/UBSan with leak detection disabled. Optional `--private-export`
replays the indexed original record. For a scratch package, supply
`--include-root` pointing to the repository containing `include`.

Completed at Clang C++17 O0, O2 and GCC 14 ASan/UBSan:

- 111,008 initialized native cases, including null with INT_MIN and N<=1.
- 444,008 independent DWORD memory models.
- 2,196 boundary arithmetic identities.
- 197 public source/body/manifest corruption controls rejected.
- 618 private-record corruption controls rejected.
- A compiled, memory-safe comparison reversal rejected by the independent oracle.
- The historical source fails exactly four pointer truncation diagnostics;
  the candidate passes strict isolated C++17 syntax.

No canonical function symbol or original machine bytes are executed. The
host operation, source syntax and guest ABI are distinct evidence layers.
Guest address translation/wrap, actual caller allocation, fault/flag behavior,
register/stack transport, original CPU behavior, Xbox runtime execution and
byte-identical rebuilding remain unverified. The retained backwards pointer
spelling is not safe for arbitrary native arrays without the documented prefix.

Integration must rerun the full exact-tree audit, add this focused gate to CI,
and preserve the historical preimage as `-text` in `.gitattributes`. Those
repository-wide integration edits are deliberately not part of this scratch
proposal.
