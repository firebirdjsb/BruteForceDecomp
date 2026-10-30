/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E6E9BEF3B0C19FDE46077A9E8624C32DC2B2AFF4BCE92398B09A19270F0E1539
 * Entry: 0x00238960, Ghidra index: 7881, label: FUN_00238960
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_00238960(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *unaff_EBX;
  
  while (param_2 != param_3) {
    puVar1 = (undefined4 *)param_2[1];
    puVar2 = (undefined4 *)*param_2;
    if (puVar1 == (undefined4 *)0x0) {
      *unaff_EBX = puVar2;
    }
    else {
      *puVar1 = puVar2;
    }
    if (puVar2 == (undefined4 *)0x0) {
      unaff_EBX[1] = puVar1;
    }
    else {
      puVar2[1] = puVar1;
    }
    param_2[1] = 0;
    *param_2 = 0;
    FUN_00238300();
    param_2 = puVar2;
  }
  *param_1 = param_2;
  return param_1;
}
