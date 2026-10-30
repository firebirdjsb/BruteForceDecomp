/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 41F7C887D1998F2C40A38B848574DF10823317FE4864F5D3C06E463DC169CF33
 * Entry: 0x00055070, Ghidra index: 804, label: FUN_00055070
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern bool FUN_00012620(int32_t in_ECX);
extern undefined4 FUN_00055aa0(void);
extern int FUN_0005bca0(void);
extern undefined4 FUN_00022e20(void);
extern undefined4 FUN_00126a90(void);

char FUN_00055070(int param_1)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  
  iVar6 = (**(code **)(**(int **)(param_1 + 8) + 0xf4))();
  if (*(char *)(param_1 + 0xd) != '\0') {
    return '\0';
  }
  if (*(float *)(param_1 + 0x14) < 10.0) {
    return '\0';
  }
  if (*(float *)(iVar6 + 0x1a4) < 10.0) {
    return '\0';
  }
  cVar5 = FUN_00012620();
  if (cVar5 == '\0') {
    return '\0';
  }
  cVar5 = FUN_00012620();
  if (((cVar5 == '\0') && (*(int *)(iVar6 + 0x42c) != 0)) &&
     (iVar7 = FUN_00055aa0(), *(int *)(iVar7 + 0x5c) == 4)) {
    return '\0';
  }
  piVar1 = *(int **)(iVar6 + 0x9b8);
  if (piVar1 != (int *)0x0) {
    iVar7 = (**(code **)(**(int **)(param_1 + 8) + 0x40))();
    iVar8 = (**(code **)(*piVar1 + 0x40))();
    fVar2 = *(float *)(iVar8 + 0x2c) - *(float *)(iVar7 + 0x2c);
    fVar3 = *(float *)(iVar8 + 0x28) - *(float *)(iVar7 + 0x28);
    fVar4 = *(float *)(iVar8 + 0x24) - *(float *)(iVar7 + 0x24);
    if (fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2 < 784.0) {
      return '\0';
    }
  }
  piVar1 = *(int **)(param_1 + 8);
  if (((piVar1[0x167] != 0) && (piVar9 = (int *)FUN_0005bca0(), piVar9 != (int *)0x0)) &&
     ((piVar9 != piVar1 &&
      (((*(byte *)(piVar9 + 0x1c) & 1) == 0 &&
       (iVar7 = (**(code **)(*piVar9 + 0xf4))(), *(char *)(*(int *)(iVar7 + 0x794) + 0xd) == '\0')))
      ))) {
    return '\0';
  }
  if ((*(int *)(iVar6 + 0x58) != 7) &&
     ((*(byte *)(*(int *)(*(int *)(param_1 + 8) + 8) + 0xc50) & 0x10) == 0)) {
    if (*(int *)(iVar6 + 0x42c) != 0) {
      FUN_00055aa0();
      cVar5 = FUN_00022e20();
      if (cVar5 != '\0') goto LAB_000551a2;
    }
    cVar5 = FUN_00126a90();
    return '\x01' - (cVar5 != '\0');
  }
LAB_000551a2:
  *(undefined4 *)(param_1 + 0x14) = 0;
  return '\0';
}
