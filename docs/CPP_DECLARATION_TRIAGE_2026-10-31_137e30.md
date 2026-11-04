# 2026-10-31 source-only C++17 declaration triage (no private XBE)

Starting exact-tree audit: [41eb6491](https://github.com/firebirdjsb/BruteForceDecomp/commit/41eb6491b56548b9fc00c5aee5aa9ce0f23d1caa), run [41203948583](https://github.com/firebirdjsb/BruteForceDecomp/actions/runs/41203948583), **3,463 / 13,694 passing (25.29%)**, 10,231 failing. The audit's 455 *single-error undeclared FUN identifier* entries are a **candidate pool**, not 455 safe repairs. Current source must be rechecked after concurrent main changes.

## Validated source-only change

- Caller `0x00137e30`, callee `0x001388d0`: callee **draft** spells `void FUN_001388d0(int,int,uint,int)`; the caller's existing four scalar expressions are `(unaff_EDI,param_2,1,param_3)`. A file-scope declaration matches those *source-level* forms. No original statement, cast, argument, guest32 pointer, address or original-body SHA-256 label changed.
- Caller original Git blob: `70cc9c5d5d04ce5c330ea7ffb6766826c032a783`. Original source SHA-256: `30b6ac02c582b8651106d14c8b841fb0d06da930765607d81d17e05ecd45b07b`. Result SHA-256: `43849367e5164ce0d1bc1431fb60c0b9001af36bd22527edc737489ff588f749`. Original body label: `856D9CDE7296D18FB0B48D5129F4F298238D763A43BE2C2127F13BAAA841F3BA`.
- Focused strict Clang++17 `-O0`/`-O2` passed with equivalent guest scalar aliases; removing the declaration restores the undeclared-identifier error; wrong arity is rejected. `tools/test_cpp_source_matched_00137e30.py` rechecks against repository headers. This is **CPP_SYNTAX_ONLY, ABI_UNVERIFIED**.

## Quarantined source/callee discrepancies

The following were screened from the completed audit's single-first-error queue. **These are draft-only observations, not original x86 evidence.** They must not be silenced with guessed prototypes, argument injection or pointer casts.

| Caller | Callee | Blocker in source drafts |
| --- | --- | --- |
| `0x0001c250` | `0x0001c930` | 3 call expressions vs 4 callee parameters |
| `0x000230a0` | `0x00023010` | byte-array local passed to draft `int*` |
| `0x00038b00` | `0x00038b70` | pointer-return draft assigned to integer |
| `0x000545f0` | `0x000543e0` | pointer supplied for draft scalar first argument |
| `0x000854b0` | `0x000857a0` | 3 call expressions vs 2 callee parameters |
| `0x00085540` | `0x00086990` | 5 call expressions vs 4 callee parameters |
| `0x000a2090` | `0x000a2840` | pointer-return draft assigned to integer |
| `0x000a7220` | `0x000a7ba0` | pointer-return draft assigned to integer |
| `0x000d0cb0` | `0x000d1110` | 1 call expression vs 3 callee parameters |
| `0x000e9390` | `0x000e9530` | 6 call expressions vs 2 callee parameters |
| `0x000e9530` | `0x000e9610` | 1 call expression vs 5 callee parameters |
| `0x000ef000` | `0x000ee6e0` | x87/FP and incompatible draft call arity |
| `0x001057f0` | `0x001051e0` | zero-argument call vs 1 callee parameter |
| `0x001209c0` | `0x001209f0` | x87 extended-precision result |
| `0x00129ad0` | `0x0012a110` | 4 call expressions vs 3 callee parameters |
| `0x0012afa0` | `0x0012b0c0` | 2 call expressions vs 3 callee parameters |
| `0x0012df20` | `0x001297e0` | 1 call expression vs zero-argument callee draft |
| `0x001306a0` | `0x00131e20` | 14 call expressions vs zero-argument callee draft |
| `0x001308b0` | `0x00131e20` | 14 call expressions vs zero-argument callee draft |
| `0x00130aa0` | `0x00131ed0` | 5 call expressions vs zero-argument callee draft |
| `0x00132720` | `0x00132ad0` | 2 call expressions vs 3 callee parameters |
| `0x00132790` | `0x001328e0` | 4 call expressions vs 3 callee parameters |
| `0x00137d30` | `0x001384c0` | 4 call expressions vs 3 callee parameters |
| `0x00139330` | `0x0013ac20` | 2 call expressions vs 3 callee parameters |
| `0x0013a9f0` | `0x0013af20` | 8 call expressions vs 6 callee parameters |
| `0x0013aa50` | `0x0013b1d0` | 7 call expressions vs 2 callee parameters |
| `0x0013af20` | `0x0013b050` | 3 call expressions vs 9 callee parameters |
| `0x00163860` | `0x00165170` | zero-argument call vs 2 callee parameters |
| `0x00163e40` | `0x001654c0` | zero-argument call vs 2 callee parameters |
| `0x001643b0` | `0x00165730` | zero-argument call vs 2 callee parameters |
| `0x00166100` | `0x00166980` | zero-argument call vs 2 callee parameters |
| `0x0017aa30` | `0x0017aa70` | x87 extended-precision return |
| `0x0017b4c0` | `0x0017d780` | 4 call expressions vs 2 callee parameters |
| `0x0017b5a0` | `0x0017d520` | 4 call expressions vs 2 callee parameters |
| `0x001f1fc0` | `0x001f2020` | `int*` argument vs `undefined4*` callee draft |
| `0x00210840` | `0x00210740` | integer-array argument vs scalar callee draft |
| `0x0020d190` | `0x0005ecb0` | zero-argument call vs 2 callee parameters |
| `0x00249110` | `0x000e3c30` | zero-argument call vs 1 callee parameter |
| `0x0027e5f0` | `0x0027e580` | void-return draft used as integer |
| `0x0028c910` | `0x0028ca40` | x87 return and 2 call expressions vs zero-argument draft |
| `0x002e7610` | `0x002e9a00` | zero-argument call vs 2 callee parameters |

Next queue: original-XBE-authenticated CALL targets, register producers, pushed word order, `RET n` and return/output contracts for these families. Do not infer a real C++ method or class from these drafts. The private retail XBE was **not available in this run**; no original-machine instruction validation or behavior verification is claimed. README percentages remain unchanged until a completed full exact-tree audit of the pushed SHA.
