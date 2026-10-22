/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A2BFD2D48CE312479E071C2F68650AEC3FBD861CB1F3EFE81458253263FA2261
 * Entry: 0x00330066, Ghidra index: 12357, label: FUN_00330066
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
bool FUN_00330066(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  int *piVar4;
  int local_c;
  
  if (*(int *)(in_ECX + 0x654) != 0) {
    FUN_00330c53(*(int *)(in_ECX + 0x654));
  }
  if (*(int *)(in_ECX + 0x660) != 0) {
    FUN_00330c53(*(int *)(in_ECX + 0x660));
  }
  if (*(int *)(in_ECX + 0xbd8) != 0) {
    FUN_00330c53(*(int *)(in_ECX + 0xbd8));
  }
  iVar2 = *(int *)(in_ECX + 0x15c0);
  if (iVar2 != 0) {
    FUN_00330c53(iVar2);
  }
  iVar3 = *(int *)(in_ECX + 0x15c8);
  if (iVar3 != 0) {
    FUN_00330c53(iVar3);
  }
  bVar1 = iVar3 == 0 && iVar2 == 0;
  if ((*(int *)(in_ECX + 0x15fc) != 0) &&
     (iVar2 = *(int *)(*(int *)(in_ECX + 0x15fc) + 0x14d0), iVar2 != 0)) {
    FUN_00330c53(iVar2);
    bVar1 = false;
  }
  if (*(int *)(in_ECX + 0x12c4) != 0) {
    iVar2 = *(int *)(*(int *)(in_ECX + 0x12c4) + 0x14c);
    if (*(int *)(in_ECX + 0x12c8) == 0) {
      if (iVar2 != 0) {
        FUN_00330c53(iVar2);
        bVar1 = false;
      }
      iVar2 = *(int *)(*(int *)(in_ECX + 0x12c4) + 0x158);
    }
    if (iVar2 != 0) {
      FUN_00330c53(iVar2);
      bVar1 = false;
    }
  }
  piVar4 = (int *)(in_ECX + 0x15cc);
  local_c = 0xc;
  do {
    if (*piVar4 != 0) {
      iVar2 = FUN_0033c53d(*piVar4);
      if (((iVar2 < 0) && (iVar2 = FUN_0033bb6f(*piVar4), iVar2 != 0)) &&
         (iVar3 = FUN_0033d39c(*piVar4,iVar2), -1 < iVar3)) {
        do {
          iVar3 = FUN_00330c3e(iVar2);
        } while (iVar3 == 0);
      }
      *piVar4 = 0;
    }
    piVar4 = piVar4 + 1;
    local_c = local_c + -1;
  } while (local_c != 0);
  return bVar1;
}
