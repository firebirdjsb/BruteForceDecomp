# Full C11 audit and evidence-gated repair queue — 2026-10-28

## Pinned baseline

- **Branch:** `main`; observed tip `638eb32b12b979800cbd6ba5c343d9d7526406e5` (documentation/progress update after the audited C sources).
- **Exact C source tree audited:** `74669f69d6c7224c2bd8bd365112060cc1f5bbb0`.
- **Completed GitHub Actions run:** [40675947440](https://github.com/firebirdjsb/BruteForceDecomp/actions/runs/40675947440).
- **Complete report, all 84 first-error diagnostics, stack-offset groups and identity review:** [full-c11-inventory artifact](https://github.com/firebirdjsb/BruteForceDecomp/actions/runs/40675947440/artifacts/12811051538).
- **Clang C11 host syntax:** **13,610 pass / 84 fail / 13,694 total**, or **99.39%**. This is not 1:1 behavioral completion or a native game build.
- **Integrity:** original-body hash-label mismatches **0**, missing original-body hash labels **0**, C source fingerprint drift **0**.
- **Entry-symbol lexical review:** 736 identities require review; 12,945 direct-name candidates and 13 macro-alias candidates are not verified ABI identities.
- All CI source-only regression steps in this completed audit passed. The complete tree syntax sweep took 164.2 seconds. No private XBE bytes were loaded into public CI.

## Every failing function, grouped by first compiler error

| Category | Count | Entry addresses |
| --- | ---: | --- |
| Unresolved guest-stack reference | 38 | `000dd8e0`, `000dddd0`, `00127290`, `00175090`, `001e4e30`, `001f3aa0`, `001f4a90`, `00239e50`, `0023aba0`, `00254c60`, `00254f60`, `00255330`, `00257b50`, `00258040`, `00269600`, `00288d40`, `002a6f50`, `002a75d0`, `002ac100`, `002ac280`, `002b28e0`, `002bf610`, `002c2530`, `002c41e0`, `002ebea0`, `002ee515`, `0033fa74`, `0034018d`, `0034055e`, `00340734`, `00340983`, `00340cf7`, `0034107d`, `00341540`, `003416c2`, `00342562`, `0035b680`, `0037b2fc` |
| Invalid float/pointer conversion | 24 | `0002f270`, `00041870`, `00065800`, `000702a0`, `000af1a0`, `000d8140`, `000dd380`, `000ee6e0`, `000f0a30`, `001137e0`, `0011c810`, `0011caa0`, `00142df0`, `001f8db0`, `0021ded0`, `00220120`, `002237c0`, `00224a90`, `00227f80`, `00266bf0`, `002c37d0`, `002c9f30`, `002ca850`, `002d29f0` |
| Invalid SIMD/structure member | 12 | `0002fd40`, `00049cf0`, `00117660`, `0011afa0`, `0012cd10`, `001ea2e0`, `001f5600`, `00213fc0`, `00226cc0`, `002ceb10`, `002d7270`, `002ebfe0` |
| Invalid SIMD array assignment | 4 | `00027540`, `0011e9d0`, `00155840`, `002d8e40` |
| Unresolved RAM symbol | 3 | `001ff0f0`, `002058c0`, `00282360` |
| Unresolved pseudo-register symbol | 3 | `002c2a20`, `002e70f0`, `00306d4c` |
| **Total** | **84** | All identities from the complete compiler sweep |

The first-error stack references span **34 distinct offsets**: 26 failing functions have negative offsets and 12 nonnegative. Ten of the 84 failures are in the XOnline group. Categories list only **first** errors; later diagnostics may become visible after scoped repairs.

## Evidence-verified boundaries that must not be guessed

1. **Stack probing / dynamically allocated frames.** `0x002EBEA0` already has a separately tested guest-state model and authenticated original instructions in [its evidence note](../evidence/002ebea0-stack-effect.md). The original entry and caller bridge remain unresolved. Do not replace guest stack references with arbitrary host locals, `alloca`, or unbounded VLAs. Dynamic stack behavior also blocks `0x002C2530` and multiple XOnline callers.
2. **SIMD producer output.** At `0x00027540`, the caller's SIMD values come from the implicit-register output of `0x00027490`; see [register-output deferral](../evidence/002a35b0-sse-and-00027540-register-output.md). At `0x002D8E40`, the two omitted ESI outputs of `0x002CD2B0` must be connected first; see [SSE deferral](../evidence/002cafa0-sse-storage-and-002d8e40-deferral.md).
3. **Parser dispatch.** The `uRam00000008` identifier in `0x001FF0F0` and `0x002058C0` refers to a field at **+8 of an indirect output pointer**, *not* guest address `0x00000008`. Reconstruct `0x001FEB60` and both caller output slots before editing the dispatch; see [dispatch evidence](../evidence/001ff0f0-002058c0-dispatch-source.md).
4. **Reused floating/pointer storage.** [`0x000DD380`](../evidence/000dd380-deferred-register-producers.md), [`0x000EE6E0`](../evidence/000ee6e0-entry-and-output-slots-deferred.md) and [`0x00049CF0`](../evidence/00049cf0-senior-helper-contracts.md) contain documented producer, register, x87 and helper dependencies. A cast or default value that merely removes a diagnostic is not a valid repair.
5. **Source-only virtual-call work.** `0x00282360` has one instruction-supported second argument-address correction, checked by `scripts/verify_00282360_indirect_guest_output.py`. Its adjacent `iRam0000002c` and other low-address artifacts are not yet identified as real guest absolute-memory accesses.

## Next repair integration gate

For each new candidate, (a) check private original XBE SHA-256 `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721` and original ordered body bytes; (b) trace guest ESP, live register inputs, producer-written words, and call cleanup; (c) correct only those evidenced 32-bit storage and argument contracts; (d) run strict focused Clang i686 and x86_64 C11 checks, corresponding instruction/fixture tests and exact-source hashes; (e) integrate **only to main**; (f) run the full 13,694-function audit on the new commit and update the published coverage only from its results.

**Audit scope and limitation:** This is a detailed review of the latest *completed full-tree host-C11 audit*, not fresh Xbox runtime, cross-function linking, guest-memory translation, x87/SSE equivalence or 1:1 machine-code verification of all functions. No C source was changed or newly counted as passing by this documentation-only audit.
