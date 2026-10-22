/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AB09B57834E451E81661138903201C1AE1CDEB059E976A34642EBE4C5CB07300
 * Entry: 0x00359140, Ghidra index: 13165, label: FUN_00359140
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004b1690;
undefined4 FUN_00359140(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = 0;
  uVar3 = 0;
  if (param_1 != 0) {
    bVar1 = false;
    local_4 = 0;
    if (*(int *)(param_1 + 0x2f8) != 0) {
      iVar4 = 0;
      do {
        if (*(int *)(iVar4 + 0x18 + *(int *)(param_1 + 0x300)) != 0) {
          if (!bVar1) {
            bVar1 = true;
            FUN_0035ada0(DAT_004b1690,param_1 + 0x34c);
          }
          iVar2 = *(int *)(param_1 + 0x300) + iVar4;
          iVar2 = (**(code **)(iVar2 + 0x18))(iVar2,param_2 != 0);
          if (iVar2 == 0) {
            if (*(int *)(param_1 + 0x2a0) != 0) {
              *(undefined4 *)(iVar4 + *(int *)(param_1 + 0x300) + 0x34) =
                   *(undefined4 *)(iVar4 + 0x2c + *(int *)(param_1 + 0x300));
              *(undefined4 *)(iVar4 + *(int *)(param_1 + 0x300) + 0x38) =
                   *(undefined4 *)(iVar4 + 0x2c + *(int *)(param_1 + 0x300));
              *(undefined4 *)(iVar4 + 0x40 + *(int *)(param_1 + 0x300)) = 0;
              if ((*(int *)(param_1 + 0xc) != 1) || (*(int *)(param_1 + 0x2ec) == 1)) {
                FUN_00356e70();
              }
              *(undefined4 *)(param_1 + 0x2a0) = 0;
            }
          }
          else {
            local_8 = 1;
            if (*(int *)(param_1 + 0x2a0) == 0) {
              *(undefined4 *)(param_1 + 0x2a0) = 1;
              *(undefined4 *)(param_1 + 0x280) = 0;
              *(undefined4 *)(param_1 + 0x338) = 0;
            }
          }
        }
        local_4 = local_4 + 1;
        iVar4 = iVar4 + 0x178;
      } while (local_4 < *(uint *)(param_1 + 0x2f8));
      uVar3 = local_8;
      if (bVar1) {
        FUN_0035ae30(DAT_004b1690,param_1 + 0x34c);
      }
    }
  }
  return uVar3;
}
