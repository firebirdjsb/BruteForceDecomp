/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0EBD84DC9F4F0AA7D5EF2AC4805D865CECB24469C6740CE0624E7BDA08608006
 * Entry: 0x00343fb0, Ghidra index: 12731, label: FUN_00343fb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4
FUN_00343fb0(int param_1,int param_2,undefined4 *param_3,int param_4,int param_5,int param_6)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  if ((param_2 == 0) || (param_3 == (undefined4 *)0x0)) {
    return 0xfffffc0f;
  }
  *param_3 = 0;
  piVar3 = *(int **)(param_1 + 8);
  *(int **)(param_1 + 8) = piVar3 + 0xf;
  if (*(int **)(param_1 + 4) < piVar3 + 0xf) {
    *(int **)(param_1 + 8) = piVar3;
    piVar3 = (int *)0x0;
  }
  if (piVar3 == (int *)0x0) {
    return 0xfffffc12;
  }
  piVar4 = piVar3;
  for (iVar2 = 0xf; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar4 = 0;
    piVar4 = piVar4 + 1;
  }
  piVar3[7] = 0;
  *piVar3 = param_1;
  piVar3[1] = 0x44434e45;
  piVar3[0xc] = *(int *)(param_2 + 8);
  piVar3[3] = param_2;
  if ((param_4 != 0) && (param_5 != 0)) {
    piVar3[0xc] = piVar3[0xc] | 8;
    piVar3[4] = param_4;
    piVar3[9] = param_4;
    piVar3[5] = param_5;
  }
  if (param_6 == 0) {
    piVar3[0xd] = (int)piVar3;
    uVar1 = *(uint *)(param_2 + 4);
  }
  else {
    piVar3[0xd] = param_6;
    uVar1 = *(uint *)(param_6 + 0x2c);
  }
  piVar3[0xb] = uVar1;
  if ((*(byte *)(piVar3 + 0xc) & 8) == 0) {
    if (param_6 == 0) goto LAB_0034406a;
    if (((uVar1 & 3) == 0) && ((uVar1 & 0x700) == 0)) {
      return 0xfffffc0b;
    }
    iVar2 = FUN_003437b3(piVar3,1);
    if (iVar2 == 0) {
      return 0xfffffc12;
    }
    *(undefined1 *)piVar3[4] = 0;
  }
  if (param_6 != 0) {
    *(int **)(param_6 + 0x38) = piVar3;
  }
LAB_0034406a:
  *param_3 = piVar3;
  return 0;
}
