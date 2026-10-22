/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DB864EFF5625282C4106C5232542395250BAE75BC9E4F1469E03223B926E4E90
 * Entry: 0x00331457, Ghidra index: 12394, label: FUN_00331457
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* These addresses have matching definitions in current recovered C drafts.
 * Indirect-call ABI and 32-bit pointer storage remain ABI_UNVERIFIED. */
extern undefined4 FUN_0033136c(int param_1);
extern void FUN_00331425(int param_1);
undefined4 FUN_00331457(int param_1,undefined4 param_2,undefined4 *param_3)

{
  uint uVar1;
  int in_ECX;
  int iVar2;
  uint *puVar3;
  undefined4 *puVar4;
  
  puVar4 = param_3;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  iVar2 = param_1 * 0x44 + 0x580 + in_ECX;
  FUN_00330c2d(param_3);
  *param_3 = FUN_0033136c;
  param_3[1] = FUN_00331425;
  param_3[4] = iVar2;
  param_3[3] = 0;
  puVar3 = (uint *)(iVar2 + 0x18);
  while( true ) {
    uVar1 = *puVar3;
    if (uVar1 == 0) {
      *puVar3 = 1;
      uVar1 = 0;
    }
    if (uVar1 == 0) break;
    if (uVar1 == 1) {
      param_3[3] = 0;
      return 0;
    }
    if (uVar1 == 2) {
      if (*puVar3 == 2) {
        *puVar3 = 0;
      }
    }
    else {
      if (uVar1 != 3) {
        if ((3 < uVar1) && (uVar1 < 6)) {
          param_3[3] = 0x1500f0;
        }
        return 0;
      }
      if (*puVar3 == 3) {
        *puVar3 = 0;
      }
    }
  }
  param_3[2] = param_2;
  iVar2 = FUN_00345032(param_1 * 0x44 + 0x580 + in_ECX,param_2,param_3 + 5);
  if ((iVar2 == 0) && (param_3[5] != 0)) {
    param_3[3] = 0;
    return 0;
  }
  *puVar3 = 3;
  param_3[5] = 0;
  param_3[3] = 0x80151903;
  return 0x80151903;
}
