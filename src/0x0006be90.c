/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3A9B42B3CB921D32187A5FB5E06FE719F421AA58FCD7A8B4867074293DF16A32
 * Entry: 0x0006be90, Ghidra index: 1222, label: FUN_0006be90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00414b78;
extern uint32_t DAT_00414b7c;
extern uint32_t DAT_00414b80;
extern uint32_t *DAT_00469b54;
extern uint32_t _DAT_00414b84;
extern uint32_t _DAT_004a5898;
extern uint32_t _DAT_004a58a0;
extern uint32_t _DAT_004a58ac;
extern uint32_t _DAT_004a58b0;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0006be90(float param_1,float param_2)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  char cVar7;
  float *pfVar8;
  int unaff_EDI;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  
  if (param_1 < 0.0) {
    if ((*(byte *)(unaff_EDI + 0x140) & 1) != 0) {
      FUN_0006ac90(*(undefined4 *)(unaff_EDI + 0x138));
      FUN_0006c840(unaff_EDI);
      *(byte *)(unaff_EDI + 0x140) = *(byte *)(unaff_EDI + 0x140) & 0xfe;
    }
  }
  else {
    if ((*(byte *)(unaff_EDI + 0x140) & 1) == 0) {
      fVar9 = (float10)(**(code **)(*(int *)(unaff_EDI + 0x48) + 0x24))();
      *(float *)(unaff_EDI + 0x138) = (float)fVar9;
      *(byte *)(unaff_EDI + 0x140) = *(byte *)(unaff_EDI + 0x140) | 1;
    }
    FUN_0006ac90(param_1);
    FUN_0006c840(unaff_EDI);
  }
  if (param_2 < 0.0) {
    if ((*(byte *)(unaff_EDI + 0x140) & 2) != 0) {
      *(undefined4 *)(*(int *)(unaff_EDI + 0x50) + 0x20) = *(undefined4 *)(unaff_EDI + 0x13c);
      FUN_0006c840(unaff_EDI);
      *(byte *)(unaff_EDI + 0x140) = *(byte *)(unaff_EDI + 0x140) & 0xfd;
    }
  }
  else {
    if ((*(byte *)(unaff_EDI + 0x140) & 2) == 0) {
      fVar9 = (float10)(**(code **)(*(int *)(unaff_EDI + 0x48) + 0x28))();
      *(float *)(unaff_EDI + 0x13c) = (float)fVar9;
      *(byte *)(unaff_EDI + 0x140) = *(byte *)(unaff_EDI + 0x140) | 2;
    }
    *(float *)(*(int *)(unaff_EDI + 0x50) + 0x20) = param_2;
    FUN_0006c840(unaff_EDI);
  }
  piVar1 = (int *)(unaff_EDI + 0x48);
  fVar9 = (float10)(**(code **)(*(int *)(unaff_EDI + 0x48) + 0x24))();
  fVar10 = (float10)(**(code **)(*piVar1 + 0x28))();
  fVar11 = (float10)(**(code **)(*piVar1 + 0x20))();
  fVar12 = (float10)(**(code **)(*piVar1 + 0x2c))();
  FUN_0006ee30((float)fVar11,(float)fVar12,(float)fVar9,(float)fVar10);
  cVar7 = (**(code **)(*DAT_00469b54 + 0x30))();
  if (cVar7 != '\0') {
    pfVar8 = (float *)(**(code **)(*DAT_00469b54 + 0x38))();
    fVar2 = (pfVar8[1] - 0.5) + (pfVar8[1] - 0.5);
    fVar4 = (*pfVar8 - 0.5) + (*pfVar8 - 0.5);
    fVar3 = (pfVar8[2] - 0.5) + (pfVar8[2] - 0.5);
    fVar6 = (pfVar8[3] - 0.5) + (pfVar8[3] - 0.5);
    fVar5 = fVar6 - fVar3;
    _DAT_004a58a0 = -((fVar6 + fVar3) / fVar5);
    fVar3 = fVar4 - fVar2;
    _DAT_004a58b0 = -((fVar4 + fVar2) / fVar3);
    _DAT_004a5898 = _DAT_004a5898 / fVar5;
    _DAT_004a5898 = _DAT_004a5898 + _DAT_004a5898;
    _DAT_004a58ac = _DAT_004a58ac / fVar3;
    _DAT_004a58ac = _DAT_004a58ac + _DAT_004a58ac;
  }
  if (DAT_00414b80 == unaff_EDI) {
    DAT_00414b78 = DAT_00414b78 + 1;
  }
  else {
    DAT_00414b78 = 1;
    DAT_00414b7c = 0;
    DAT_00414b80 = unaff_EDI;
  }
  _DAT_00414b84 = unaff_EDI;
  D3D8LTCG__D3DDevice_SetVertexShaderConstant4();
  if ((0 < DAT_00414b78) && (0 < DAT_00414b7c)) {
    FUN_0006ed80();
    D3D8LTCG__D3DDevice_SetVertexShaderConstant4();
  }
  return;
}
