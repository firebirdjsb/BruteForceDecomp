/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1CDE34EBEAB4801B2AFAAA982BE7B5D3CC4EF9B95BF27348C0AAFD01333C298D
 * Entry: 0x00055c00, Ghidra index: 822, label: FUN_00055c00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_00055da0(int *param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5);

extern uint32_t DAT_004a5908;
void FUN_00055c00(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int unaff_EDI;
  int iVar5;
  uint local_10;
  int local_c;
  uint local_8;
  
  uVar4 = *(uint *)(unaff_EDI + 0xc);
  local_8 = *(int *)(unaff_EDI + 0x10) + uVar4;
  if (uVar4 != local_8) {
    uVar3 = *(uint *)(unaff_EDI + 8);
    local_8 = local_8 - 1;
    uVar2 = local_8;
    if (uVar3 <= local_8) {
      uVar2 = local_8 - uVar3;
    }
    if (*(uint *)(unaff_EDI + 8) <= uVar4) {
      uVar4 = uVar4 - *(uint *)(unaff_EDI + 8);
    }
    iVar1 = *(int *)(unaff_EDI + 4);
    iVar5 = unaff_EDI;
    if (*(int *)(iVar1 + uVar2 * 4) == *(int *)(iVar1 + uVar4 * 4)) goto LAB_00055c70;
    uVar4 = local_8;
    if (uVar3 <= local_8) {
      uVar4 = local_8 - uVar3;
    }
    iVar1 = *(int *)(iVar1 + uVar4 * 4);
    if (((*(uint *)(iVar1 + 0x88) & 0x6000) == 0) &&
       ((*(byte *)(&DAT_004a5908 + *(int *)(iVar1 + 0x5c)) & 0x20) == 0)) {
      do {
        local_8 = local_8 - 1;
LAB_00055c70:
        while( true ) {
          uVar4 = *(uint *)(iVar5 + 8);
          uVar3 = local_8;
          if (uVar4 <= local_8) {
            uVar3 = local_8 - uVar4;
          }
          uVar2 = *(uint *)(unaff_EDI + 0xc);
          if (*(uint *)(unaff_EDI + 8) <= uVar2) {
            uVar2 = uVar2 - *(uint *)(unaff_EDI + 8);
          }
          if (*(int *)(*(int *)(iVar5 + 4) + uVar3 * 4) ==
              *(int *)(*(int *)(unaff_EDI + 4) + uVar2 * 4)) {
            return;
          }
          uVar3 = local_8;
          if (uVar4 <= local_8) {
            uVar3 = local_8 - uVar4;
          }
          iVar1 = *(int *)(*(int *)(iVar5 + 4) + uVar3 * 4);
          if ((*(uint *)(iVar1 + 0x88) & 0x6000) != 0) {
            return;
          }
          if ((*(byte *)(&DAT_004a5908 + *(int *)(iVar1 + 0x5c)) & 0x20) != 0) {
            return;
          }
          if ((iVar1 != -0x1c) && (*(int *)(iVar1 + 0x20) == 3)) break;
          FUN_00055da0(&local_10,local_8,iVar5,local_8 + 1,iVar5);
          uVar4 = local_10;
          if (*(uint *)(local_c + 8) <= local_10) {
            uVar4 = local_10 - *(uint *)(local_c + 8);
          }
          uVar3 = *(uint *)(unaff_EDI + 0xc);
          if (*(uint *)(unaff_EDI + 8) <= uVar3) {
            uVar3 = uVar3 - *(uint *)(unaff_EDI + 8);
          }
          local_8 = local_10;
          iVar5 = local_c;
          if (*(int *)(*(int *)(local_c + 4) + uVar4 * 4) !=
              *(int *)(*(int *)(unaff_EDI + 4) + uVar3 * 4)) {
            local_8 = local_10 - 1;
          }
        }
      } while( true );
    }
  }
  return;
}
