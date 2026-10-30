/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6EDB0611041870F273F27C506815A63A6A93E1AC795BAA66DBA48A21560E40BF
 * Entry: 0x000e44b0, Ghidra index: 2845, label: FUN_000e44b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Allocator guest32 return/one-DWORD interface is recorded;
 * this caller size and guest memory/stack ABI remain unverified. */
#include "bf_002ea01d_allocator_guest32.h"
undefined4 * FUN_000e44b0(void)

{
  int *piVar1;
  int iVar2;
  int in_EAX;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  
  if (*(int *)(in_EAX + 0x48) == 0) {
    puVar3 = (undefined4 *)FUN_002ea01d(0x20);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3[5] = 0;
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[6] = 0;
      puVar3[7] = 0;
    }
  }
  else {
    iVar6 = *(int *)(in_EAX + 0x44);
    uVar4 = (int)(iVar6 + (iVar6 >> 0x1f & 3U)) >> 2;
    iVar2 = uVar4 * -4;
    if (*(uint *)(in_EAX + 0x40) <= uVar4) {
      uVar4 = uVar4 - *(uint *)(in_EAX + 0x40);
    }
    puVar3 = *(undefined4 **)(*(int *)(*(int *)(in_EAX + 0x3c) + uVar4 * 4) + (iVar6 + iVar2) * 4);
    if (*(int *)(in_EAX + 0x48) != 0) {
      uVar4 = *(int *)(in_EAX + 0x44) + 1;
      *(uint *)(in_EAX + 0x44) = uVar4;
      if ((uint)(*(int *)(in_EAX + 0x40) << 2) <= uVar4) {
        *(undefined4 *)(in_EAX + 0x44) = 0;
      }
      iVar6 = *(int *)(in_EAX + 0x48) + -1;
      *(int *)(in_EAX + 0x48) = iVar6;
      if (iVar6 == 0) {
        *(undefined4 *)(in_EAX + 0x44) = 0;
      }
    }
  }
  iVar6 = *(int *)(in_EAX + 100) + 1;
  piVar1 = (int *)(in_EAX + 0x68);
  *(int *)(in_EAX + 100) = iVar6;
  piVar5 = (int *)(in_EAX + 100);
  if (iVar6 <= *piVar1) {
    piVar5 = piVar1;
  }
  *piVar1 = *piVar5;
  puVar7 = puVar3;
  for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  return puVar3;
}
