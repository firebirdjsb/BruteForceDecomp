/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B8BF49345888D96C9D87FDC8B50A9C21435B9A44DA8D98D2266B92E63AD30685
 * Entry: 0x002fe931, Ghidra index: 11036, label: FUN_002fe931
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002fe931(ushort *param_1)

{
  ushort uVar1;
  
  uVar1 = *param_1;
  while (uVar1 != 0) {
    uVar1 = *param_1;
    if ((0x60 < uVar1) && (uVar1 < 0x7b)) {
      *param_1 = uVar1 - 0x20;
    }
    param_1 = param_1 + 1;
    uVar1 = *param_1;
  }
  return;
}
