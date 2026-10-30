/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BD569906EC1FC1F89E0C1357072CBB2D50C287E7525B41346CAF55F15CBBB027
 * Entry: 0x00315331, Ghidra index: 12100, label: CFullHrtfSource_GetHrtfFilterPair
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_DAT_0032e5a8;
void DSOUND__CFullHrtfSource_GetHrtfFilterPair(int param_1)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  int iVar6;
  
  if (*(float *)(param_1 + 0x14) < 0.0) {
    fVar1 = *(float *)(param_1 + 0x14) - 3.0;
  }
  else {
    fVar1 = *(float *)(param_1 + 0x14) + 3.0;
  }
  iVar2 = FUN_00319a67(fVar1);
  fVar1 = ABS(*(float *)(param_1 + 0x10));
  uVar5 = (iVar2 / 6) * 6;
  iVar2 = (uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f);
  if (iVar2 == 0x5a) {
    iVar2 = 0;
  }
  else if (iVar2 < 0x3d) {
    if (iVar2 < 0x1f) {
      iVar2 = FUN_00319a67(fVar1 + 1.5);
      iVar2 = (iVar2 / 3) * 3;
      uVar5 = extraout_ECX_01;
    }
    else {
      iVar2 = FUN_00319a67(fVar1 + 3.0);
      iVar2 = (iVar2 / 6) * 6;
      uVar5 = extraout_ECX_00;
    }
  }
  else {
    iVar2 = FUN_00319a67(fVar1 + 6.0);
    iVar2 = (iVar2 / 0xc) * 0xc;
    uVar5 = extraout_ECX;
  }
  if ((*(char *)(*(int *)(param_1 + 0x48) + 0x10) != '\0') && (0x5a < iVar2)) {
    iVar2 = 0xb4 - iVar2;
  }
  uVar3 = iVar2 / 3;
  uVar5 = (int)(uVar5 + 0x5a) / 6;
  if (0x3c < uVar3) {
    uVar3 = 0;
  }
  if (0x1e < uVar5) {
    uVar5 = 0;
  }
  iVar2 = (uint)*(ushort *)((int)&PTR_DAT_0032e5a8 + (uVar3 * 0x1f + uVar5) * 2) * 0x20;
  if (*(float *)(param_1 + 0x10) < 0.0) {
    iVar4 = iVar2 + 0x31cfe8;
    iVar6 = iVar2 + 0x31d008;
  }
  else {
    iVar6 = iVar2 + 0x31cfe8;
    iVar4 = iVar2 + 0x31d008;
  }
  if ((iVar6 != *(int *)(param_1 + 0x3c)) || (iVar4 != *(int *)(param_1 + 0x40))) {
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 0x20;
    *(int *)(param_1 + 0x3c) = iVar6;
    *(int *)(param_1 + 0x40) = iVar4;
  }
  return;
}
