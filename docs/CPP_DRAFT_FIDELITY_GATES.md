# Ghidra C++ draft coverage and 1:1 fidelity gates

## Every function needs an actual draft, not only a filename

The canonical source inventory contains 13,694 original function addresses identified by Ghidra for the retail Xbox Brute Force XBE. Each indexed address must have exactly one substantive C++ draft, with its original entry and x86 function-body SHA-256 recorded. A compiler-passing placeholder, a guessed signature, or an empty source is **not** a verified reconstruction.

These measurements are separate and MUST NOT be collapsed into one percentage:

1. **Inventory presence and structure.** The original Ghidra entry inventory, canonical C++ paths, hash **labels**, non-empty files and lexical function definitions must agree. Run the read-only audit in tools/audit_cpp_draft_coverage.py. This is evidence of source-structure coverage, *not* proof of faithful instructions.
2. **Original Ghidra body provenance.** Compare each C++ draft with the corresponding privately stored original Ghidra function export and document every later evidence-backed correction. The repository's body-hash **labels** alone do not prove the source body matches Ghidra pseudocode. No full original private Ghidra export is bundled into the public repository.
3. **Host C++17 syntax.** The exact-tree full 13,694-source Clang++17 sweep is the sole source of the README syntax percentage. It does not establish Xbox function semantics, linking or class layouts.
4. **Original x86 semantics.** Authenticate the private retail XBE using SHA-256 B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721. Verify branch decisions, memory reads/writes, x86 partial-word behavior, EAX/ECX/EDX, flags, x87/SSE, local storage, guest pointer width, CALL displacements, stack cleanup and return/output contracts. Where evidence is missing retain ABI_UNVERIFIED; never invent semantics just to satisfy the host compiler.
5. **Original C++ object/virtual dispatch and call linking.** Recover vptr positions, real vtable slots, member offsets, adjusted this, constructors/destructors and indirect-call targets against original x86. Then establish compatible interprocedural linkage with guest32 address translation, not an unsafe host-pointer cast.
6. **Conformance and native PC execution.** Compare behavior on the original Xbox version with the linked reconstruction. Once the faithful base is established, BruteForce: Reloaded may add optional widescreen, high frame rates, HD textures and modern multiplayer without modifying the 1:1 mode.

## Structural audit

Run:

```sh
python3 -m unittest discover -s tools -p 'test_cpp_draft_coverage.py' -v
python3 tools/audit_cpp_draft_coverage.py --root . --out cpp_compat_results/cpp_draft_coverage.json
```

The JSON report contains one status record per known function, structural errors and a queue of uncertain empty/return-only bodies. A single-byte x86 RET may legitimately correspond to return; so short bodies are reviewed using original binary evidence, not deleted or rewritten by heuristic. Invalid or absent function definitions fail the structural gate.

The fields original_ghidra_export_body_match and original_x86_semantics_1_to_1 are explicitly NOT_CHECKED and NOT_VERIFIED. Neither a 100% inventory nor a 100% syntax pass automatically upgrades them. The full audit uploads this JSON alongside the C++17 compiler report.

**Project completion is not established as a defensible 1:1 percentage.** Keep the README source-coverage, syntax and roadmap metrics distinct; do not label the project fully decompiled, rebuilt, or playable until original ABI, vtables, linkage and behavior are proven.

The repository name remains BruteForceDecomp; the native PC reconstruction is BruteForce: Reloaded. Do not commit the XBE, commercial assets, full Ghidra export or private source material.