/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9A346A7BF4F96E8DEA382090BD28745C7BD37F5F3457F7FBBA36C70AAE1881B1
 * Entry: 0x001cd420, Ghidra index: 5972, label: FUN_001cd420
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001cd420(undefined4 *param_1)

{
  undefined4 *unaff_EBX;
  
  *unaff_EBX = *param_1;
  unaff_EBX[1] = param_1[1];
  unaff_EBX[2] = param_1[2];
  unaff_EBX[3] = param_1[3];
  unaff_EBX[4] = param_1[4];
  FUN_000fdba0();
  FUN_0010bc40();
  unaff_EBX[10] = param_1[10];
  unaff_EBX[0xb] = param_1[0xb];
  unaff_EBX[0xc] = param_1[0xc];
  unaff_EBX[0xd] = param_1[0xd];
  unaff_EBX[0xe] = param_1[0xe];
  unaff_EBX[0xf] = param_1[0xf];
  FUN_00248d00();
  return;
}
