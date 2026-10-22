/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 89E41DCE3347AD5943F5A5A037381492122BDD1C0091BDBFB3B1D6670FF89F0A
 * Entry: 0x001838e0, Ghidra index: 5206, label: FUN_001838e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_001838e0(void)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  int in_EAX;
  int iVar4;
  undefined4 *unaff_EBX;
  uint uVar5;
  int unaff_EDI;
  int local_18;
  uint local_14;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_10 = 0;
  local_8 = 0;
  local_4 = 0;
  uVar5 = *(int *)(in_EAX + 0x98) - *(int *)(in_EAX + 0x9c);
  local_18 = unaff_EDI * 0x4800 + *(int *)(in_EAX + 0x78);
  local_14 = 0x4800;
  if (uVar5 < 0x4800) {
    local_14 = uVar5 + 0x7ff & 0xfffff800;
    *(uint *)(in_EAX + (unaff_EDI * 3 + 0x21) * 4) = uVar5;
  }
  iVar1 = in_EAX + unaff_EDI * 0xc;
  local_c = iVar1 + 0x7c;
  *(undefined4 *)(iVar1 + 0x80) = 0;
  iVar4 = (**(code **)(**(int **)(in_EAX + 0x70) + 0x10))(*(int **)(in_EAX + 0x70),0,&local_18);
  iVar3 = unaff_EDI * 3 + 0x21;
  puVar2 = (uint *)(in_EAX + iVar3 * 4);
  *(int *)(in_EAX + 0x9c) = *(int *)(in_EAX + 0x9c) + *(int *)(in_EAX + iVar3 * 4);
  if (uVar5 == *puVar2) {
    if (*(char *)(in_EAX + 0xa9) == '\0') {
      *(int *)(in_EAX + 0xa0) = unaff_EDI;
      *(undefined1 *)(in_EAX + 0xaa) = 0;
      (**(code **)(**(int **)(in_EAX + 0x70) + 0x14))(*(int **)(in_EAX + 0x70));
    }
    else {
      *(undefined4 *)(in_EAX + 0x9c) = 0;
      (**(code **)(**(int **)(in_EAX + 0x70) + 0x1c))
                (*(int **)(in_EAX + 0x70),*(undefined4 *)(in_EAX + 0x94),0,0);
    }
  }
  if ((iVar4 < 0) && (iVar4 != -0x7ffffff6)) {
    *(undefined4 *)(iVar1 + 0x80) = 1;
    *unaff_EBX = 0;
    *puVar2 = 0x4800;
  }
  return CONCAT31((int3)((uint)puVar2 >> 8),1);
}
