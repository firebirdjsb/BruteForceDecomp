# C++17 declaration triage priority and evidence boundary — 2026-11-02

The latest completed exact-tree audit at `446afadbf2b0c72500191925be246829ca8a50e1` (GitHub Actions run `41398250506`) checked all 13,694 original-address C++17 drafts: **3,919 pass; 9,775 fail**. This is host syntax only, not Xbox ABI, native linkage, or game behavior.

The completed declaration-edge report contains **2,994** first-error edges, including **2,224** source-draft arity matches. Of those, **159** have exactly one compiler error. The previous first-400 source-type dry-run rejected all 400 candidates; none was automatically promoted. This pass also inspected 42 additional caller/callee source expressions and draft signatures; no original-address source change met the required type, provenance and evidence gates.

The new read-only priority stage orders existing SHA-gated edges so single-error callers with small draft arity are tested before multi-error callers. It **does not change eligibility**, does not repair any source, and never treats draft arity as an original Xbox call contract. It preserves every original edge record and rejects stale audited SHAs, duplicate identities and caller source-digest mismatches.

Run after the full exact-tree audit and declaration-edge triage:

```sh
python3 scripts/prioritize_cpp_declaration_edges.py \
  --audit cpp_compat_results/cpp_compat_report.json \
  --edges cpp_compat_results/cpp_declaration_edge_triage.json \
  --out cpp_compat_results/cpp_declaration_priority_edges.json
python3 scripts/triage_cpp_draft_call_type_risks.py \
  --root . \
  --audit cpp_compat_results/cpp_compat_report.json \
  --edges cpp_compat_results/cpp_declaration_priority_edges.json \
  --limit 400 --max-arity 3 --include-multiple-errors \
  --out cpp_compat_results/cpp_draft_call_type_risks.json
python3 tests/test_prioritize_cpp_declaration_edges.py
```

The original retail XBE was **not available** in this execution. Its required SHA-256 remains `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`. No CALL, ECX/ESP, RET, x87/SSE, virtual dispatch, or guest32 translation has been newly authenticated. All unresolved interfaces remain **ABI_UNVERIFIED**.

The next source repair queue is the prioritized source-only declaration dry-run output, followed by authenticated guest32/stack evidence for `thunk_FUN_00237ec0` and `0x002e9e80`. No demo-only content was introduced; retail functions remain preserved, with demo exclusions reserved for the future Reloaded release boundary. Do not publish a new syntax percentage until a completed full audit of the exact pushed source SHA exists.
