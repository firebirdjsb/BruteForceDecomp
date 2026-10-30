/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8F5E31D43BFA9F871371299FD043C0657EAFA7CB3D3FEAC268A401E998A90BC2
 * Entry: 0x0036dcc0, Ghidra index: 13297, label: FUN_0036dcc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037df94;
extern uint32_t DAT_0037ec88;
void FUN_0036dcc0(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined4 *unaff_ESI;
  int *piVar10;
  
  iVar1 = unaff_ESI[0x56f];
  iVar6 = unaff_ESI[iVar1 + 0x56f];
  uVar2 = *(undefined4 *)(iVar6 + 8);
  uVar3 = *(undefined4 *)(iVar6 + 4);
  iVar8 = iVar1 + -1;
  piVar10 = unaff_ESI + iVar1 + 0x56e;
  do {
    iVar1 = *piVar10;
    *(undefined4 *)(iVar6 + 4) = *(undefined4 *)(iVar1 + 4);
    *(undefined4 *)(iVar6 + 8) = *(undefined4 *)(iVar1 + 8);
    iVar8 = iVar8 + -1;
    piVar10 = piVar10 + -1;
    iVar6 = iVar1;
  } while (iVar8 != 0);
  *(undefined4 *)(iVar1 + 4) = uVar3;
  *(undefined4 *)(iVar1 + 8) = uVar2;
  puVar4 = (undefined4 *)*unaff_ESI;
  if ((undefined4 *)unaff_ESI[1] <= puVar4) {
    puVar4 = (undefined4 *)D3D8LTCG__D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
  }
  uVar7 = *(uint *)(unaff_ESI[0x571] + 4);
  *puVar4 = 0x40110;
  puVar4[1] = 0;
  uVar9 = DAT_0037df94;
  if (DAT_0037df94 == 0) {
    uVar9 = 1;
  }
  if ((uVar9 & 1) != 0) {
    uVar7 = uVar7 | 1;
  }
  if ((uVar9 & 2) != 0) {
    uVar7 = uVar7 | 2;
  }
  if ((uVar9 & 4) != 0) {
    uVar7 = uVar7 | 3;
  }
  if ((int)uVar9 < 0) {
    uVar7 = uVar7 | 8;
  }
  puVar4[2] = 0x40100;
  puVar4[3] = uVar7 << 5 | 1;
  puVar4[4] = 0x4012c;
  puVar4[5] = 0;
  puVar4[6] = 0x40100;
  puVar4[7] = 0;
  puVar5 = puVar4 + 8;
  if ((unaff_ESI[0x56d] == unaff_ESI[0x570]) || (DAT_0037df94 == 0x80000000)) {
    *puVar5 = 0x40130;
    puVar4[9] = 0;
    puVar5 = puVar4 + 10;
  }
  else {
    unaff_ESI[2] = unaff_ESI[2] | 0x100;
  }
  uVar2 = *(undefined4 *)(unaff_ESI[0x570] + 4);
  *puVar5 = 0x40210;
  puVar5[1] = uVar2;
  *unaff_ESI = puVar5 + 2;
  return;
}
