/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4FB802BDB9C3D75915F5E5B63450A5E54A1E6ADF189A81AD9A5702029ED4F1B4
 * Entry: 0x0026da30, Ghidra index: 8773, label: FUN_0026da30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003bb310;
extern uint32_t *DAT_00443640;
extern uint32_t DAT_00469888;
void FUN_0026da30(void)

{
  undefined4 uVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int iVar2;
  int iVar3;
  float10 fVar4;
  
  if (DAT_003bb310 != -1) {
    if (*(int *)(DAT_00469888 + 0x14) < 1) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(DAT_00469888 + 0x10) + 1;
    }
    if ((((*(int *)(DAT_00469888 + 0x14) < 2) ||
         (iVar2 = *(int *)(DAT_00469888 + 0x10) + 2, iVar2 == 0)) ||
        (*(int *)(*(int *)(DAT_00469888 + 4) + -0x10 + iVar2 * 0x10) != -6)) &&
       ((iVar3 == 0 || (*(int *)(*(int *)(DAT_00469888 + 4) + -0x10 + iVar3 * 0x10) != -6)))) {
      iVar3 = FUN_002899a0();
      if (iVar3 != 0) {
        iVar3 = *DAT_00443640;
        fVar4 = (float10)FUN_002899f0();
        uVar1 = FUN_00289a40(extraout_ECX,(float)fVar4);
        (**(code **)(iVar3 + 0x78))(DAT_00443640,DAT_003bb310,uVar1);
        return;
      }
      iVar3 = FUN_002899d0();
      if (iVar3 != 0) {
        iVar3 = *DAT_00443640;
        uVar1 = FUN_00289a40();
        uVar1 = FUN_00289a40(extraout_ECX_00,uVar1);
        (**(code **)(iVar3 + 0x88))(DAT_00443640,DAT_003bb310,uVar1);
      }
    }
  }
  return;
}
