/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7FFA1FA1F28FCD3224C1C98BD43B984CD5B9F77A1F6E9E7934ECEF8D64BCD639
 * Entry: 0x00179ec0, Ghidra index: 4998, label: FUN_00179ec0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469940;
extern uint32_t DAT_00469984;
extern uint32_t DAT_0046d100;
void FUN_00179ec0(int param_1,float param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  float local_4;
  
  bVar1 = *(byte *)(param_1 + 4);
  if ((bVar1 & 2) == 0) {
    if (*(int *)(param_1 + 0x34) != 0) {
      (**(code **)(*DAT_00469940 + 0x20))(*(int *)(param_1 + 0x34),1);
      *(undefined4 *)(param_1 + 0x34) = 0;
    }
    *(undefined4 *)(param_1 + 0x40) = 0;
    puVar2 = *(undefined4 **)(param_1 + 0x2c);
    if (puVar2 == (undefined4 *)0x0) {
      FUN_001298b0(&local_4,0,0);
      return;
    }
    FUN_001298b0(&local_4,*puVar2,puVar2);
  }
  else {
    if (((bVar1 & 8) != 0) && ((bVar1 & 4) == 0)) {
      *(float *)(param_1 + 0x40) = *(float *)(param_1 + 0x40) - param_2;
      local_4 = *(float *)(param_1 + 0x40);
      if (*(float *)(param_1 + 0x40) <= 0.0) {
        local_4 = 0.0;
      }
      *(float *)(param_1 + 0x40) = local_4;
    }
    if (*(int *)(param_1 + 0x34) != 0) {
      cVar3 = (**(code **)(*DAT_00469940 + 0x2c))(*(int *)(param_1 + 0x34));
      if ((cVar3 == '\0') || (*(float *)(param_1 + 0x40) <= 0.0)) {
        (**(code **)(*DAT_00469940 + 0x20))(*(undefined4 *)(param_1 + 0x34),1);
        *(undefined4 *)(param_1 + 0x34) = 0;
      }
    }
    if (((*(byte *)(param_1 + 4) & 8) != 0) && (*(float *)(param_1 + 0x40) <= 0.0)) {
      *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) & 0xf7;
    }
    if (((*(byte *)(param_1 + 4) & 0xc) == 0) && (*(int *)(param_1 + 0x30) != 0)) {
      if (*(int **)(param_1 + 0x2c) == (int *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = **(int **)(param_1 + 0x2c);
      }
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(iVar4 + 8);
      *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(iVar4 + 0xc);
      *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(iVar4 + 0x10);
      *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(iVar4 + 0x14);
      if (*(undefined4 **)(param_1 + 0x2c) == (undefined4 *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = **(undefined4 **)(param_1 + 0x2c);
      }
      FUN_002183f0(uVar5);
      local_4 = *(float *)(param_1 + 0x38);
      if ((local_4 != 0.0) && (0.0 < *(float *)(param_1 + 0x40))) {
        uVar5 = FUN_0017c170(DAT_00469984);
        *(undefined4 *)(param_1 + 0x34) = uVar5;
        if (*(int *)(param_1 + 0x34) != 0) {
          local_4 = *(float *)(param_1 + 0x38);
          FUN_0017c110(&DAT_0046d100,0);
        }
        if ((*(byte *)(param_1 + 0x44) & 1) != 0) {
          local_4 = *(float *)(param_1 + 0x38);
          FUN_00141100(*(undefined4 *)(param_1 + 0x40));
        }
        *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) | 8;
        return;
      }
      *(undefined4 *)(param_1 + 0x40) = 0;
      return;
    }
  }
  return;
}
