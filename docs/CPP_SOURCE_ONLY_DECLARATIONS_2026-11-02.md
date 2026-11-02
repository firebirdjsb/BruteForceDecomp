# C++17 source-only repair and evidence-gate quarantine — 2026-11-02

**Starting main:** `89850aef2276bcc90faeec9c3cb6d16f87654dd7`. **Completed exact-tree baseline:** `7d9c67d8857312fdf89349a161145c844575502c`, [run 41381591720](https://github.com/firebirdjsb/BruteForceDecomp/actions/runs/41381591720): **3,918 / 13,694 C++17 drafts pass; 9,776 fail**. The later starting commit only published these exact-audit metrics.

## Validated source repair

`0x002E3500 -> 0x002E3490`: add only the existing callee draft declaration `extern uint FUN_002e3490(undefined4 param_1,undefined4 param_2);`. All three original call expressions, caller body and original x86 SHA-256 comment are unchanged. Caller source preimage SHA-256 `7dd822c1d797ce48729bb3ef67644c2d72f212c063cbde14fb0039915cc7d477`. Callee source SHA-256 `048b344e441c6c56d1e72f71a75a259ec3054bce55f3c0c218de71cba0139e1f`. Exact-source local Clang++17 O0/O2 syntax and declaration-removal negative control passed. CI regression: `scripts/verify_cpp_20261102_002e3500.py`. This is **source syntax only, ABI_UNVERIFIED**, not an original Xbox calling-convention or runtime claim.

## Quarantined candidates and protected prior evidence

26 nullary callers of `FUN_001fe150` in `band_001f` were screened. Their existing callee draft is `void FUN_001fe150(void)`, but each caller still has a separate unresolved `thunk_FUN_00237ec0` call. Adding a declaration for `FUN_001fe150` alone does **not** produce a passing function.

The first staged batch temporarily added those 26 declarations. [CI run 41387355707](https://github.com/firebirdjsb/BruteForceDecomp/actions/runs/41387355707) rejected the changes at the established 209-case exact-source literal provenance gate (`Changed reviewed source: 0x001fbae0`). **All 26 partial declaration edits were therefore reverted**, rather than weakening that evidence gate or inventing the thunk ABI. They remain in the evidence-needed queue. Only the independently tested `0x002E3500` source change is retained.

The retail XBE was unavailable during this run; no new original machine-code CALL, ECX, ESP, RET, x87/SSE, or virtual-dispatch contract was authenticated. No guest32 host-pointer cast, class, argument, output, or gameplay behavior was invented. No demo-only material was introduced.

**Progress policy:** do not change README or published percentages until a completed full 13,694-function exact-tree audit of the corrected pushed SHA is available. Original retail code remains preserved in BruteForceDecomp; verified demo-only exclusions belong to the later Reloaded packaging gate.
