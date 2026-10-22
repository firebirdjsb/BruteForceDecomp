/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5F6F69C1E0C5F26D9FFA024653B7E69FF10778F44C561F1938D11099A1C81E68
 * Entry: 0x002f0cf0, Ghidra index: 10759, label: FUN_002f0cf0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002f0cf0(ushort *param_1,byte *param_2,int param_3)

{
  if ((param_2 != (byte *)0x0) && (param_3 != 0)) {
    if (*param_2 != 0) {
      if (param_1 != (ushort *)0x0) {
        *param_1 = (ushort)*param_2;
      }
      return 1;
    }
    if (param_1 != (ushort *)0x0) {
      *param_1 = 0;
    }
  }
  return 0;
}
