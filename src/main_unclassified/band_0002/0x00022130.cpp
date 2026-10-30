/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4AFA7A26DC76AE71C0496335B220D47683DF18D5FFFDBFE2E85D15D276560D21
 * Entry: 0x00022130, Ghidra index: 194, label: FUN_00022130
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00022130(int param_1,undefined4 param_2,undefined1 *param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  float *pfVar9;
  
  bVar5 = false;
  if (*(int *)(param_1 + 0x6f4) != 0) {
    *(undefined4 *)(param_1 + 0x6ac) = 7;
    *param_3 = 1;
    return 1;
  }
  iVar1 = param_1 + 0x930;
  if ((*(int *)(param_1 + 0x934) == 0) ||
     ((*(int *)(param_1 + 0x938) - *(int *)(param_1 + 0x934)) / 0x18 == 0)) {
    bVar5 = true;
  }
  iVar7 = FUN_00020ad0();
  if (*(float *)(param_3 + 4) < *(float *)(param_3 + 0xc) !=
      (*(float *)(param_3 + 4) == *(float *)(param_3 + 0xc))) {
    *(undefined4 *)(param_1 + 0x8a0) = 0x3f800000;
    *(undefined1 *)(param_1 + 0x89d) = 0;
  }
  if (bVar5) {
LAB_000222dd:
    FUN_0011dfa0();
    FUN_000120f0();
    FUN_0011dfa0();
    cVar6 = FUN_000416a0(iVar1,0);
    if (cVar6 == '\0') goto LAB_000223a4;
    FUN_00025730(iVar1,1,1);
  }
  else if (*(float *)(param_3 + 4) < *(float *)(param_3 + 0x10) ==
           (*(float *)(param_3 + 4) == *(float *)(param_3 + 0x10))) {
    cVar6 = FUN_00012620();
    if (cVar6 == '\0') {
      iVar8 = (**(code **)(**(int **)(param_3 + 0x2c) + 0x40))();
      iVar7 = *(int *)(*(int *)(param_1 + 0x938) + -4);
      if (iVar7 == 0) {
        pfVar9 = (float *)(*(int *)(param_1 + 0x938) + -0x14);
      }
      else {
        pfVar9 = (float *)(**(code **)(*(int *)(iVar7 + 8) + 4))();
      }
      fVar2 = pfVar9[2] - *(float *)(iVar8 + 0x2c);
      fVar3 = pfVar9[1] - *(float *)(iVar8 + 0x28);
      fVar4 = *pfVar9 - *(float *)(iVar8 + 0x24);
      if (*(float *)(param_3 + 0x14) * *(float *)(param_3 + 0x14) <
          fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2) goto LAB_000222dd;
    }
  }
  else if (iVar7 < 3) {
    if ((*(int *)(param_1 + 0x738) != 0) && (cVar6 = FUN_00112800(), cVar6 != '\0')) {
      *(uint *)(param_1 + 0x6ac) = (-(uint)(*(int *)(param_1 + 0x58) != 1) & 0xfffffffd) + 4;
      *param_3 = 1;
      return 1;
    }
    *(uint *)(param_1 + 0x6ac) = (uint)(*(int *)(param_1 + 0x58) == 1) * 2 + 2;
    FUN_0004e8f0();
    *param_3 = 1;
    return 1;
  }
  if (*(int *)(param_1 + 0x934) == 0) {
    return 1;
  }
  if ((*(int *)(param_1 + 0x938) - *(int *)(param_1 + 0x934)) / 0x18 == 0) {
    return 1;
  }
  cVar6 = FUN_00026d80(param_1,iVar1,param_1 + 0x478,0,0x40000000);
  FUN_000255d0(param_2,0);
  FUN_0004d970(param_1,param_2,4,1,0);
  if (cVar6 != '\0') {
    return 1;
  }
  FUN_0004e8f0();
  if (*(float *)(param_3 + 0x18) <= *(float *)(param_3 + 4)) {
    return 1;
  }
LAB_000223a4:
  *(undefined4 *)(param_1 + 0x6ac) = 2;
  return 1;
}
