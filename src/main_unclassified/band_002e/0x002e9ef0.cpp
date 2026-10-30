/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 13630EE5357B55F4FBD889156CAA7F1345211CFFE1B80E1A8AAEB348800A478C
 * Entry: 0x002e9ef0, Ghidra index: 10568, label: FUN_002e9ef0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002e9ef0(int param_1,uint param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  int *in_ECX;
  int iVar2;
  
  if (*in_ECX != 0) {
    if ((code *)in_ECX[8] != (code *)0x0) {
      (*(code *)in_ECX[8])(*in_ECX,in_ECX[5] * in_ECX[4] + -1 + in_ECX[2]);
    }
    *in_ECX = 0;
    in_ECX[1] = 0;
    in_ECX[4] = 0;
  }
  iVar2 = (~(param_5 - 1U) & param_3 - 1U) + param_5;
  in_ECX[5] = iVar2;
  in_ECX[4] = param_4;
  in_ECX[2] = param_5;
  if (((uint)(iVar2 * param_4 + -1 + param_5) <= param_2) && (*in_ECX = param_1, param_1 != 0)) {
    uVar1 = 0;
    in_ECX[3] = param_4;
    in_ECX[1] = (~(param_5 - 1U) & param_1 - 1U) + param_5;
    in_ECX[6] = 0;
    if (param_4 != 1) {
      do {
        iVar2 = in_ECX[5] * uVar1;
        uVar1 = uVar1 + 1;
        *(uint *)(iVar2 + in_ECX[1]) = uVar1;
      } while (uVar1 < in_ECX[4] - 1U);
    }
    return 0;
  }
  return 0x8007000e;
}
