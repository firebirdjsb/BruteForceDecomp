/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3DC1B5C71013E336CEAAB1669E5B300F143249B4A936CC75B38EC922E371DD0F
 * Entry: 0x0007fe70, Ghidra index: 1511, label: FUN_0007fe70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0007fe70(void)

{
  undefined4 *puVar1;
  char cVar2;
  byte *in_EAX;
  int *in_ECX;
  int iVar3;
  int iVar4;
  int iStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  int local_10 [4];
  
  iVar3 = 0;
  local_10[1] = 0;
  local_10[2] = 0;
  local_10[3] = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  (**(code **)(*in_ECX + 0xf4))(local_10,&local_20);
  if (local_14 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = local_10[0] - local_14 >> 2;
  }
  if (0 < iVar4) {
    do {
      puVar1 = (undefined4 *)(local_14 + iVar3 * 4);
      cVar2 = FUN_0007fe20(puVar1);
      if (cVar2 == '\0') {
        *(undefined4 *)(in_EAX + 0x10) = *puVar1;
        *in_EAX = *in_EAX | 4;
        (**(code **)(*in_ECX + 0x134))((int)(in_EAX + (-0x20 - (int)in_ECX)) / 0xa8 + 1);
        break;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar4);
  }
  if (iStack_24 != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(iStack_24);
  }
  local_20 = 0;
  local_1c = 0;
  if (local_14 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(local_14);
}
