/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 79BB990C462B83BB565CB5B0A641DF3895DD457149EC8D1EB64CD77948AFB1F2
 * Entry: 0x00095460, Ghidra index: 1821, label: FUN_00095460
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037bd48;
extern uint32_t DAT_0037e338;
extern uint32_t DAT_00469b10;
extern uint32_t DAT_00469b14;
void FUN_00095460(int param_1,int param_2,uint param_3)

{
  byte *pbVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 local_908 [576];
  uint local_8;
  
  if ((param_2 != DAT_00469b10) || (param_1 != DAT_00469b14)) {
    DAT_00469b10 = param_2;
    DAT_00469b14 = param_1;
    if (param_2 != 0) {
      local_8 = 0x30;
      puVar3 = &local_8;
      if (param_3 < 0x31) {
        puVar3 = &param_3;
      }
      uVar2 = *puVar3;
      uVar4 = 0;
      puVar6 = local_908;
      if (uVar2 != 0) {
        do {
          pbVar1 = (byte *)(uVar4 + param_2);
          uVar4 = uVar4 + 1;
          puVar7 = (undefined4 *)(param_1 + 8 + (uint)*pbVar1 * 0x48);
          puVar8 = puVar6;
          for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar8 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar8 = puVar8 + 1;
          }
          puVar6 = puVar6 + 0xc;
        } while (uVar4 < uVar2);
      }
      if (uVar4 * 3 == 1) {
        D3D8LTCG__D3DDevice_SetVertexShaderConstant1();
        return;
      }
      if (uVar4 * 3 == 4) {
        D3D8LTCG__D3DDevice_SetVertexShaderConstant4();
        return;
      }
      if (((byte)DAT_0037bd48 & 0x10) == 0) {
        puVar6 = local_908;
        puVar7 = &DAT_0037e338;
        for (iVar5 = uVar4 * 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
      }
      D3D8LTCG__D3DDevice_SetVertexShaderConstantNotInlineFast(uVar4 * 0xc);
    }
  }
  return;
}
