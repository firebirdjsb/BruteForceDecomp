# Forty original-XBE direct-call edges — C++17 triage evidence

**Source inventory:** completed exact-tree strict C++17 audit at `74304f6d3137eb1c336387ac3e4ddcd3c23278f9` (3,577 passing / 13,694; 10,117 failing). The latest published progress is **26.12% host syntax**, not behavioral completion.

**Retail evidence:** original Xbox Brute Force XBE SHA-256 `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`. The private XBE is **not** included in Git. The new verifier pins **40 distinct original CALL sites** selected from one-first-error source/callee triage, plus **11 narrow instruction windows** in two network timer call families. Every selected E8 displacement was independently checked against the original executable. The verifier rejects 120 synthetic negative controls and a modified-XBE negative control.

Run locally with the user's own retail XBE (outside Git):

```sh
python3 scripts/verify_cpp17_triage_40_xbe.py --self-test --xbe /private/path/to/default.xbe
```

CI runs `--self-test` only, because copyrighted retail bytes are not available in Actions. This is a **partial original-machine evidence milestone**, not a syntax or cross-function host-linkage repair. Source addresses, original-body SHA256 comments and C++ bodies are unchanged; no guessed arguments, casts, guest pointers, classes or virtual dispatch were introduced.

## Two original network timer call contracts

| CALL | Evidence | Still unverified |
| --- | --- | --- |
| `0x0034E27C → 0x00352E4C` | Caller pushes ESI at `0x0034E27B`; callee reads `[ESP+4]`, stores EAX to `[ECX]`, EDX to `[ECX+4]`, then `RET 4`; caller `RET 4` | Host kernel timer implementation and guest-memory translation; entire register preservation |
| `0x0034E2B5 → 0x00352E5E` | Caller computes local buffer with LEA, pushes EAX; callee reads the stack pointer after register saves, then `RET 4`; caller `RET 8` | Indirect kernel frequency call, helper 64-bit arithmetic, full EDX:EAX output and guest-memory contracts |

These windows establish observed **two-DWORD stores** and specific stack cleanup; they do not license treating the draft's `int*`, `undefined8*` and `undefined4*` as interchangeable C++ types. In particular, no native 64-bit host pointer is substituted for an original 32-bit guest address.

## Evidence-needed queue

- `0x0034E276 / 0x00352E4C`: reconcile the 8-byte output buffer with the exact two 32-bit machine stores before changing C++ storage.
- `0x0034E296 / 0x00352E5E`: recover the full 64-bit arithmetic/output contract and external kernel timer dependencies before source conversion.
- `0x0027E5F0 / 0x0027E580`: original EAX survives a callee whose Ghidra draft is `void`; no fabricated return prototype.
- `0x001CF810 / 0x001D1D40`: original caller pushes ESI and sets EAX from EBX; the draft-only typed signature does not establish the register interface.

Numerous sampled one-error declarations were quarantined for signed/scalar-versus-pointer or void-versus-output conflicts. Adding an `extern` solely to silence Clang would conceal unresolved Xbox ABI facts.

**Independent gates:** C++17 host syntax, source-matched host symbol linkage, Xbox x86 ABI and behavior remain separate. This evidence report promotes **zero** functions to 1:1 behavioral verification, **zero** functions to native PC linkage, and **zero** new syntax passes until a complete exact-tree audit measures them.
