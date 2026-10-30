/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8D002D6743A86CD507383AB1E5752F5D17C785536A9E395FA2BF39652F97E13E
 * Entry: 0x001367e0, Ghidra index: 3892, label: FUN_001367e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00414da0;
extern uint32_t DAT_0046cfd8;
int FUN_001367e0(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  int unaff_EDI;
  undefined4 uStack_14;
  undefined4 uStack_10;
  byte bStack_c;
  undefined4 uStack_8;
  uint uStack_4;
  
  if (*(int *)(param_4 + 4) != 0) {
    FUN_00139bf0(param_4,param_3);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(param_4 + 4));
  }
  *(undefined4 *)(param_4 + 4) = 0;
  *(undefined4 *)(param_4 + 8) = 0;
  *(undefined4 *)(param_4 + 0xc) = 0;
  iVar2 = FUN_00136750();
  iVar3 = (**(code **)(iVar2 + 8))(param_1,param_2,*(undefined4 *)(unaff_EDI + 0x10),param_3);
  if (iVar3 != 0) {
    if (*(char *)(iVar2 + 4) != '\0') {
      if (*(int *)(param_3 + 4) != *(int *)(param_3 + 8)) {
        FUN_001397b0(*(int *)(param_3 + 4),*(int *)(param_3 + 8),0);
      }
    }
    iVar2 = *(int *)(param_3 + 4);
    bVar1 = false;
    while ((iVar2 != *(int *)(param_3 + 8) && (!bVar1))) {
      uVar5 = *(uint *)(iVar2 + 4);
      DAT_0046cfd8 = DAT_0046cfd8 * 0x19660d + 0x3c6ef35f;
      if (*(int *)(unaff_EDI + 0x20) == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(int *)(unaff_EDI + 0x24) - *(int *)(unaff_EDI + 0x20) >> 4;
      }
      puVar4 = *(undefined4 **)(unaff_EDI + 0x20);
      if (0 < (int)(DAT_0046cfd8 % uVar6)) {
        puVar4 = puVar4 + (DAT_0046cfd8 % uVar6) * 4;
      }
      uStack_14 = *puVar4;
      uStack_10 = puVar4[3];
      uStack_4 = 0;
      if ((uVar5 != 0) && (uStack_4 = uVar5, (uVar5 & 1) == 0)) {
        uVar5 = uVar5 * 0x19660d + 0x3c6ef35f >> 0x15;
        uStack_8 = *(undefined4 *)(&DAT_00414da0 + uVar5 * 4);
        *(undefined4 **)(&DAT_00414da0 + uVar5 * 4) = &uStack_8;
      }
      bStack_c = bStack_c ^ ((byte)(*(uint *)(unaff_EDI + 0x14) >> 1) ^ bStack_c) & 1;
      FUN_00137b00(&uStack_14);
      if ((*(byte *)(unaff_EDI + 0x14) & 1) == 0) {
        bVar1 = true;
      }
      if (uStack_4 != 0) {
        FUN_0008f6e0();
      }
      iVar2 = iVar2 + 8;
    }
  }
  if (*(int *)(param_4 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_4 + 8) - *(int *)(param_4 + 4)) / 0x14;
}
