# Retail direct-call declaration repairs

The starting exact-tree audit at `465650226158ca5d01d84e83bef328b74a4b2d12`
found 4,138 syntax passes and 9,556 failures. This pass reviewed undeclared
call identifiers in that inventory. The manifests under
[`metadata/cpp_direct_call_batches`](../../metadata/cpp_direct_call_batches)
record 210 repaired callers, 664 direct CALL sites and 570 distinct bodies.

Every repair uses the signature of an existing canonical C++ definition.
When Ghidra used a short label for a canonical platform symbol, the authenticated
CALL target determines the spelling. Allocator callers use the existing
`bf_002ea01d_allocator_guest32.h` declaration. Existing argument expressions,
control flow and body labels are preserved. Callers with unmatched targets,
contradictory observed stack cleanup, or floating-point or wide scalar draft
interfaces were deferred. Four additional drafts exposed remaining pointer
width diagnostics under Linux Clang and were deferred.

The retail XBE matched the pinned SHA-256. Ordered raw-file-backed ranges
reproduced the 570 original body hashes. Decoded E8 instructions agreed with
the targets in the manifests. The check also replayed the recorded RET sites
and rejected a displacement mutation at every call. All 210 changed callers
passed focused Clang C++17 syntax checks at `-O0` and `-O2` with return-type and
float/integer conversion diagnostics promoted to errors.

CI runs `python3 tools/check_cpp_direct_call_batches.py`. The optional
`--xbe` argument replays retail provenance locally using the supplied original
image. These are syntax repairs. Original hidden inputs, whole-function guest
ABI, runtime linkage and behavioral equivalence remain unverified.

## Heap thunk operands and DWORD stores

Fourteen callers reuse the existing heap-free guest32 adapter. The retail
XBE proves the distinct thunk entry, the instruction loading the original
DWORD, the PUSH passing it, and the returning caller cleanup for all 38
calls. Several cleanup instructions lie outside the ranges selected by
Ghidra and are verified separately. Branches that test and pass the same
loaded DWORD now retain one load. The heap target still follows the guest
dispatch slot and may be replaced at runtime.

Two isolated drafts preserve verified DWORD stores. At `0x00139D36`, the
retail instruction writes immediate guest address `0x0039DB60`. At
`0x00263584` and `0x00263588`, the original loads and stores a DWORD through
EAX. The draft retains that DWORD for the store. Both drafts still need
guest indirect-tail dispatch and original register and stack integration.

## Single-instruction jump entries

Five DirectSound drafts contained decompiled target code even though their
complete retail bodies are each one direct relative JMP. The models now
update guest EIP to the verified target without creating a guest return
address. The original body digests and destinations passed the private XBE
gate and the C++ models passed the linked fixture at `-O0` and `-O2`.
Entries with existing source call sites were deferred until their guest call
interfaces can be reviewed together.
