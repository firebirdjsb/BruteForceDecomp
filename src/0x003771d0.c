/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B6A6D464497DA7B1E4E718C88F1361284768FA17182792CE2AE0B9E096CD6FE3
 * Entry: 0x003771d0, Ghidra index: 13455, label: CDevice_InitializeFrameBuffers_4__LTCG_ebx1
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037b790;
extern uint32_t DAT_0037df90;
extern uint32_t DAT_0037df94;
extern uint32_t DAT_0037ec88;
/* WARNING: Removing unreachable block (ram,0x0037728d) */
/* WARNING: Removing unreachable block (ram,0x003772a5) */

undefined4 D3D8LTCG__CDevice_InitializeFrameBuffers_4__LTCG_ebx1(int *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  uint *extraout_ECX;
  uint *extraout_ECX_00;
  uint *puVar8;
  int *piVar9;
  undefined4 *unaff_EBX;
  int iVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined8 uVar13;
  undefined4 local_4c;
  undefined4 local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  uint local_34;
  undefined4 local_30;
  int local_2c;
  int local_28;
  int local_24;
  uint local_20;
  int local_1c;
  uint auStack_18 [6];
  
  local_3c = 1;
  if (param_1[3] != 0) {
    local_3c = param_1[3];
  }
  local_30 = FUN_00373ac0();
  local_1c = FUN_00373ac0();
  local_2c = param_1[1];
  DAT_0037df94 = param_1[0xc];
  local_28 = *param_1;
  uVar6 = unaff_EBX[2];
  unaff_EBX[0x548] = param_1[5];
  local_44 = local_3c + 1;
  unaff_EBX[0x56f] = local_44;
  unaff_EBX[2] = uVar6 & 0xffffbfff;
  D3D8__D3DRS_MultiSampleMode = 0;
  local_40 = 0;
  if (((param_1[4] & 0x3000U) != 0) || (param_1[5] == 3)) {
    local_40 = 1;
    unaff_EBX[2] = uVar6 & 0xffffbfff | 0x4000;
  }
  uVar6 = param_1[4];
  if (uVar6 == 0) {
    uVar6 = 0x11;
  }
  uVar2 = uVar6 >> 4 & 0xf;
  local_20 = uVar6 & 0xf;
  unaff_EBX[0x547] = uVar6;
  unaff_EBX[0x14a] = (float)uVar2;
  unaff_EBX[0x14b] = (float)local_20;
  if (((uVar6 & 0x1000) != 0) && (D3D8__D3DRS_MultiSampleMode = 2, (char)uVar6 == '!')) {
    D3D8__D3DRS_MultiSampleMode = 1;
  }
  DAT_0037df90 = 2;
  if ((uVar6 & 0x100) == 0) {
    if ((uVar6 & 0x200) != 0) {
      DAT_0037df90 = 5;
    }
  }
  else {
    DAT_0037df90 = 4;
  }
  piVar9 = param_1 + 0xd;
  if (*piVar9 == 0) {
    local_38 = uVar2 * local_28;
    local_24 = local_20 * local_2c;
    uVar13 = FUN_00373b60(local_38);
    uVar6 = (uint)uVar13;
    local_20 = FUN_00374130(1,1,(int)((ulonglong)uVar13 >> 0x20),uVar6,0,0,&local_4c,&local_48);
    if (local_40 != 0) {
      local_44 = 1;
    }
    for (uVar2 = ((local_44 * local_20 + -1 + uVar6) / uVar6) * uVar6; (uVar2 & 0x3fff) != 0;
        uVar2 = uVar2 + uVar6) {
    }
    local_34 = uVar2;
    uVar6 = MmAllocateContiguousMemoryEx(uVar2,0,0x7ffffff,0x4000,0x404);
    iVar7 = local_38;
    if (uVar6 == 0) {
      return 0x8007000e;
    }
    unaff_EBX[0x58c] = uVar6;
    if (local_44 != 0) {
      puVar5 = unaff_EBX + 0x570;
      puVar3 = unaff_EBX + 0x577;
      iVar10 = local_44;
      do {
        *puVar5 = puVar3 + -3;
        puVar3[-3] = 0x1050001;
        puVar3[-2] = uVar6 & 0xfffffff;
        *puVar3 = local_4c;
        puVar3[1] = local_48;
        puVar3[2] = 0;
        puVar3[-1] = 0;
        uVar6 = uVar6 + local_20;
        puVar5 = puVar5 + 1;
        puVar3 = puVar3 + 6;
        iVar10 = iVar10 + -1;
        uVar2 = local_34;
      } while (iVar10 != 0);
    }
    if (local_38 != 0x780) {
      puVar8 = auStack_18;
      for (iVar10 = 6; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
      }
      auStack_18[1] = unaff_EBX[0x58c];
      auStack_18[2] = uVar2;
      auStack_18[3] = FUN_0036e100();
      D3D_SetTileNoWait_0__LTCG_eax1_ecx2();
    }
    if (local_40 != 0) {
      iVar4 = FUN_00374130(1,1,local_30,0,0,0,&local_4c,&local_48);
      iVar10 = local_3c;
      uVar6 = MmAllocateContiguousMemoryEx(iVar4 * local_3c,0,0x7ffffff,0x4000,0x404);
      if (uVar6 == 0) {
        return 0x8007000e;
      }
      unaff_EBX[0x58d] = uVar6;
      if (iVar10 != 0) {
        puVar5 = unaff_EBX + 0x571;
        puVar3 = unaff_EBX + 0x57d;
        do {
          *puVar5 = puVar3 + -3;
          puVar3[-3] = 0x1050001;
          puVar3[-2] = uVar6 & 0xfffffff;
          *puVar3 = local_4c;
          puVar3[1] = local_48;
          puVar3[2] = 0;
          puVar3[-1] = 0;
          uVar6 = uVar6 + iVar4;
          puVar5 = puVar5 + 1;
          puVar3 = puVar3 + 6;
          iVar10 = iVar10 + -1;
          iVar7 = local_38;
        } while (iVar10 != 0);
      }
    }
    iVar10 = local_1c;
    if (param_1[8] != 0) {
      uVar2 = FUN_00373b60(iVar7);
      iVar7 = FUN_00374130(1,1,iVar10,uVar2,0,0,&local_4c,&local_48);
      for (uVar6 = ((iVar7 + -1 + uVar2) / uVar2) * uVar2; (uVar6 & 0x3fff) != 0;
          uVar6 = uVar6 + uVar2) {
      }
      uVar2 = MmAllocateContiguousMemoryEx(uVar6,0,0x7ffffff,0x4000,0x404);
      if (uVar2 == 0) {
        return 0x8007000e;
      }
      unaff_EBX[0x573] = unaff_EBX + 0x586;
      unaff_EBX[0x58e] = uVar2;
      unaff_EBX[0x587] = uVar2 & 0xfffffff;
      unaff_EBX[0x589] = local_4c;
      unaff_EBX[0x586] = 0x1050001;
      unaff_EBX[0x58a] = local_48;
      unaff_EBX[0x58b] = 0;
      unaff_EBX[0x588] = 0;
      if (local_38 != 0x780) {
        puVar8 = auStack_18;
        for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar8 = 0;
          puVar8 = puVar8 + 1;
        }
        auStack_18[0] = 0x80000001;
        auStack_18[1] = uVar2;
        auStack_18[2] = uVar6;
        auStack_18[3] = FUN_0036e100();
        if (((&DAT_0037b790)[iVar10] & 0x3c) == 0x20) {
          auStack_18[0] = 0x84000001;
        }
        D3D_SetTileNoWait_0__LTCG_eax1_ecx2();
      }
    }
  }
  else {
    if (local_44 != 0) {
      puVar5 = unaff_EBX + 0x570;
      puVar3 = unaff_EBX + 0x574;
      local_38 = local_44;
      do {
        puVar11 = (undefined4 *)*piVar9;
        puVar12 = puVar3;
        for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar12 = *puVar11;
          puVar11 = puVar11 + 1;
          puVar12 = puVar12 + 1;
        }
        *puVar5 = puVar3;
        piVar9 = piVar9 + 1;
        puVar5 = puVar5 + 1;
        puVar3 = puVar3 + 6;
        local_38 = local_38 + -1;
      } while (local_38 != 0);
      local_38 = 0;
    }
    if ((undefined4 *)param_1[0x10] != (undefined4 *)0x0) {
      puVar5 = (undefined4 *)param_1[0x10];
      puVar3 = unaff_EBX + 0x586;
      for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar3 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar3 = puVar3 + 1;
      }
      unaff_EBX[0x573] = unaff_EBX + 0x586;
    }
  }
  uVar6 = 0;
  if (unaff_EBX[0x56f] != 0) {
    puVar5 = unaff_EBX + 0x570;
    do {
      puVar8 = (uint *)*puVar5;
      if ((((*puVar8 & 0xffff) == 0) && ((*puVar8 & 0x70000) == 0x50000)) && (puVar8[5] != 0)) {
        D3DResource_AddRef(puVar8[5]);
        puVar8 = extraout_ECX;
      }
      *puVar8 = *puVar8 + 1;
      uVar6 = uVar6 + 1;
      puVar5 = puVar5 + 1;
    } while (uVar6 < (uint)unaff_EBX[0x56f]);
  }
  puVar8 = (uint *)unaff_EBX[0x573];
  if (puVar8 != (uint *)0x0) {
    if ((((*puVar8 & 0xffff) == 0) && ((*puVar8 & 0x70000) == 0x50000)) && (puVar8[5] != 0)) {
      D3DResource_AddRef(puVar8[5]);
      puVar8 = extraout_ECX_00;
    }
    *puVar8 = *puVar8 + 1;
  }
  puVar5 = (undefined4 *)*unaff_EBX;
  if ((undefined4 *)unaff_EBX[1] <= puVar5) {
    puVar5 = (undefined4 *)D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
  }
  uVar1 = unaff_EBX[0x56f];
  *puVar5 = 0xc0120;
  puVar5[1] = 0;
  puVar5[2] = 1;
  puVar5[3] = uVar1;
  *unaff_EBX = puVar5 + 4;
  return 0;
}
