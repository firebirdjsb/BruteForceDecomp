/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 47BEAC35B7DCC53717EF03D1209A94782591ECA34CDDDBF827C980363ECB4127
 * Entry: 0x001092e0, Ghidra index: 3401, label: FUN_001092e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046cfd8;
/* WARNING: Type propagation algorithm not settling */

undefined1 FUN_001092e0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined1 local_15;
  int local_14 [5];
  
  iVar1 = *(int *)(param_1 + 0xbf0);
  iVar3 = 0;
  iVar4 = 0;
  local_15 = 0;
  local_14[2] = 0;
  local_14[3] = 0;
  local_14[4] = 0;
  local_14[0] = FUN_000735f0();
  if (local_14[0] != 0) {
    do {
      if (*(int *)(*(int *)(local_14[0] + 0xc) + 8) == -0x11c4f274) {
        if ((iVar3 == 0) || ((uint)(local_14[4] - iVar3 >> 2) <= (uint)(iVar4 - iVar3 >> 2))) {
          FUN_000a7d80(iVar4,local_14);
          iVar3 = local_14[2];
          iVar4 = local_14[3];
        }
        else {
          FUN_0003efa0(iVar4,1,local_14 + 1,param_1);
          local_14[3] = iVar4 + 4;
          iVar4 = local_14[3];
        }
      }
      if (*(int *)(iVar1 + 4) != *(int *)(iVar1 + 0xc)) {
        do {
          local_14[0] = (*(int **)(iVar1 + 4))[2];
          if (*(int *)(local_14[0] + 0x54) == 0) {
            *(undefined4 *)(iVar1 + 4) = **(undefined4 **)(iVar1 + 4);
            goto LAB_001093b4;
          }
          iVar2 = **(int **)(iVar1 + 4);
          *(int *)(iVar1 + 4) = iVar2;
        } while (iVar2 != *(int *)(iVar1 + 0xc));
      }
      local_14[0] = 0;
LAB_001093b4:
    } while (local_14[0] != 0);
    if ((iVar3 != 0) && (uVar5 = iVar4 - iVar3 >> 2, uVar5 != 0)) {
      DAT_0046cfd8 = DAT_0046cfd8 * 0x19660d + 0x3c6ef35f;
      iVar4 = *(int *)(iVar3 + (DAT_0046cfd8 % uVar5) * 4);
      if (iVar4 != 0) {
        if (*(int *)(iVar1 + 0x8c) != iVar4) {
          FUN_0008f6a0(iVar4);
        }
        *(undefined1 *)(iVar1 + 200) = 1;
      }
      local_15 = 1;
    }
  }
  FUN_00073460(0);
  local_14[1] = 0;
  local_14[2] = 0;
  local_14[3] = 0;
  FUN_00069780(0x3f800000);
  if (iVar3 == 0) {
    return local_15;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(iVar3);
}
