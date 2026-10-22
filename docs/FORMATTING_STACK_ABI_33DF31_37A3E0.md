# Two stack-ABI formatting wrappers (2026-10-22)

Original source identity: Brute Force retail original Xbox `default.xbe`, SHA-256 `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`. Function body SHA-256 values are embedded in each corresponding C file and match original file-backed x86 bytes.

## `0x0033DF31` — bounded format forwarding

Machine code uses a conventional EBP frame with three fixed stack arguments `[ebp+8]`, `[ebp+0xc]`, `[ebp+0x10]`. The instruction `lea eax,[ebp+0x14]` passes the **address of the first variadic argument** to `0x002EB322`. `ret` (not `ret N`) indicates caller-cleans-stack. If output capacity is zero, it returns -1 without formatting. Otherwise it returns the callee's integer result except when that result equals the capacity, in which case it returns -1. The format argument and output buffer types follow the observed uses in `FUN_002eb322`; API-wide naming and full callee implementation still require review.

## `0x0037A3E0` — format to 260-byte buffer, then debug output

Entry `[esp+4]` supplies a formatting string; `lea eax,[esp+0x10c]` after reserving 0x104 bytes addresses the first variadic argument. The function calls `FUN_002EB322(buffer,0x104,format,argument_list)`, then calls `DbgPrint(buffer)` (recognized at `0x002FE1C0`). Preserving the single-argument `DbgPrint` call is intentional: rewriting to `DbgPrint("%s",buffer)` would silently change original behavior.

## Validation performed

- Independent file-backed original-byte hashes: both functions verified against the original XBE.
- Host strict Clang C11: `-std=c11 -pedantic-errors -Wall -Wextra -Werror -fsyntax-only`: both passed.
- Windows i386 Clang target with those same strict warnings: both passed.
- Linked and executed host C11 unit test with **mocked** `FUN_002EB322` and `DbgPrint`: passed.
- **Not verified:** Xbox XDK calling convention/library symbol linkage, full `FUN_002EB322` / `FUN_002EDBDE` behavior, DbgPrint implementation, original-game runtime equivalence, cross-function struct identity or byte-for-byte recompilation.
- This changes two of the 309 historical `stack0x` pseudovariable cases, without claiming that all remaining cases are equivalent.
- The header `include/bf_format_x86.h` is **analysis-oriented**; `FUN_002EB322` currently has an older Ghidra-derived C draft in the repository. Global type consistency must be validated before linking the whole tree.

### Reproduce independent C test

```sh
clang -std=c11 -Wall -Wextra -Werror -Iinclude src/0x0033df31.c src/0x0037a3e0.c tests/test_format_stack_abi.c -o /tmp/bf_format_test
/tmp/bf_format_test
clang -target i386-pc-windows-msvc -std=c11 -pedantic-errors -Wall -Wextra -Werror -Iinclude -fsyntax-only src/0x0033df31.c src/0x0037a3e0.c
```

No linked real Xbox dependencies were involved in the test.
