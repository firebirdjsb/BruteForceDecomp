/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F8EE15D4043C3CF2F7C7795958AF854AF576FAE7854CC0966C4CD2A61344E59E
 * Entry: 0x001f68f0, Ghidra index: 7041, label: FUN_001f68f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037bb28;
extern uint32_t DAT_003f7f1c;
void FUN_001f68f0(int param_1)

{
  uint *puVar1;
  int iVar2;
  int in_EAX;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  uint local_d4;
  int local_d0;
  int local_cc;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  
  iVar3 = FUN_000e96b0(*(undefined4 *)(in_EAX + 0x80));
  if (iVar3 == 0) {
    return;
  }
  iVar3 = *(int *)(*(int *)(param_1 + 0x20) + 0x10);
  if (iVar3 == 0) {
    return;
  }
  if (*(int *)(*(int *)(in_EAX + 0x8c) + 0xd8) != 0) {
    return;
  }
  if (*(int *)(iVar3 + 0x18) == 0) {
    local_b8 = 0;
  }
  else {
    local_b8 = (*(int *)(iVar3 + 0x1c) - *(int *)(iVar3 + 0x18)) / 0x2c;
  }
  iVar3 = *(int *)(param_1 + 0x68 + *(int *)(param_1 + 0x70) * 4);
  uVar4 = *(int *)(iVar3 + 0x14) - *(int *)(iVar3 + 0x10);
  if (*(uint *)(param_1 + 0x74) <= (((int)uVar4 < 1) - 1 & uVar4)) goto LAB_001f69ce;
  uVar4 = *(int *)(param_1 + 0x70) + 1U & 0x80000001;
  if ((int)uVar4 < 0) {
    uVar4 = (uVar4 - 1 | 0xfffffffe) + 1;
  }
  *(uint *)(param_1 + 0x70) = uVar4;
  puVar1 = *(uint **)(param_1 + 0x68 + uVar4 * 4);
  if (D3D8__D3D_g_pDevice != 0) {
    uVar4 = puVar1[2];
    if ((*puVar1 & 0x780000) == 0) {
      if (uVar4 == 0) goto LAB_001f69c8;
      uVar7 = 0x10;
    }
    else {
      uVar4 = *(uint *)(D3D8__D3D_g_pDevice + 0x2c);
      uVar7 = 2;
    }
    D3D8LTCG__D3D_BlockOnTime(uVar4,uVar7);
  }
LAB_001f69c8:
  puVar1[4] = 0;
  puVar1[3] = 0;
LAB_001f69ce:
  DAT_0037bb28 = *(int *)(param_1 + 0x68 + *(int *)(param_1 + 0x70) * 4);
  if (DAT_0037bb28 == 0) {
    if (-1 < *(int *)(param_1 + 0x24)) {
      FUN_00372150();
    }
  }
  else {
    *(undefined4 *)(DAT_0037bb28 + 0xc) = *(undefined4 *)(DAT_0037bb28 + 0x10);
  }
  FUN_0036ff10();
  FUN_0036ff10();
  FUN_0006ec90();
  FUN_0036fe60(0xffffffc0,6);
  local_d0 = 5;
  local_cc = -1;
  local_bc = 0;
  if (local_b8 != 0) {
    do {
      if (local_bc == 0) {
        FUN_0036ff10();
        iVar3 = *(int *)(*(int *)(param_1 + 0x20) + 0x5c);
        iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x20) + 0x10) + 0x18);
        iVar5 = *(int *)(iVar2 + 0x1c);
        local_d0 = local_d0 + 1;
        if (iVar5 == 0) {
          local_c0 = 0;
        }
        else {
          local_c0 = (*(int *)(iVar2 + 0x20) - iVar5) / 0x30;
        }
        local_d4 = 0;
        if (local_c0 != 0) {
          do {
            uVar4 = FUN_0006e6b0(DAT_003f7f1c,&LAB_001f3710,
                                 (uint)*(ushort *)(*(int *)(iVar3 + 4) + local_d4 * 2) * 0x40 +
                                 *(int *)(param_1 + 0x18));
            if (((uVar4 & 1) == 0) && (local_d4 != 0)) {
              if (local_cc == -1) {
                local_cc = local_d0;
              }
            }
            else {
              if (local_cc != -1) {
                FUN_0036ff10();
                local_cc = -1;
              }
              FUN_0036ff10();
            }
            local_d0 = local_d0 + 1;
            local_d4 = local_d4 + 1;
          } while (local_d4 < local_c0);
        }
        if (local_cc == -1) {
          local_cc = local_d0;
        }
      }
      else {
        iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 0x20) + 0x10) + 0x18) + 0x18 + local_bc * 0x2c;
        iVar2 = *(int *)(iVar3 + 4);
        iVar5 = 0;
        if (iVar2 != 0) {
          iVar5 = (*(int *)(iVar3 + 8) - iVar2) / 0x30;
        }
        local_d0 = local_d0 + 1 + iVar5;
      }
      local_bc = local_bc + 1;
    } while (local_bc < local_b8);
  }
  FUN_0036ff10();
  iVar3 = DAT_0037bb28;
  if (DAT_0037bb28 != 0) {
    iVar2 = *(int *)(DAT_0037bb28 + 0x10);
    iVar5 = *(int *)(DAT_0037bb28 + 4);
    uVar4 = *(uint *)(DAT_0037bb28 + 0x14);
    uVar6 = iVar2 + 4;
    DAT_0037bb28 = 0;
    *(uint *)(iVar3 + 0x10) = uVar6;
    if (uVar6 <= uVar4) {
      *(undefined4 *)(iVar5 + iVar2) = 0xffffffff;
    }
  }
  FUN_002386d0();
  D3D8LTCG__D3DDevice_RunPushBuffer_4((int *)(param_1 + 0x24));
  return;
}
