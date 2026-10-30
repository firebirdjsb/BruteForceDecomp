/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 496355F5CE0890ECE273C4F5C2217B62468BF2EBD7E9D6EDC2B3AF16632A848C
 * Entry: 0x003572e0, Ghidra index: 13154, label: FUN_003572e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_003572e0(uint param_1,uint param_2,int *param_3,undefined4 *param_4)

{
  uint uVar1;
  int iVar2;
  int *unaff_EBX;
  int iVar3;
  int *piVar4;
  undefined4 local_8;
  
  uVar1 = 0;
  iVar3 = 0;
  iVar2 = 0;
  local_8 = 1;
  if (0 < (int)(param_1 - param_2)) {
    piVar4 = unaff_EBX + param_2;
    do {
      if (uVar1 < (uint)(*piVar4 - unaff_EBX[iVar2])) {
        uVar1 = *piVar4 - unaff_EBX[iVar2];
        iVar3 = iVar2;
      }
      iVar2 = iVar2 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar2 < (int)(param_1 - param_2));
    if (uVar1 != 0) goto LAB_0035733d;
  }
  uVar1 = (uint)(((ulonglong)(uint)(unaff_EBX[param_1] - *unaff_EBX) * (ulonglong)param_2) /
                (ulonglong)param_1);
LAB_0035733d:
  iVar2 = 0;
  if (0 < (int)param_1) {
    do {
      if ((*(byte *)(unaff_EBX + iVar2) & 1) == 0) {
        local_8 = 0;
        break;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)param_1);
  }
  *param_4 = local_8;
  *param_3 = iVar3;
  return uVar1;
}
