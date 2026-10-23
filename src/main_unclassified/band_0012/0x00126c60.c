/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4B2A688856774E0D76AE8B569B314B8D63C7B846812BD3ED05131353E4875A37
 * Entry: 0x00126c60, Ghidra index: 3727, label: FUN_00126c60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004698d0;
byte FUN_00126c60(char param_1)

{
  char cVar1;
  int in_EAX;
  int iVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  int unaff_retaddr;
  undefined1 auStack_14 [16];
  undefined1 auStack_4 [4];
  
  iVar2 = *(int *)(*(int *)(in_EAX + 8) + 0xbf0);
  bVar5 = 1;
  if (((*(char *)(iVar2 + 0x84) == '\0') && (*(int *)(iVar2 + 0x8c) != 0)) ||
     ((iVar2 = (**(code **)(**(int **)(*(int *)(in_EAX + 8) + 0xbec) + 0xc))(), iVar2 != 0 &&
      ((*(int *)(iVar2 + 0x24) != 0 && ((*(byte *)(*(int *)(iVar2 + 0x24) + 0x14) & 2) != 0)))))) {
    return 1;
  }
  uVar3 = DAT_004698d0 - *(int *)(in_EAX + 0x74c);
  uVar4 = (int)uVar3 >> 0x1f;
  if ((int)((uVar3 ^ uVar4) - uVar4) <= unaff_retaddr) {
    return *(byte *)(in_EAX + 0x748) >> 4 & 1;
  }
  if ((param_1 == '\0') && (cVar1 = FUN_00022bc0(&param_1), cVar1 != '\0')) {
    *(byte *)(in_EAX + 0x748) = *(byte *)(in_EAX + 0x748) & 0xef;
    iVar2 = (**(code **)(**(int **)(*(int *)(in_EAX + 8) + 0xbec) + 0x10))(&stack0x00000000);
    while (iVar2 != 0) {
      iVar2 = FUN_0008b790();
      if (iVar2 != 0) {
        (**(code **)(*(int *)(iVar2 + 0x48) + 0x14))();
        FUN_000621c0();
        iVar2 = (**(code **)(*(int *)(iVar2 + 0x48) + 0x50))(auStack_14,unaff_retaddr);
        if (2 < iVar2) {
          *(byte *)(in_EAX + 0x748) = *(byte *)(in_EAX + 0x748) | 0x10;
          break;
        }
      }
      iVar2 = (**(code **)(**(int **)(*(int *)(in_EAX + 8) + 0xbec) + 0x14))(auStack_4);
    }
    bVar5 = *(byte *)(in_EAX + 0x748) >> 4 & 1;
    *(int *)(in_EAX + 0x74c) = DAT_004698d0;
  }
  return bVar5;
}
