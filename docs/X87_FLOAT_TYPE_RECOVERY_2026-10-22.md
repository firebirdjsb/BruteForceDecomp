# Two original x87 float/pointer type-recovery corrections

Source XBE: `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.

## 0x0002AC80

Original Ghidra body SHA-256: `FA07D314D697CD0FFC2DD5EDA0EEC495DC389F9D37472AD0F5B6D59A41380BDC`.

In the branch around `0x0002AD14–0x0002AD66`, original x86 `fld`/`fchs`/`fstp` stores negated **single-precision float values** in the output vector. The Ghidra C draft erroneously assigned `-fStack_10` to `int *local_18` and converted that pointer back to float. This assignment was dead in its branch (which immediately returns); the source now assigns `param_1[1] = -fStack_10` directly. The unrelated use of `local_18` as a pointer in the other branch remains untouched.

## 0x000481C0

Original Ghidra body SHA-256: `4F69772B2BDDEF2C00D2E5EA9F4105F162791975405E02C92E352DB96EFAA693`.

At `0x000481FD–0x0004820F`, x86 stores raw bits `0x3F800000` (float 1.0) or `0x3F933333` (float approx 1.15) to a temporary float slot; at `0x00048256/0x00048265` it loads that slot into the x87 stack. The non-default branch multiplies it by a float constant at `0x0039A848`, independently read from the original XBE as `0x40400000` (3.0). The C draft incorrectly represented that float slot as a `float *` pointer. The repair preserves the exact float bits via `memcpy`, then promotes to the existing `float10` result type. No speculative struct or gameplay names were introduced.

**Validation**: both revised functions passed host Clang `-std=c11 -fsyntax-only` using the repository's documented compatibility-warning allowances. The original instruction effects were separately inspected. These changes do not validate incoming register-based ABI, dynamic dispatch targets, pointer ownership, game runtime behavior, or byte-identical compilation.
