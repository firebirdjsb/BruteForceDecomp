# 2026-10-31 — six new C++17 source-only call declarations

## Baseline and scope

The last completed exact-tree compiler audit before this batch measured
**3,463/13,694 passing (25.29%)** at
`41eb6491b56548b9fc00c5aee5aa9ce0f23d1caa`
(workflow `41203948583`): **10,231** failing. This is a syntax statistic,
not Xbox function correctness. The compiler report records each of the six
callers below as a **single-error undeclared-identifier case**.

The only edits to these original-address `.cpp` drafts were **file-scope
declarations copied from their existing callee Ghidra drafts** and explicit
`ABI_UNVERIFIED` notices. Original function bodies, function names,
entry addresses and embedded original x86 body SHA-256 labels were preserved.

| Caller | Callee draft declaration | Pre-change Git blob SHA-1 | Original XBE body SHA-256 label |
| --- | --- | --- | --- |
| `0x00318786` | `void FUN_00317e2d(void)` | `88a7e7eb1548d4735dc6168c161279458c054d4d` | `D70B41B7C3AEDDB6646E9EB9CFEB92D1DB3D496AFBCA0F9DCF38933DF422A4E6` |
| `0x003193BA` | `void FUN_00316300(int)` | `876396bf44a99e20fb621f3431489f8f51c2ab64` | `74C5ED9F446B5D4AC7987A4218B869E4DB5A7AFADC2CC1CEA7BC23A43932E7CB` |
| `0x0031987C` | `int FUN_00319589(void)` | `7e72eb97930ce8dbc5eb8ac5fe7d11308829a41f` | `19570A2AF28625B601F1488A30FA9A02D310268B724FA75B328E8066FD5DA4CD` |
| `0x0031C0FD` | `undefined4 FUN_0031c06c(void)` | `648390755a51b9302716b27e19f658f5a83ed020` | `11988D4F45100F86BBD579CBE5143DBC97386956073EEA0615C7FC1B6217066D` |
| `0x0031C7BF` | `void FUN_0031c741(void)` | `7a43351118db6ab7742a92c5b47683d668dc6593` | `7345F904F049745850728B95C303B396E5DFC2452492080DD1117E60630CEFCD` |
| `0x00357470` | `void FUN_00356f00(uint)` | `b039549d21bd68a4749d046b8697e8086399faf2` | `4177CBEC51BD38BC2E5DC7E2CFDE6DA53C3F93FDE2897658BB7DFACD3CE5E642` |

The signed integer argument used in the Bink wrapper is passed to the
callee draft's 32-bit unsigned integer parameter. No guest pointer to host
pointer conversion was added. The original x86 bit pattern, native ABI and
final argument interpretation remain unverified.

## Tests and negative controls

`tools/test_cpp_20261031_five_dsound_declarations.py` and
`tools/test_cpp_20261031_bink_scalar_call.py` are wired to the active
strict C++17 GitHub audit workflow. They check source-matched callee
declarations, preserved original caller body-hash labels, and the **exact
Git blob identity of the original caller source after removing the added
declaration**. They run isolated `clang++ -std=c++17 -fsyntax-only` with
`-O0` and `-O2`. Removing the declaration must restore the prior
undeclared-identifier error. The tests do **not** execute game code.

This batch is **not credited** to the published syntax percentage until
the new exact-commit full-inventory audit successfully completes.
Neither a passing isolated syntax test nor the pre-change compiler
diagnostic guarantees an exact-tree net gain.

## Evidence boundary and deferred families

The original retail XBE was not available for reauthentication in this
session. Every reconstructed caller/callee remains `ABI_UNVERIFIED`.
Do not infer original Xbox calling conventions, ECX/EAX/EDX producers,
guest memory mapping, `RET n`, vptr slots, x87/SSE, original behavior
or native PC linkage from these host-language declarations.

Examined but **not modified** were parameter-arity and pointer mismatches
in many main-executable and Bink/XOnline wrappers. In particular,
`0x003158C4`/`0x003158D8` pass guest integer values where
`0x0031B1CD`'s draft expects a native pointer;
`0x0031C11A` consumes a result from a callee drafted as `void`;
and several `0x003607F0` Bink callers pass unsigned
global-address pointers to a draft expecting `int*`.
Those cases require original guest stack/register and storage evidence,
not forced C++17 casts or invented prototypes.

The official retail identity remains XBE SHA-256
`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
Do not commit the private XBE or complete Ghidra exports.
