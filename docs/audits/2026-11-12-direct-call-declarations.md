# Retail direct-call declaration repairs

The starting exact-tree audit at `465650226158ca5d01d84e83bef328b74a4b2d12`
found 4,138 syntax passes and 9,556 failures. This pass reviewed undeclared
call identifiers in that inventory. The three manifests under
[`metadata/cpp_direct_call_batches`](../../metadata/cpp_direct_call_batches)
record 156 repaired callers, 321 direct CALL sites and 376 distinct bodies.

Every repair uses the signature of an existing canonical C++ definition.
When Ghidra used a short label for a canonical platform symbol, the authenticated
CALL target determines the spelling. Allocator callers use the existing
`bf_002ea01d_allocator_guest32.h` declaration. Existing argument expressions,
control flow and body labels are preserved. Callers with unmatched targets,
contradictory observed stack cleanup, or floating-point or wide scalar draft
interfaces were deferred.

The retail XBE matched the pinned SHA-256. Ordered raw-file-backed ranges
reproduced the 376 original body hashes. Decoded E8 instructions agreed with
the targets in the manifests. The check also replayed the recorded RET sites
and rejected a displacement mutation at every call. All 156 changed callers
passed focused Clang C++17 syntax checks at `-O0` and `-O2` with return-type and
float/integer conversion diagnostics promoted to errors.

CI runs `python3 tools/check_cpp_direct_call_batches.py`. The optional
`--xbe` argument replays retail provenance locally using the supplied original
image. These are syntax repairs. Original hidden inputs, whole-function guest
ABI, runtime linkage and behavioral equivalence remain unverified.
