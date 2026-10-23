/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0A175264BEDB74C451319A5885357382009DFAB57653F5181E1489C678DD1E35
 * Entry: 0x003734a0, Ghidra index: 13406, label: FUN_003734a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00300580;
extern uint32_t DAT_0037df30;
extern uint32_t DAT_0037dfbc;
extern uint32_t DAT_0037dfd0;
extern uint32_t DAT_0037ec88;
extern uint32_t DAT_004004c0;
void FUN_003734a0(uint *param_1)

{
  int in_EAX;
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *piVar6;
  int *local_118;
  undefined4 *local_114;
  undefined1 local_110 [64];
  int local_d0 [16];
  undefined1 local_90 [64];
  undefined1 local_50 [76];
  
  if (((-1 < in_EAX) && ((*(byte *)(param_1[0xdf] + 4) & 0x12) == 0)) &&
     ((param_1[0x536] & 0xffffffef) != 1)) {
    uVar1 = *param_1;
    if (param_1[1] <= uVar1) {
      uVar1 = D3D8LTCG__D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
    }
    FUN_00375a20(local_110,param_1 + 0x264,param_1 + 0x204);
    FUN_00372200();
    puVar3 = (undefined4 *)(uVar1 + 0x44);
    if ((param_1[0x145] != 0) || (DAT_0037df30 != 0)) {
      FUN_00375b20(DAT_0037dfd0 == 0);
      *puVar3 = &DAT_00300580;
      piVar5 = local_d0;
      piVar6 = (int *)(uVar1 + 0x48);
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar6 = *piVar5;
        piVar5 = piVar5 + 1;
        piVar6 = piVar6 + 1;
      }
      puVar3 = (undefined4 *)(uVar1 + 0x78);
    }
    if (DAT_0037dfbc == 0) {
      FUN_00375a20(local_50,local_110,param_1 + 0x14c);
      FUN_00372200();
      *param_1 = (uint)(puVar3 + 0x11);
      return;
    }
    FUN_00372200();
    puVar3 = puVar3 + 0x11;
    *param_1 = (uint)puVar3;
    if ((undefined4 *)param_1[1] <= puVar3) {
      puVar3 = (undefined4 *)D3D8LTCG__D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
    }
    local_118 = puVar3 + 1;
    local_114 = &DAT_004004c0;
    do {
      FUN_00375a20(local_90,(int)param_1 + (int)(local_114 + -0xffebc),param_1 + 0x204);
      FUN_00372200();
      puVar4 = puVar3 + 0x11;
      if ((param_1[0x145] != 0) || (piVar5 = local_118 + 0x11, DAT_0037df30 != 0)) {
        FUN_00375b20(DAT_0037dfd0 == 0);
        *puVar4 = local_114 + -0x3ffc0;
        puVar4 = puVar3 + 0x1e;
        piVar5 = local_d0;
        piVar6 = local_118 + 0x11;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          *piVar6 = *piVar5;
          piVar5 = piVar5 + 1;
          piVar6 = piVar6 + 1;
        }
        piVar5 = local_118 + 0x1e;
      }
      local_118 = piVar5;
      local_114 = local_114 + 0x10;
      puVar3 = puVar4;
    } while (local_114 < (undefined4 *)0x400580);
    *param_1 = (uint)puVar4;
  }
  return;
}
