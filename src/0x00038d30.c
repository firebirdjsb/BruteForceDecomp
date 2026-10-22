/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E108F113DF49809EB0077A736AB9B4571486D3B976E116E5F43EB3CB24317C29
 * Entry: 0x00038d30, Ghidra index: 388, label: FUN_00038d30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00414da0;
extern uint32_t PTR_FUN_003a4f68;
void FUN_00038d30(undefined ***param_1,undefined ***param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  undefined ***pppuVar7;
  undefined ***pppuVar8;
  undefined ***pppuVar9;
  undefined **local_18;
  undefined **local_14;
  undefined **local_10;
  undefined **local_c;
  int local_8;
  undefined **local_4;
  
  if (param_1 < param_2) {
    pppuVar9 = param_1 + 5;
    pppuVar7 = param_2 + 5;
    do {
      local_c = pppuVar9[-2];
      local_10 = pppuVar9[-3];
      local_14 = pppuVar9[-4];
      ppuVar1 = *pppuVar9;
      param_2 = param_2 + -6;
      pppuVar8 = pppuVar7 + -6;
      local_18 = &PTR_FUN_003a4f68;
      local_4 = (undefined **)0x0;
      if ((ppuVar1 != (undefined **)0x0) && (local_4 = ppuVar1, ((uint)ppuVar1 & 1) == 0)) {
        uVar6 = (int)ppuVar1 * 0x19660d + 0x3c6ef35fU >> 0x15;
        local_8 = *(int *)(&DAT_00414da0 + uVar6 * 4);
        *(int **)(&DAT_00414da0 + uVar6 * 4) = &local_8;
      }
      if (param_1 != param_2) {
        ppuVar1 = pppuVar7[-8];
        ppuVar2 = pppuVar7[-9];
        pppuVar9[-4] = pppuVar7[-10];
        pppuVar9[-3] = ppuVar2;
        pppuVar9[-2] = ppuVar1;
        if (*pppuVar9 != *pppuVar8) {
          FUN_0008f6a0(*pppuVar8);
        }
      }
      if (param_2 != &local_18) {
        pppuVar7[-10] = local_14;
        pppuVar7[-9] = local_10;
        pppuVar7[-8] = local_c;
        if (*pppuVar8 != local_4) {
          FUN_0008f6a0(local_4);
        }
      }
      if ((local_4 != (undefined **)0x0) && (((uint)local_4 & 1) == 0)) {
        iVar3 = *(int *)(&DAT_00414da0 + ((int)local_4 * 0x19660d + 0x3c6ef35fU >> 0x15) * 4);
        piVar5 = (int *)(&DAT_00414da0 + ((int)local_4 * 0x19660d + 0x3c6ef35fU >> 0x15) * 4);
        while (iVar3 != 0) {
          piVar4 = (int *)*piVar5;
          if (piVar4 == &local_8) {
            *piVar5 = *(int *)*piVar5;
            break;
          }
          piVar5 = piVar4;
          iVar3 = *piVar4;
        }
      }
      param_1 = param_1 + 6;
      pppuVar9 = pppuVar9 + 6;
      pppuVar7 = pppuVar8;
    } while (param_1 < param_2);
  }
  return;
}
