/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2891E49FF7731993B0563F443BE93376EABE1A721266FD2F8CF59C8882B1A364
 * Entry: 0x0036ce00, Ghidra index: 13288, label: D3DDevice_Clear
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037b790;
extern uint32_t DAT_0037ec88;
extern uint32_t switchD_0036ce92_caseD_4[];
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x0036cf02 */
/* WARNING: Exceeded maximum restarts with more pending */

void D3D8LTCG__D3DDevice_Clear
               (int param_1,int *param_2,uint param_3,uint param_4,undefined4 param_5,
               undefined4 param_6)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  int local_34;
  uint local_30;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  puVar3 = D3D8__D3D_g_pDevice;
  iVar1 = D3D8__D3D_g_pDevice[0x56e];
  iVar2 = D3D8__D3D_g_pDevice[0x56d];
  local_30 = 0;
  if (((&DAT_0037b790)[*(byte *)(iVar2 + 0xd)] & 1) != 0) {
    local_30 = FUN_00373ba0();
    puVar4 = (undefined4 *)*puVar3;
    if ((undefined4 *)puVar3[1] <= puVar4) {
      puVar4 = (undefined4 *)D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
    }
    *puVar4 = 0x40208;
    puVar4[1] = local_30 & 0xfffffdff | 0x100;
    *puVar3 = puVar4 + 2;
  }
  if ((param_3 & 0xf0) != 0) {
    switch(*(undefined1 *)(iVar2 + 0xd)) {
    case 3:
    case 0x1c:
      uVar6 = (param_4 >> 3 & 0x1f0000 | param_4 & 0xf800) >> 3;
      break;
    default:
      goto switchD_0036ce92_caseD_4;
    case 5:
    case 0x11:
      uVar6 = (param_4 >> 3 & 0x1f0000 | param_4 & 0xfc00) >> 2;
    }
    param_4 = (uVar6 | param_4 & 0xf8) >> 3;
  }
switchD_0036ce92_caseD_4:
  if ((iVar1 != 0) || (param_3 = param_3 & 0xfffffffc, param_3 != 0)) {
    if ((param_3 & 1) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar1 = puVar3[0x2a4];
    iVar2 = puVar3[0x2a5];
    iVar10 = puVar3[0x2a6] + iVar1;
    iVar11 = puVar3[0x2a7] + iVar2;
    piVar9 = param_2;
    if (param_1 == 0) {
      local_10 = iVar1;
      local_c = iVar2;
      local_8 = iVar10;
      local_4 = iVar11;
      param_1 = 1;
      piVar9 = &local_10;
      param_2 = &local_10;
    }
    while( true ) {
      do {
        local_34 = *piVar9;
        if (*piVar9 <= iVar1) {
          local_34 = iVar1;
        }
        param_5 = piVar9[1];
        if (piVar9[1] <= iVar2) {
          param_5 = iVar2;
        }
        iVar7 = piVar9[2];
        if (iVar10 <= piVar9[2]) {
          iVar7 = iVar10;
        }
        iVar5 = piVar9[3];
        if (iVar11 <= piVar9[3]) {
          iVar5 = iVar11;
        }
      } while ((iVar7 <= local_34) || (iVar5 <= param_5));
      uVar6 = FUN_00373a30((float)local_34 * (float)puVar3[0x146] + 0.5);
      iVar7 = FUN_00373a30((float)iVar7 * (float)puVar3[0x146] + 0.5);
      uVar8 = FUN_00373a30((float)param_5 * (float)puVar3[0x147] + 0.5);
      uVar12 = FUN_00373a30((float)iVar5 * (float)puVar3[0x147] + 0.5);
      puVar4 = (undefined4 *)*puVar3;
      piVar9 = (int *)((ulonglong)uVar12 >> 0x20);
      if ((undefined4 *)puVar3[1] <= puVar4) {
        puVar4 = (undefined4 *)D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
        piVar9 = param_2;
      }
      *puVar4 = 0x81d98;
      puVar4[1] = iVar7 * 0x10000 - 0x10000U | uVar6;
      puVar4[2] = (int)uVar12 * 0x10000 - 0x10000U | uVar8;
      puVar4[3] = 0xc1d8c;
      puVar4[4] = param_6;
      puVar4[5] = param_4;
      puVar4[6] = param_3;
      puVar4 = puVar4 + 7;
      param_1 = param_1 + -1;
      *puVar3 = puVar4;
      if (param_1 == 0) break;
      piVar9 = piVar9 + 4;
      param_2 = piVar9;
    }
    if (local_30 != 0) {
      if ((undefined4 *)puVar3[1] <= puVar4) {
        puVar4 = (undefined4 *)D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
      }
      *puVar4 = 0x40208;
      puVar4[1] = local_30;
      *puVar3 = puVar4 + 2;
    }
  }
  return;
}
