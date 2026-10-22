/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A97E76625FA4152A9E3863056D72DD3A30BB92559BE7EC7A5ECE3E7906B96077
 * Entry: 0x0013fbf0, Ghidra index: 4067, label: FUN_0013fbf0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046cfd8;
undefined4 FUN_0013fbf0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  int in_EAX;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 **ppuVar8;
  undefined4 uVar9;
  uint *puVar10;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined1 local_20 [4];
  int local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined1 local_10 [4];
  int local_c;
  uint *local_8;
  undefined4 local_4;
  
  iVar1 = *(int *)(in_EAX + 0x10);
  local_c = 0;
  local_8 = (uint *)0x0;
  local_4 = 0;
  FUN_001407a0(local_20);
  iVar5 = FUN_001367e0(iVar1,param_1,local_20,local_10);
  if (iVar5 != 0) {
    puVar10 = (uint *)(local_c + 4);
    while (puVar10 + -1 != local_8) {
      uVar2 = puVar10[3];
      if ((*(byte *)(param_2 + 0x18) & 1) == 0) {
        puVar3 = *(undefined4 **)(*(int *)(uVar2 + 0xc) + 0x1fc);
        local_28 = puVar3;
        if (*(char *)((int)puVar3[1] + 0x15) == '\0') {
          puVar6 = (undefined4 *)puVar3[1];
          do {
            if ((uint)puVar6[3] < *puVar10) {
              puVar7 = (undefined4 *)puVar6[2];
            }
            else {
              puVar7 = (undefined4 *)*puVar6;
              local_28 = puVar6;
            }
            puVar6 = puVar7;
          } while (*(char *)((int)puVar7 + 0x15) == '\0');
        }
        if ((local_28 == puVar3) || (*puVar10 < (uint)local_28[3])) {
          local_24 = puVar3;
          ppuVar8 = &local_24;
        }
        else {
          ppuVar8 = &local_28;
        }
        if ((*ppuVar8 != *(undefined4 **)(*(int *)(uVar2 + 0xc) + 0x1fc)) &&
           (iVar5 = (*ppuVar8)[4], iVar5 != 0)) {
          iVar4 = *(int *)(*(int *)(iVar1 + 8) + 0xbe8);
          if ((*(int *)(iVar4 + 4) == 0) ||
             (*(int *)(*(int *)(iVar4 + 4) + 8) < *(int *)(iVar5 + 8))) {
            DAT_0046cfd8 = DAT_0046cfd8 * 0x19660d + 0x3c6ef35f;
            if (DAT_0046cfd8 % 100 <= *(uint *)(iVar5 + 4)) {
              FUN_001400d0(param_1,iVar5,uVar2,~(byte)puVar10[1] & 1,iVar1);
              uVar9 = FUN_001409e0(iVar4);
              *(undefined4 *)(param_1 + 8) = uVar9;
              *(undefined4 *)(iVar4 + 8) = 0;
              if (*(undefined4 **)(iVar4 + 4) != (undefined4 *)0x0) {
                (**(code **)**(undefined4 **)(iVar4 + 4))(1);
                *(undefined4 *)(iVar4 + 4) = 0;
              }
            }
          }
        }
        puVar10 = puVar10 + 5;
      }
      else {
        FUN_00140a60(*(undefined4 *)(*(int *)(uVar2 + 8) + 0xbe8),uVar2,*puVar10,0);
        puVar10 = puVar10 + 5;
      }
    }
  }
  iVar1 = local_c;
  if (local_1c != 0) {
    FUN_0001d590(local_20,param_1);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(local_1c);
  }
  local_1c = 0;
  local_18 = 0;
  uStack_14 = 0;
  if (local_c != 0) {
    FUN_00139bf0(local_10,param_1);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(iVar1);
  }
  return 1;
}
