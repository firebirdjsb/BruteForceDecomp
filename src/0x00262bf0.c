/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 79B1C6D4A0D8C586092F2AC3DF26FD441CC01A2C7529F9D0133D1F06FC9561B0
 * Entry: 0x00262bf0, Ghidra index: 8663, label: FUN_00262bf0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00262bf0(int param_1,uint param_2)

{
  if (*(int *)(param_1 + 0x1c) != 0) {
    if (param_2 < (uint)((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c)) / 0x14)) {
      return *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x10 + param_2 * 0x14);
    }
  }
  return 0;
}
