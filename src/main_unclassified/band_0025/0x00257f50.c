/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 605DB7C2E940C5FE5F168A8308400D25F5868F518DBC45B6FA4113E14BBA3815
 * Entry: 0x00257f50, Ghidra index: 8464, label: FUN_00257f50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00257f50(int param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint unaff_EBX;
  
  piVar2 = param_2;
  iVar4 = param_1;
  if (*(char *)(param_1 + 0x20) == '\0') {
    iVar3 = FUN_00257b50();
    if (iVar3 < 0) {
      return 0x80004005;
    }
    iVar3 = FUN_00257a70();
    if (iVar3 < 0) {
      return 0x80004005;
    }
  }
  (**(code **)(*piVar2 + 0xc))(piVar2,&param_1);
  if ((unaff_EBX & 0x81) == 0) {
    *(undefined4 *)(iVar4 + 0x2898) = 0xb000;
  }
  else {
    iVar3 = FUN_00258480(0);
    if (iVar3 < 0) {
      return 0x80004005;
    }
  }
  piVar1 = *(int **)(iVar4 + 8);
  if ((piVar1 != (int *)0x0) &&
     (iVar4 = (**(code **)(*piVar1 + 0x2c))(piVar1,piVar2,param_1), iVar4 < 0)) {
    return 0x80004005;
  }
  return 0;
}
