# Instruction-backed C++17 repairs from private exports — 2026-11-04

## Evidence admitted and excluded

The private FunctionExport archive contains 13,694 function records. Their entry identities, indices and body hashes match the repository inventory. This is a pseudocode/identity export, not a fresh authentication of the original executable.

The private REA archive provides complete instruction bytes for **300 unique functions (54,192 body bytes)** whose SHA-256 values independently match the existing pinned inventory. Repeated records do not count as new functions. One 3,192-byte function (`0x00018c40`) is truncated: 630 bytes are absent, so it is not admitted as complete-body evidence. All 832 standalone records repeat identical 56-register read/write summaries; those summaries are unusable for register or ABI proof and were ignored. Exact instruction bytes, not `authenticated: true` labels or broad register lists, support this batch.

The original XBE was **not** reauthenticated. No uploaded Python, Java, PowerShell or executable content ran. Complete pseudocode exports, original function byte bodies, private project databases and private filesystem paths are not committed.

A reproducible optional verifier, `tools/verify_cpp_20261104_uploaded_evidence.py`, reads the two private ZIPs and rechecks eight exact pinned bodies and address ranges: the six changed callers/operations and the existing `0x0008f6a0` and `0x000120f0` callees. It validates **1,255 bytes**, including a discontiguous body. Duplicate JSON keys, conflicting bytes, relocated ranges, incomplete coverage and unsafe archive members fail closed. Its seven synthetic regression tests require no private data. This verifies supplied-byte/hash consistency, not the executable's entire identity or runtime behavior.

## Bounded repairs

### `0x000b2720`: byte displacement

Instruction `0x000b2743`, bytes `f6461301`, tests one byte at `[ESI+0x13]`. The preceding instruction loads ESI from `[EBP+8]`, matching the source pointer expression. The repair replaces the pointer-to-int round trip with an unsigned-byte pointer plus `0x13`. Read width, bit mask and short-circuit structure remain unchanged. Existing guest-memory mapping, implicit register inputs, indirect dispatch and callee contracts remain unresolved.

### `0x00072940`: nine existing guest32 call handoffs

Nine direct E8 instructions target the already modeled `FUN_0008f6a0(guest_esi, guest_word_0)`. Original LEAs identify the ESI value; every site pushes a zero DWORD and removes four stack bytes afterward. Only those nine call expressions change. No new declaration, return type, host-pointer truncation or invented register value is introduced. The unsigned argument calculations reflect the evidenced 32-bit LEAs. Other original draft expressions, including signed-overflow assumptions and uninitialized register pseudo-variables, are not repaired or executed as a whole function.

### `0x0003f0e0`: existing EAX-model handoff

At `0x0003f0e1`, `8bc6` moves ESI into EAX before a direct call to `0x000120f0`. The existing callee model already takes `int32_t in_EAX`. Supplying the existing `unaff_ESI` source variable restores that one argument without changing a prototype, inventing a register or converting a native pointer. Both complete original bodies match pinned hashes. The callee still has independent compile/memory-model blockers, and the caller's uninitialized register pseudo-variable is not executed as a whole-function test.

### `0x0009e8b0` and `0x000388b0`: guest initializer words

Six address-of host-symbol assignments now retain the original immediate guest DWORDs. Two callback sites pass the original pushed code-address words through the existing raw-word `_atexit` interface. A third call supplies the evidenced guest ESI constant and preserved entry-EAX word to the existing `0x0008f6a0` model. Exact instruction producer/store/call/cleanup sequences, source reversal, existing helper contracts and independently reviewed captures constrain these edits. No host callback dispatch is invented.

The focused initializer gate passes six tests, including exact source reversal, full O0/O2 syntax/object builds, original negative controls, all narrow evidence-byte/address mutations, 20,000 deterministic word samples and ten wrong-value controls. Shared private replay now covers eight complete bodies and 1,255 bytes. The `_atexit` callee had only a source-pinned signature in the initial REA bundle; later immutable Ghidra extraction independently supplies its 18-byte body, still without authenticating an entire executable.

The unchanged 250-case historical literal ledger reports 44 complete and 206 partial cases with all 483 historical DWORD values retained. The separate 209-case ledger remains 15 complete and 194 partial with 469 values. Both full ledgers pass O0/O2, preimage and corruption controls. Six new exported-evidence overlay tests and ten existing source-spelling overlay tests pass. Evidence classes remain separate and independently pinned.

### `0x002338c0`: ordered SSE operation

The complete 271-byte, 72-instruction body establishes raw binary32 lane loads/stores and ordered SSE operations. The prior draft incorrectly performed numeric conversion of packed float words and reassociated additions. A scoped native x86 SSE helper now follows the observed operand order, packed-lane operations, staged loads and overlap-sensitive stores, with no approximate math fallback. The source entry, signature and original body identity remain visible in a small wrapper.

All right input lanes are captured before stores; the left input is intentionally loaded in stages. Capturing all left input up front would change shifted-overlap behavior. Arithmetic wrappers explicitly preserve source/destination order and prevent FMA, reassociation and NaN-payload-changing commutation.

This is an **aligned live-float host-buffer operation** with whole-float overlaps. Arbitrary byte-unaligned guest addresses, guest32 mapping/stack ABI, unmasked exception recovery, memory faults, cross-CPU NaN behavior and game integration remain outside the verified contract. An independent GCC UBSan check identified the unaligned intrinsic boundary; the limitation is documented rather than hidden.

## Tests and remaining limits

- Complete corrected sources pass strict Clang C++17 at O0/O2; old preimages fail their original syntax errors.
- Byte-offset tests cover 256 input byte values, unchanged sentinels, wrong-displacement/scaling negative controls, opcode corruption, exact source reversal and header-free i386 expression compilation.
- Call-handoff tests decode E8 and LEA ModRM/SIB operands, reject 74 evidence/expression mutations, preserve caller/callee hashes, and check 186,084 initialized ESI/zero-word captures per optimization level. No complete register-dependent caller is executed.
- The SSE operation has a separate authored instruction-order oracle. Tests compare complete memory, untouched sentinels, output pointer and MXCSR bits, not numerical tolerances. Cases include randomized bit patterns, cancellation, signed zeros, infinities, subnormals, NaN payloads, sticky flags, rounding/FTZ/DAZ settings and overlapping buffers. No uploaded machine-code body is executed.
- All results remain distinct from original Xbox ABI, linkage, playability and full-game 1:1 equivalence. The existing pre-batch test-suite failures remain separately reported; they are not hidden by lowering expectations.

- The additional EAX handoff has five focused tests, 57 mutation controls and 1,000,075 initialized full-DWORD transfer captures per optimization level. Exact source reversal, unchanged callee interface, complete caller syntax/object compilation and the original missing-argument negative control pass.
- The SSE gate executes 768,512 complete-memory/MXCSR comparisons at both Clang O0/O2. An independent reviewer runs another 200,000 cases per build with Clang O0/O2/O3+AVX2+FMA and GCC O2. Within-contract GCC ASan+UBSan checks pass; LeakSanitizer is disabled because the sandbox uses ptrace. Clang ASan linking is unavailable because that extracted toolchain lacks compiler-rt. No unavailable sanitizer run is claimed as passed.

## Remaining evidence and publication blockers

The supplied instruction exports do not cover the previously held `_memmove`/`__strnicmp` edges. `0x00012320` still requires native-pointer-to-guest-address mapping. `0x00064490` lacks the required target body and has conflicting visible argument counts. `0x0009fd40` needs an original guest stack/output frame. The covered SQRTSS candidates remain blocked on absent callee evidence or stack-address bridges; no x87 or host-math fallback was introduced.

The user approved installing and running official Ghidra in the cloud. Ghidra 12.1.4 was obtained from its official release and checked against its published checksum. Read-only extraction from a separate copy of the supplied project uses the documented immutable project-view API, analysis disabled, and an independently reviewed, newly authored exporter. No project owner is changed. The original ZIP and project database remain unchanged. The first failed writable headless attempt normalized CRLF line endings in one index file of a disposable copy before rejecting ownership; subsequent immutable reads leave copied database and metadata hashes unchanged. A fresh copy is used for additional context reads. All 13,694 canonical entries, recorded body ranges and body hashes match inventory. Independent verification checks 849,614 instruction records covering 2,563,752 recorded body bytes without gaps or overlap. This does not prove that an analyst-defined function body includes every real continuation. There are 2,197 functions with CALL_RETURN flow overrides and 20 x87 WAIT instruction-boundary grouping disagreements (four overlap). Another 19 functions have PREFETCH instructions labeled NOP by the stored listing, with 18 outside those earlier exclusions. Thus 11,463 functions have none of these three listing flags. All flagged cases require separate raw-byte and continuation review; one candidate was held because a continuation contains stores missing from its draft. The project has no persisted original FileBytes, so its stored executable-hash metadata cannot independently authenticate the full XBE. No uploaded scripts or original game code are executed. No user-computer resources are used.

GitHub access was rechecked and remains `push: false`. No push or access workaround was attempted. Remote main remains `910d6acfea11d8103061ff3453216e2319177828`. Published README/progress files remain tied to their real existing CI run rather than a fabricated new run.

## Full audit checkpoint

At commit `6a4e2f7a8d234cd19c5f44644f43077acd4784f9`, the full strict host C++17 sweep checks **13,694** sources: **3,968 pass (28.9762%)**, **9,726 fail**, with **zero provenance errors** and **zero check errors**. Exact-tree verification passes. This is +23 over the initial 3,945 baseline and +6 over the pre-upload 3,962 checkpoint. No source regressed and all original body labels remain unchanged. The immediately preceding 3,966 checkpoint gains exactly `0x000388b0` and `0x0009e8b0`.

Report SHA-256: `1dafd08efe319736c0da07900b8eb87da1f71a8d494decdb50476bfa497e54dc`.

Broad discovery runs 229 tests with the same pre-existing 14 failing subchecks and one error, plus seven optional skips. The failures are confined to the historical 21-source-matched-callers gate: stale provenance at `00315c8f` and seven pointer/integer interface mismatches at O0/O2. The same failures were reproduced independently on the unchanged remote base; they are not suppressed or counted as passing. All new focused gates pass, including optional private evidence replay. Repository safety scan reports zero high-confidence alerts across 14,922 tracked paths; source provenance and C++-only policy checks pass.

This checkpoint is saved locally in the cloud; GitHub publication remains blocked by read-only repository access. No push was attempted.
