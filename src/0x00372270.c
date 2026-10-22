/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A5CD890106CCF4EEAE3F779FA3A20803299B681A9DFA1081A7D78CF760E2FFD0
 * Entry: 0x00372270, Ghidra index: 13396, label: FUN_00372270
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00080318;
extern uint32_t *DAT_0037df68;
extern uint32_t DAT_0037df6c;
extern uint32_t DAT_0037df70;
extern uint32_t DAT_0037df74;
extern uint32_t DAT_0037df78;
extern uint32_t DAT_0037df7c;
extern uint32_t DAT_0037df80;
extern uint32_t DAT_0037df84;
extern uint32_t DAT_0037ec88;
extern uint32_t _DAT_0037af5c;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00372270(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined4 *puVar12;
  int extraout_ECX;
  int *unaff_ESI;
  
  puVar10 = (undefined4 *)*unaff_ESI;
  if ((undefined4 *)unaff_ESI[1] <= puVar10) {
    puVar10 = (undefined4 *)D3D8LTCG__D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
  }
  fVar9 = DAT_0037df80;
  fVar8 = DAT_0037df7c;
  fVar7 = DAT_0037df78;
  iVar6 = DAT_0037df74;
  fVar4 = DAT_0037df6c;
  fVar2 = DAT_0037df68;
  if (DAT_0037df74 == 0) {
    fVar2 = DAT_0037df68 * (float)unaff_ESI[0x148];
    if (DAT_0037df68 * (float)unaff_ESI[0x148] < DAT_0037df6c) {
      fVar2 = DAT_0037df6c;
    }
    if (DAT_0037df84 < fVar2) {
      fVar2 = DAT_0037df84;
    }
    puVar12 = puVar10;
    if (_DAT_0037af5c < fVar2) {
      fVar2 = _DAT_0037af5c;
    }
  }
  else {
    fVar1 = DAT_0037df84 - DAT_0037df6c;
    fVar3 = (float)unaff_ESI[0x2a7];
    if (unaff_ESI[0x2a7] < 0) {
      fVar3 = fVar3 + 4.2949673e+09;
    }
    fVar3 = fVar3 * DAT_0037df68;
    *puVar10 = &LAB_00200a30;
    fVar3 = fVar1 / fVar3;
    puVar10[4] = fVar1;
    puVar10[5] = fVar1;
    puVar10[6] = fVar1;
    puVar10[8] = fVar4;
    puVar12 = puVar10 + 9;
    fVar3 = fVar3 * fVar3;
    puVar10[1] = fVar7 * fVar3;
    puVar10[2] = fVar8 * fVar3;
    puVar10[3] = fVar3 * fVar9;
    puVar10[7] = -(fVar4 / fVar1);
  }
  uVar5 = DAT_0037df70;
  *puVar12 = &DAT_00080318;
  puVar12[1] = iVar6;
  puVar12[2] = uVar5;
  uVar11 = FUN_00373a30(fVar2 * 8.0 + 0.5);
  if (0x1ff < uVar11) {
    uVar11 = 0x1ff;
  }
  *(undefined1 **)(extraout_ECX + 0xc) = &LAB_0004043c;
  *(uint *)(extraout_ECX + 0x10) = uVar11;
  *unaff_ESI = extraout_ECX + 0x14;
  return;
}
