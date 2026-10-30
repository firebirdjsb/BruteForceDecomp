/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4C5618CA7C0CDBCD111CE05FE36855BA7EA06DE966C86C995E2BFE487CB99252
 * Entry: 0x0022d8e0, Ghidra index: 7710, label: FUN_0022d8e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined1 FUN_0022d8e0(int param_1)

{
  int iVar1;
  char cVar2;
  int in_EAX;
  undefined1 uVar3;
  undefined4 local_4;
  
  iVar1 = param_1;
  uVar3 = 0;
  if (*(int *)(in_EAX + 0x358) != 0) {
    cVar2 = FUN_0022d970();
    if (cVar2 == '\0') {
      return 0;
    }
  }
  if (iVar1 != 0) {
    param_1 = 0x6fa1cbf;
    local_4 = 0x1987486c;
    cVar2 = FUN_00159fb0(&local_4,&param_1);
    if (cVar2 != '\0') {
      if (*(int *)(in_EAX + 0x358) != iVar1) {
        FUN_0008f6a0(iVar1);
      }
      *(undefined4 *)(in_EAX + 0x1f8) = *(undefined4 *)(in_EAX + 0x1e8);
      uVar3 = 1;
    }
  }
  *(undefined4 *)(in_EAX + 0x1e8) = 0;
  return uVar3;
}
