/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EF19F052BC82BF1FD0A6B8F2AFF67917E1BEB4458C45ABB3800E406D3D51639D
 * Entry: 0x00386286, Ghidra index: 13693, label: FUN_00386286
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00386286(void)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  int in_EDX;
  int iVar4;
  
  iVar2 = *(int *)(in_EDX + 0x10);
  uVar3 = FUN_00385d83();
  *(undefined2 *)(in_EDX + 0x20) = uVar3;
  KeRaiseIrqlToDpcLevel();
  *(char *)(iVar2 + 0x26) = *(char *)(iVar2 + 0x26) + '\x01';
  *(undefined4 *)(in_EDX + 0x24) = 0;
  *(undefined2 *)(in_EDX + 0x22) = 2;
  cVar1 = *(char *)(iVar2 + 0x11);
  if (cVar1 == '\0') {
    iVar4 = FUN_0038624a();
LAB_003862ee:
    if (-1 < iVar4) goto LAB_003862fc;
  }
  else {
    if (cVar1 == '\x02') {
      iVar4 = FUN_0038620e();
      goto LAB_003862ee;
    }
    if (cVar1 == '\x03') {
      iVar4 = FUN_003861db(in_EDX);
      goto LAB_003862ee;
    }
    iVar4 = -0x7ffffa00;
  }
  *(undefined2 *)(in_EDX + 0x22) = 0;
  *(char *)(iVar2 + 0x26) = *(char *)(iVar2 + 0x26) + -1;
LAB_003862fc:
  KfLowerIrql();
  return iVar4;
}
