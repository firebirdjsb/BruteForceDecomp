/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 76C2C9C5D45BFAD547E8F02B3F80197E0C9CFAA6F0CE29C36E70AA34782F6888
 * Entry: 0x000d9090, Ghidra index: 2678, label: FUN_000d9090
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t _DAT_003bc720;
extern uint32_t _DAT_003c0284;
extern uint32_t _DAT_003f7d24;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000d9090(int param_1,float param_2)

{
  undefined4 *puVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  undefined4 **ppuVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  float fVar9;
  undefined4 *local_20;
  undefined4 *puStack_1c;
  float local_18;
  float local_14;
  undefined4 *local_10;
  undefined4 *local_c;
  undefined4 *local_8;
  undefined4 *local_4;
  
  if ((*(char *)(*(int *)(param_1 + 0xbf0) + 0x84) == '\0') &&
     (*(int *)(*(int *)(param_1 + 0xbf0) + 0x8c) != 0)) {
    *(undefined4 *)(param_1 + 0xc58) = 0;
    *(undefined4 *)(param_1 + 0xc5c) = 0x3f800000;
    *(undefined4 *)(param_1 + 0xc60) = 0x3f800000;
    *(undefined4 *)(param_1 + 0xc64) = 0;
    *(undefined4 *)(param_1 + 0xc68) = 0;
    return;
  }
  *(float *)(param_1 + 0xc60) = *(float *)(param_1 + 0xc60) - param_2;
  if (*(float *)(param_1 + 0xc60) <= 0.0) {
    local_18 = (float)*(int *)(param_1 + 0xc64);
    local_14 = (float)*(int *)(param_1 + 0xc68);
    iVar6 = 0;
    FUN_00023b80();
    local_20 = *(undefined4 **)(param_1 + 0x74);
    puVar1 = *(undefined4 **)(param_1 + 0x68);
    puVar8 = local_10;
    while ((((puVar8 != puVar1 || (local_c != puVar1)) || (local_8 != local_20)) ||
           (local_4 != local_20))) {
      if (puVar8 == local_c) {
        piVar7 = (int *)local_8[3];
      }
      else {
        piVar7 = (int *)puVar8[3];
      }
      if ((piVar7 != (int *)0x0) && ((*(byte *)(piVar7 + 0x1c) & 1) == 0)) {
        iVar4 = (**(code **)(*piVar7 + 0xf8))();
        if (iVar4 != 0) {
          iVar4 = (**(code **)(*piVar7 + 0xf8))();
          if (*(char *)(*(int *)(iVar4 + 0x794) + 0xd) != '\0') goto LAB_000d91c1;
        }
        cVar3 = FUN_000d4460();
        if (cVar3 == '\0') {
          iVar6 = iVar6 + 1;
        }
        else {
          iVar6 = iVar6 + 2;
        }
      }
LAB_000d91c1:
      if (puVar8 == local_c) {
        local_8 = (undefined4 *)*local_8;
      }
      else {
        puVar8 = (undefined4 *)*puVar8;
      }
    }
    fVar2 = *(float *)(param_1 + 0xc58);
    local_20 = (undefined4 *)(iVar6 + -4);
    puStack_1c = (undefined4 *)0x0;
    ppuVar5 = &local_20;
    if (iVar6 + -4 < 1) {
      ppuVar5 = &puStack_1c;
    }
    fVar9 = (local_14 * 0.2 + local_18 * 0.008571429 + (float)(int)*ppuVar5 * 0.0625) *
            ((float)(*(int *)(param_1 + 0xc70) + -1) * 0.25 + 1.0);
    if (fVar9 <= 0.0) {
      fVar9 = 0.0;
    }
    if (1.0 <= fVar9) {
      fVar9 = 1.0;
    }
    *(float *)(param_1 + 0xc58) = fVar9;
    if (*(float *)(param_1 + 0xc58) < fVar2) {
      *(float *)(param_1 + 0xc58) = (fVar2 + *(float *)(param_1 + 0xc58)) * 0.5;
    }
    *(float *)(param_1 + 0xc5c) = *(float *)(param_1 + 0xc58) * 4.0 + 1.0;
    *(undefined4 *)(param_1 + 0xc60) = 0x3f800000;
    *(undefined4 *)(param_1 + 0xc64) = 0;
    *(undefined4 *)(param_1 + 0xc68) = 0;
    _DAT_003bc720 = ((1.0 - *(float *)(param_1 + 0xc58)) + 1.0) * 0.5;
    _DAT_003c0284 = _DAT_003bc720;
    _DAT_003f7d24 = _DAT_003bc720;
  }
  return;
}
