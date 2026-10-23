/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4EF6E325960EFBD6C996793589A0027A263A196A88AA313B338FD6F48E825147
 * Entry: 0x0005b260, Ghidra index: 918, label: FUN_0005b260
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_0005b260(void)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint in_EAX;
  int iVar5;
  undefined4 *unaff_ESI;
  
  piVar1 = *(int **)(in_EAX + 8);
  if ((piVar1 == (int *)0x0) || (*(int *)(piVar1[3] + 4) != 3)) {
    return in_EAX & 0xffffff00;
  }
  iVar5 = piVar1[0xfa];
  if ((iVar5 != 0) && (iVar5 != -1)) {
    uVar2 = *(undefined4 *)(iVar5 + 0x40);
    uVar3 = *(undefined4 *)(iVar5 + 0x3c);
    uVar4 = *(undefined4 *)(iVar5 + 0x38);
    *unaff_ESI = uVar4;
    unaff_ESI[1] = uVar3;
    unaff_ESI[2] = uVar2;
    return CONCAT31((int3)((uint)uVar4 >> 8),1);
  }
  iVar5 = (**(code **)(*piVar1 + 0x40))();
  uVar2 = *(undefined4 *)(iVar5 + 0x2c);
  uVar3 = *(undefined4 *)(iVar5 + 0x28);
  uVar4 = *(undefined4 *)(iVar5 + 0x24);
  *unaff_ESI = uVar4;
  unaff_ESI[1] = uVar3;
  unaff_ESI[2] = uVar2;
  return CONCAT31((int3)((uint)uVar4 >> 8),1);
}
