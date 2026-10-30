/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9A92B8202B5BC72F7186949556D06C909D6ED65D25F7063437704CD9830664B8
 * Entry: 0x00095360, Ghidra index: 1820, label: FUN_00095360
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469b54;
void FUN_00095360(void)

{
  char cVar1;
  float *pfVar2;
  float10 fVar3;
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  int local_30;
  float local_2c;
  float local_28;
  undefined4 local_24;
  undefined4 local_20;
  float local_1c;
  float local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  
  local_1c = 1.0;
  local_18 = 1.0;
  local_14 = 0x3f800000;
  local_10 = 0x3f800000;
  local_2c = 0.0;
  local_28 = 0.0;
  local_24 = 0;
  local_20 = 0;
  fVar3 = (float10)(**(code **)(*DAT_00469b54 + 0x24))();
  local_1c = (float)fVar3;
  fVar3 = (float10)(**(code **)(*DAT_00469b54 + 0x28))();
  local_18 = (float)fVar3;
  (**(code **)(*DAT_00469b54 + 0x1c))(&local_8,&local_c);
  cVar1 = (**(code **)(*DAT_00469b54 + 0x30))();
  if (cVar1 != '\0') {
    pfVar2 = (float *)(**(code **)(*DAT_00469b54 + 0x38))();
    local_1c = local_1c / (pfVar2[3] - pfVar2[2]);
    local_18 = local_18 / (*pfVar2 - pfVar2[1]);
    local_2c = local_2c - (float)local_8 * pfVar2[2] * local_1c;
    local_28 = local_28 - (1.0 - *pfVar2) * (float)local_c * local_18;
  }
  D3D8LTCG__D3DDevice_SetVertexShaderConstant1();
  D3D8LTCG__D3DDevice_SetVertexShaderConstant1();
  local_34 = local_8 + -1;
  local_30 = local_c + -1;
  local_3c = 0;
  local_38 = 0;
  D3D8LTCG__D3DDevice_SetScissors(1,0,&local_3c);
  return;
}
