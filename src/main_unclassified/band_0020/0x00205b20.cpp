/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 97BBE6698E50CE4F9FD810D15E030E08CFA226506E453D59C6074DAAE83FE3B5
 * Entry: 0x00205b20, Ghidra index: 7292, label: FUN_00205b20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00205b20(float param_1)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  undefined3 extraout_var;
  undefined4 uVar5;
  undefined3 uVar7;
  uint uVar6;
  undefined3 extraout_var_00;
  int in_ECX;
  undefined4 uVar8;
  undefined4 *extraout_ECX;
  undefined4 *extraout_EDX;
  undefined4 *extraout_EDX_00;
  undefined4 *puVar9;
  
  FUN_001fe610(param_1);
  uVar7 = extraout_var;
  if ((*(byte *)(in_ECX + 0x3d) & 1) == 0) goto LAB_00205c33;
  uVar5 = FUN_001fe660();
  uVar7 = (undefined3)((uint)uVar5 >> 8);
  if (*(char *)(in_ECX + 0x98) == '\0') goto LAB_00205c33;
  fVar2 = *(float *)(in_ECX + 0x48) - *(float *)(in_ECX + 0x4c);
  fVar3 = fVar2;
  if ((0.0 < *(float *)(in_ECX + 0x50)) &&
     (fVar3 = ABS(fVar2) / *(float *)(in_ECX + 0x50), fVar2 < 0.0)) {
    fVar3 = -fVar3;
  }
  uVar6 = *(uint *)(in_ECX + 0x60);
  if (2 < *(int *)(in_ECX + 0xa0)) {
    uVar6 = (uint)(uVar6 == 0);
  }
  if (uVar6 == 0) {
    cVar4 = FUN_00205ac0(fVar3 * param_1,*(undefined4 *)(in_ECX + 0x48));
    if (cVar4 != '\0') {
      uVar8 = *(undefined4 *)(in_ECX + 0x48);
      uVar5 = *(undefined4 *)(in_ECX + 0x4c);
      puVar9 = extraout_EDX;
LAB_00205be7:
      uVar1 = *(undefined4 *)(in_ECX + 0xa0);
      *puVar9 = uVar8;
      switch(uVar1) {
      case 0:
      case 3:
        *(undefined1 *)(in_ECX + 0x98) = 0;
        break;
      case 1:
      case 4:
        *puVar9 = uVar5;
        break;
      case 2:
      case 5:
        *(uint *)(in_ECX + 0x60) = (uint)(*(int *)(in_ECX + 0x60) == 0);
      }
    }
  }
  else if ((uVar6 == 1) &&
          (cVar4 = FUN_00205ac0(-(fVar3 * param_1),*(undefined4 *)(in_ECX + 0x4c)), cVar4 != '\0'))
  {
    uVar8 = *(undefined4 *)(in_ECX + 0x4c);
    uVar5 = *(undefined4 *)(in_ECX + 0x48);
    puVar9 = extraout_EDX_00;
    goto LAB_00205be7;
  }
  FUN_00205a70(*(undefined4 *)(in_ECX + 0x4c),*(undefined4 *)(in_ECX + 0x48));
  FUN_00205350(in_ECX,*extraout_ECX);
  uVar7 = extraout_var_00;
LAB_00205c33:
  return CONCAT31(uVar7,1);
}
