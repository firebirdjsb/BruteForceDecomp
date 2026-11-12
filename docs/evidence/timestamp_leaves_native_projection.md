# Two bounded native timestamp leaves

The original-address drafts at `0x00377780` and `0x002f2986` now express a
**native, unsynchronized RDTSC projection and its result transport**. This is
not a recovered Xbox clock, a timing oracle, an original ABI implementation,
a byte-identical rebuild, or evidence that the game is runnable.

## Original evidence and preserved identity

The evidence manifest is `metadata/cpp_20261105_timestamp_leaves.json`.
It pins the unchanged original XBE identity, individual body hashes, both
private validation rows, raw and canonical record hashes, instruction windows,
source before/after bytes and Git preimage blobs. The private export has clean
validation rows for both leaves. An independent 32-bit GNU binutils decode
checks all 20 original bytes and all nine instruction boundaries. These bytes
are read as data only. The complete XBE was not reauthenticated in this work.

- `0x00377780`, `FUN_00377780`: RDTSC; RET. The three-byte body hash remains
  `E572998B3B58C16BC83EC1DA10D1EC23BC90D1A98AC7F63477406D47905C32D3`.
- `0x002f2986`, original label `QueryPerformanceCounter`: load an explicit
  output pointer from `[ESP+4]`; RDTSC; store EAX at offset 0; store EDX at
  offset 4; XOR EAX,EAX; INC EAX; RET 4. The 17-byte body hash remains
  `70BA83B459AA83150DC6FB7078B292C4A53D35AA6B26B690DEB64971B7AE4374`.

The original signatures, labels, addresses, status warnings and inventory pins
are unchanged. Exact historical source preimages live in `docs/preimages/`.
The public gate reverses the edits using raw bytes, validates SHA-256 and Git
blob identities, and checks each source route and original body label. No
inventory identity is promoted to recovered ABI or original runtime behavior.

## Native implementation boundary

`include/bf_native_timestamp_operation.h` supplies one always-inlined GNU/Clang
x86-64 Linux operation. One volatile RDTSC assembly statement binds EAX and
EDX to unsigned 32-bit values. Unsigned widening, a 32-bit shift and OR form
the native 64-bit return value. There are no fences, extra reads, synthetic
counter state, wall-clock calls, conversions or frequency assumptions.

The pointer leaf narrows unsigned values directly to the existing unsigned
32-bit alias, avoiding the draft's intermediate implementation-defined signed
narrowing. Two separately sequenced volatile 32-bit stores preserve the
low-then-high memory access shape in the supported compiler configurations.
This does not make the pair atomic, permit data races, or create a C++ memory
synchronization primitive.

The output contract is two live writable `uint32_t` objects with at least
4-byte alignment and the usual native pointer validity/lifetime requirements.
The host pointer is not a 32-bit Xbox guest address. Original x86 unaligned
accesses, invalid-pointer fault details, guest pointer mapping, MMIO, aliasing
with implementation state, register/flags preservation, stack cleanup and
RET 4 calling convention are not recovered. Native callers must run where
user-mode RDTSC is permitted. The gate does not change that host setting.

No claim is made about Xbox counter values, original CPU behavior, frequency,
CPU migration, virtualization, monotonicity, elapsed time or ordering relative
to unrelated accesses. Successive nondeterministic timestamp reads are never
compared for equality, and a timing bracket is not used as a behavioral oracle.

## Reproducible checks

The public gate has no private paths, private exports or third-party Python
package dependencies. It needs Python 3, a GNU/Clang C++17 compiler and GNU
binutils `objdump`:

```
python3 tools/test_cpp_timestamp_leaves.py
python3 tools/test_cpp_timestamp_leaves.py --compiler g++ --matrix --ubsan
python3 tools/test_cpp_timestamp_leaves.py --compiler g++ --sanitize
```

`--matrix` checks O0/O2, x86-64/x86-64-v3 and none/branch/full CET. The generated
function graph is interpreted as bit origins, not as a numeric timing sample.
It rejects extra reads, extra or reordered stores, widened stores, wrong
halves, wrong offsets/return values, fences, RDTSCP, unknown instructions,
non-stack input reads, uninitialized spills, stack imbalance and changed
callee-saved registers. Only native compiler scratch accesses are allowed in
addition to the required two output stores. Unsupported code generation fails
closed rather than being silently ignored. This graph checks the stated host
projection, not original flags or the Xbox calling convention.

A separately authored controlled fixture replaces only the RDTSC primitive
in temporary header copies with explicit independent low/high inputs and a
read counter. There is no test seam in the production helper. Both canonical
source bodies otherwise remain unchanged. Each configuration checks 2,627
cases: edge and random low/high combinations, all 4-byte alignments modulo 64,
untouched adjacent sentinels, an exact two-object allocation and both ends of
a guard-page-backed span. The real RDTSC primitive is inspected in generated
objects, not executed by these deterministic tests. Generated source/header
mutants are compiled and rejected by the graph, with value-changing mutants
also rejected by the runtime fixture. Deliberate store merging/reordering
and extra reads are graph checks because output values alone cannot detect
them.

UBSan additionally checks the valid objects and rejects a separate deliberately
misaligned pointer fixture. `--sanitize` requires ASan plus UBSan. The runner does not alter sanitizer
environment settings, retry failures as success, or change host settings.
A missing compiler runtime is a blocker. In a ptrace-constrained cloud
executor, the established process-local `ASAN_OPTIONS=detect_leaks=0` setting
can run the address/undefined checks while leak inspection remains explicitly
unavailable. This does not certify leak freedom. Without that setting a
LeakSanitizer/ptrace failure is a failed invocation, not a passed ASan result.
A separate successful `--ubsan` run does not certify ASan. Private evidence can optionally be supplied with `--private-export`;
the supplied directory is read only as bounded static JSON and original bytes
are independently decoded, never executed.
