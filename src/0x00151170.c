/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DB5553AE23B6CEBAADBFBB2B4AFCC1722ACB77FBD34A77D53E4FE1931F9F37B1
 * Entry: 0x00151170, Ghidra index: 4411, label: FUN_00151170
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004699ac;
extern uint32_t DAT_004699b0;
extern uint32_t DAT_004699b4;
extern uint32_t DAT_004699c0;
extern uint32_t _DAT_0046d2f0;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00151170(void)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float *unaff_ESI;
  int local_4;
  
  iVar5 = DAT_004699c0;
  cVar6 = FUN_00168950();
  iVar4 = DAT_004699b4;
  iVar3 = DAT_004699b0;
  iVar2 = DAT_004699ac;
  if (cVar6 != '\0') {
    iVar9 = 0;
    if (3 < iVar5) {
      local_4 = 3;
      do {
        iVar7 = *(int *)(*(int *)(iVar4 + 4) + iVar9 * 4) * 0x54;
        iVar8 = iVar7 + *(int *)(iVar3 + 4);
        if (*(float *)(iVar7 + 0x28 + *(int *)(iVar3 + 4)) <= _DAT_0046d2f0) {
          fVar1 = 0.0;
        }
        else {
          fVar1 = 0.001;
        }
        fVar1 = fVar1 + *(float *)(*(int *)(iVar2 + 0x1c) + iVar9 * 4);
        *unaff_ESI = fVar1 * *(float *)(iVar8 + 0x30) + *unaff_ESI;
        unaff_ESI[1] = fVar1 * *(float *)(iVar8 + 0x34) + unaff_ESI[1];
        unaff_ESI[2] = fVar1 * *(float *)(iVar8 + 0x38) + unaff_ESI[2];
        iVar7 = *(int *)(*(int *)(iVar4 + 4) + 4 + iVar9 * 4) * 0x54;
        iVar8 = iVar7 + *(int *)(iVar3 + 4);
        if (*(float *)(iVar7 + 0x28 + *(int *)(iVar3 + 4)) <= _DAT_0046d2f0) {
          fVar1 = 0.0;
        }
        else {
          fVar1 = 0.001;
        }
        fVar1 = fVar1 + *(float *)(*(int *)(iVar2 + 0x1c) + 4 + iVar9 * 4);
        *unaff_ESI = fVar1 * *(float *)(iVar8 + 0x30) + *unaff_ESI;
        unaff_ESI[1] = fVar1 * *(float *)(iVar8 + 0x34) + unaff_ESI[1];
        unaff_ESI[2] = fVar1 * *(float *)(iVar8 + 0x38) + unaff_ESI[2];
        iVar7 = *(int *)(*(int *)(iVar4 + 4) + 8 + iVar9 * 4) * 0x54;
        iVar8 = iVar7 + *(int *)(iVar3 + 4);
        if (*(float *)(iVar7 + 0x28 + *(int *)(iVar3 + 4)) <= _DAT_0046d2f0) {
          fVar1 = 0.0;
        }
        else {
          fVar1 = 0.001;
        }
        fVar1 = fVar1 + *(float *)(*(int *)(iVar2 + 0x1c) + 8 + iVar9 * 4);
        *unaff_ESI = fVar1 * *(float *)(iVar8 + 0x30) + *unaff_ESI;
        unaff_ESI[1] = fVar1 * *(float *)(iVar8 + 0x34) + unaff_ESI[1];
        unaff_ESI[2] = fVar1 * *(float *)(iVar8 + 0x38) + unaff_ESI[2];
        iVar7 = *(int *)(*(int *)(iVar4 + 4) + 0xc + iVar9 * 4) * 0x54;
        iVar8 = iVar7 + *(int *)(iVar3 + 4);
        if (*(float *)(iVar7 + 0x28 + *(int *)(iVar3 + 4)) <= _DAT_0046d2f0) {
          fVar1 = 0.0;
        }
        else {
          fVar1 = 0.001;
        }
        fVar1 = fVar1 + *(float *)(*(int *)(iVar2 + 0x1c) + 0xc + iVar9 * 4);
        local_4 = local_4 + 4;
        iVar9 = iVar9 + 4;
        *unaff_ESI = fVar1 * *(float *)(iVar8 + 0x30) + *unaff_ESI;
        unaff_ESI[1] = fVar1 * *(float *)(iVar8 + 0x34) + unaff_ESI[1];
        unaff_ESI[2] = fVar1 * *(float *)(iVar8 + 0x38) + unaff_ESI[2];
      } while (local_4 < iVar5);
    }
    for (; iVar9 < iVar5; iVar9 = iVar9 + 1) {
      iVar7 = *(int *)(*(int *)(iVar4 + 4) + iVar9 * 4) * 0x54;
      iVar8 = iVar7 + *(int *)(iVar3 + 4);
      if (*(float *)(iVar7 + 0x28 + *(int *)(iVar3 + 4)) <= _DAT_0046d2f0) {
        fVar1 = 0.0;
      }
      else {
        fVar1 = 0.001;
      }
      fVar1 = fVar1 + *(float *)(*(int *)(iVar2 + 0x1c) + iVar9 * 4);
      *unaff_ESI = fVar1 * *(float *)(iVar8 + 0x30) + *unaff_ESI;
      unaff_ESI[1] = fVar1 * *(float *)(iVar8 + 0x34) + unaff_ESI[1];
      unaff_ESI[2] = fVar1 * *(float *)(iVar8 + 0x38) + unaff_ESI[2];
    }
    return 1;
  }
  *unaff_ESI = 0.0;
  unaff_ESI[1] = 0.0;
  unaff_ESI[2] = 0.0;
  return 0;
}
