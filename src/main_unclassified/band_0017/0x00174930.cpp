/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D2DC581231EA7A53F6FE06EE8F0E5B7CC23488F1153D18366AD64C73977769C8
 * Entry: 0x00174930, Ghidra index: 4916, label: FUN_00174930
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00174930(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int in_EAX;
  int iVar4;
  int iVar5;
  uint uVar6;
  int unaff_EBX;
  int iVar7;
  int iVar8;
  
  if (*(char *)(in_EAX + 0xa4) != '\0') {
    FUN_00174b30(in_EAX,(undefined1 *)(in_EAX + 0xa4));
    *(undefined1 *)(in_EAX + 0xa4) = 0;
  }
  iVar7 = *(int *)(in_EAX + 0x84) * param_1;
  *(int *)(in_EAX + 0x88) = *(int *)(in_EAX + 0x88) + param_1;
  if (*(char *)(in_EAX + 0x7c) != '\0') {
    (**(code **)(**(int **)(in_EAX + 0x74) + 0x68))(*(int **)(in_EAX + 0x74),0);
    return;
  }
  if (*(int *)(in_EAX + 0x80) != 0) {
    (**(code **)(**(int **)(in_EAX + 0x74) + 0x68))
              (*(int **)(in_EAX + 0x74),*(int *)(in_EAX + 0x80));
    *(undefined4 *)(in_EAX + 0x80) = 0;
  }
  iVar4 = (**(code **)(**(int **)(in_EAX + 0x74) + 0x54))(*(int **)(in_EAX + 0x74));
  if (iVar4 == 4) {
    FUN_00174bd0();
  }
  else {
    (**(code **)(**(int **)(in_EAX + 0x74) + 0x68))(*(int **)(in_EAX + 0x74),iVar7);
  }
  if (*(int *)(in_EAX + 0x98) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(in_EAX + 0x9c) - *(int *)(in_EAX + 0x98) >> 4;
  }
  if (-1 < iVar4 + -1) {
    iVar8 = (iVar4 + -1) * 0x10;
    iVar5 = iVar4;
    do {
      iVar1 = *(int *)(in_EAX + 0x98);
      iVar2 = *(int *)(iVar8 + 4 + iVar1);
      uVar6 = *(int *)(iVar8 + 8 + iVar1) + iVar7;
      *(uint *)(iVar8 + 8 + iVar1) = uVar6;
      if (*(uint *)(iVar2 + 0x18) < uVar6) {
        (**(code **)(**(int **)(iVar8 + iVar1) + 0x10))(*(int **)(iVar8 + iVar1),iVar2);
        iVar7 = *(int *)(in_EAX + 0x98) + iVar8;
        FUN_00176700(iVar7 + 0x10,*(undefined4 *)(in_EAX + 0x9c),iVar7,iVar4);
        *(int *)(in_EAX + 0x9c) = *(int *)(in_EAX + 0x9c) + -0x10;
        iVar7 = unaff_EBX;
      }
      else {
        puVar3 = *(undefined4 **)(iVar8 + 0xc + iVar1);
        if (puVar3 != (undefined4 *)0x0) {
          (**(code **)*puVar3)(iVar2);
        }
      }
      iVar8 = iVar8 + -0x10;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return;
}
