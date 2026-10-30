/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4955E34A9B4040D5A546CDC1A214A0C21C8AE18CBF5C044A79F76CC4F3005A2C
 * Entry: 0x00232060, Ghidra index: 7759, label: FUN_00232060
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046d064;
void FUN_00232060(uint param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *local_c;
  
  iVar4 = param_1;
  iVar1 = *(int *)(param_1 + 0x228);
  if ((*(int *)(iVar1 + 300) != DAT_0046d064) &&
     (piVar5 = (int *)FUN_00160da0(0xffffffff,1), piVar5 != (int *)0x0)) {
    iVar2 = piVar5[0x33];
    local_c = (int *)(param_1 + 0x36c);
    piVar5[0x33] = *(int *)(iVar1 + 0xd4);
    for (param_1 = 0;
        (*(int *)(iVar1 + 0x140) != 0 &&
        (param_1 < (uint)(*(int *)(iVar1 + 0x144) - *(int *)(iVar1 + 0x140) >> 2)));
        param_1 = param_1 + 1) {
      uVar3 = *(undefined4 *)(iVar4 + 8);
      iVar6 = (**(code **)(*piVar5 + 8))(uVar3);
      if (iVar6 != 0) {
        FUN_000da880(uVar3,iVar6,1);
        FUN_000da8f0(uVar3);
      }
      if (*local_c != iVar6) {
        FUN_0008f6a0(iVar6);
      }
      if ((int *)*local_c != (int *)0x0) {
        (**(code **)(*(int *)*local_c + 0xdc))
                  (iVar4,*(int *)(*(int *)(iVar4 + 0x228) + 0x140) + param_1 * 4);
      }
      local_c = local_c + 2;
    }
    piVar5[0x33] = iVar2;
  }
  return;
}
