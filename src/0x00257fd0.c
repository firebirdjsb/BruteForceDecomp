/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8F1CA21A95E5B87CB898A718C00AC41056C762710EBCAB6D9C0C5E239B686543
 * Entry: 0x00257fd0, Ghidra index: 8465, label: FUN_00257fd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00257fd0(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  uint unaff_ESI;
  uint uVar6;
  
  piVar3 = param_2;
  iVar2 = param_1;
  piVar1 = *(int **)(param_1 + 8);
  if (piVar1 != (int *)0x0) {
    iVar4 = (**(code **)(*piVar1 + 0x30))(piVar1,param_2);
    if (iVar4 < 0) {
      return 0x80004005;
    }
  }
  uVar5 = 0;
  (**(code **)(*piVar3 + 0xc))(piVar3,&param_1);
  if ((unaff_ESI & 0x81) == 0) {
    uVar6 = *(uint *)(iVar2 + 0x2898);
    if (uVar6 == 0xd000) goto LAB_0025802e;
    uVar6 = uVar6 & 0xffff;
  }
  else {
    uVar6 = 0xc000;
  }
  uVar5 = FUN_00258480(uVar6);
LAB_0025802e:
  *(undefined4 *)(iVar2 + 0x2898) = 0xb000;
  return uVar5;
}
