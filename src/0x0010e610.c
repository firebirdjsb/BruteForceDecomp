/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AA773D12414428FCD79D42CBA79C5D1D0169FFEAB4E48CF0D5D2205833842B55
 * Entry: 0x0010e610, Ghidra index: 3514, label: FUN_0010e610
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469940;
void FUN_0010e610(void)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int in_ECX;
  
  if ((*(int *)(in_ECX + 8) != 0) && ((*(byte *)(in_ECX + 0x1c) & 0x20) != 0)) {
    iVar3 = (**(code **)(**(int **)(*(int *)(*(int *)(in_ECX + 0x18) + 8) + 0xbec) + 0xc))
                      (*(int *)(in_ECX + 0x18));
    if ((iVar3 == 0) ||
       ((*(int *)(iVar3 + 0x24) == 0 || ((*(byte *)(*(int *)(iVar3 + 0x24) + 0x14) & 2) == 0)))) {
      bVar1 = 0;
    }
    else {
      bVar1 = 1;
    }
    if ((*(byte *)(in_ECX + 0x1c) >> 1 & 1) != bVar1) {
      FUN_0010e750();
    }
  }
  iVar3 = (**(code **)(**(int **)(*(int *)(*(int *)(in_ECX + 0x18) + 8) + 0xbec) + 0xc))
                    (*(int *)(in_ECX + 0x18));
  if ((((iVar3 == 0) || (*(int *)(iVar3 + 0x24) == 0)) ||
      ((*(byte *)(*(int *)(iVar3 + 0x24) + 0x14) & 2) == 0)) &&
     ((*(byte *)(in_ECX + 0x1c) & 0x10) == 0)) {
    FUN_0010e750();
    return;
  }
  if (*(int *)(in_ECX + 8) != 0) {
    cVar2 = (**(code **)(*DAT_00469940 + 0x2c))(*(int *)(in_ECX + 8));
    if (cVar2 == '\0') {
      (**(code **)(*DAT_00469940 + 0x20))(*(undefined4 *)(in_ECX + 8),1);
      *(undefined4 *)(in_ECX + 8) = 0;
      *(byte *)(in_ECX + 0x1c) = *(byte *)(in_ECX + 0x1c) & 0xdf | 2;
    }
  }
  if (*(int *)(in_ECX + 8) == 0) {
    cVar2 = FUN_0010e7a0(in_ECX,100,*(byte *)(in_ECX + 0x1c) >> 4 & 1);
    *(byte *)(in_ECX + 0x1c) =
         *(byte *)(in_ECX + 0x1c) ^ (cVar2 << 5 ^ *(byte *)(in_ECX + 0x1c)) & 0x20;
    iVar3 = (**(code **)(**(int **)(*(int *)(*(int *)(in_ECX + 0x18) + 8) + 0xbec) + 0xc))
                      (*(int *)(in_ECX + 0x18));
    if (((iVar3 != 0) && (*(int *)(iVar3 + 0x24) != 0)) &&
       ((*(byte *)(*(int *)(iVar3 + 0x24) + 0x14) & 2) != 0)) {
      *(byte *)(in_ECX + 0x1c) = *(byte *)(in_ECX + 0x1c) & 0xfd | 0x22;
      return;
    }
    *(byte *)(in_ECX + 0x1c) = *(byte *)(in_ECX + 0x1c) & 0xfd | 0x20;
  }
  return;
}
