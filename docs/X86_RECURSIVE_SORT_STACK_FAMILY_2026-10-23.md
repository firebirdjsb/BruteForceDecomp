# Eleven recursive 32-bit stack-call repairs — original-XBE evidence

Input: user-provided Brute Force retail `default.xbe`, SHA-256
`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
The original XBE is local evidence, not a repository asset. All eleven source files
retain the original entry and function-body digest; all original whole-body digests
were independently reproduced by reading file-backed x86 ranges.

## Exact original call contracts

The original recursive control flow is a partitioning loop. Its two recovered
partition boundary words, `local_8` and `local_4`, have **different roles**.
The left recursion calls `FUN_x(first, local_8, depth, [fourth])`. The right
recursion calls `FUN_x(local_4, last, depth, [fourth])`. The enclosing loop
then updates the opposite bound. Ghidra emitted only one argument in each
recursive call, causing a host Clang C11 error.

| Entry | Original body bytes | Stack DWORDs on self-call | Left-call VA | Right-call VA |
| --- | ---: | ---: | --- | --- |
| `0x0004E150` | 257 | 3 | `0x0004E1C7` | `0x0004E1D9` |
| `0x00050980` | 257 | 3 | `0x000509F7` | `0x00050A09` |
| `0x000E2850` | 274 | 4 | `0x000E28CF` | `0x000E28E3` |
| `0x000E2970` | 274 | 4 | `0x000E29EF` | `0x000E2A03` |
| `0x000E2A90` | 274 | 4 | `0x000E2B0F` | `0x000E2B23` |
| `0x0016DD10` | 274 | 4 | `0x0016DD8F` | `0x0016DDA3` |
| `0x0017D660` | 274 | 4 | `0x0017D6DF` | `0x0017D6F3` |
| `0x001E98F0` | 274 | 4 | `0x001E996F` | `0x001E9983` |
| `0x00250720` | 274 | 4 | `0x0025079F` | `0x002507B3` |
| `0x00250840` | 274 | 4 | `0x002508BF` | `0x002508D3` |
| `0x002876A0` | 257 | 3 | `0x00287717` | `0x00287729` |

The eight 274-byte functions read **entry ESP+0x10** into EBP and push
EBP to pass the fourth word recursively. The first/second/third words come
from the appropriate partition bound and reduced recursion depth. The other
three functions pass exactly three stack DWORDs. The binary's relative
`CALL` encodings target each function's original entry.

## Evidence reproduction

With the user's local XBE (never commit it):

```text
python3 tools/verify_recursive_x86_calls.py --xbe path/to/default.xbe
```

That verifier checks XBE identity, eleven original body digests, selected
argument-setup instructions and all 22 original recursive destinations.
It is source-artifact evidence, **not** a runtime proof or evidence that the
original optimizer's arithmetic, exceptions, or callbacks match host C.

## Cross-function and native-PC boundaries

The source uses explicit C parameters to permit isolated syntax checks.
Native Xbox x86 stack layout, incoming-call linkage from other functions,
original comparator/callback hidden registers, and exceptions remain
`ABI_UNVERIFIED`. Each original function signature must be checked at all
external callers before linking the group, especially after adding the
fourth parameter in the eight 274-byte functions.

Do not infer a standard template name or gameplay semantics from this
mechanical similarity, or mark the native game as buildable because the
isolated source parses. No executable, game assets or complete disassembly
is included here.
