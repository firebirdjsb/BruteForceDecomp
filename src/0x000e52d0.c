/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8BA3BAD7921FB336D5E6937390363CA08E9D90613318B994E0488576EBBE71E3
 * Entry: 0x000e52d0, Ghidra index: 2857, label: FUN_000e52d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037af64;
extern uint32_t DAT_0037bd48;
extern uint32_t DAT_0037e1b8;
extern uint32_t DAT_0040cf8c;
extern uint32_t DAT_0040cf90;
extern uint32_t DAT_0040cf9c;
extern uint32_t DAT_0040cfa0;
extern uint32_t DAT_0040cfac;
extern uint32_t DAT_0040cfb0;
extern uint32_t DAT_0040cfbc;
extern uint32_t DAT_0040cfc0;
extern uint32_t DAT_004698ea;
extern uint32_t DAT_0046b2e8;
extern uint32_t DAT_004a5b8c;
extern uint32_t DAT_004a5b8d;
extern uint32_t _DAT_0040cf84;
extern uint32_t _DAT_0040cf88;
extern uint32_t _DAT_0040cf94;
extern uint32_t _DAT_0040cf98;
extern uint32_t _DAT_0040cfa4;
extern uint32_t _DAT_0040cfa8;
extern uint32_t _DAT_0040cfb4;
extern uint32_t _DAT_0040cfb8;
/* WARNING: Removing unreachable block (ram,0x000e55bb) */
/* WARNING: Removing unreachable block (ram,0x000e5487) */
/* WARNING: Removing unreachable block (ram,0x000e54a2) */
/* WARNING: Removing unreachable block (ram,0x000e55db) */
/* WARNING: Removing unreachable block (ram,0x000e5609) */
/* WARNING: Removing unreachable block (ram,0x000e5625) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000e52d0(int param_1,int param_2)

{
  float fVar1;
  undefined4 uVar2;
  uint *extraout_ECX;
  uint *puVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  float local_60 [4];
  float local_50;
  float local_4c;
  undefined4 local_48;
  undefined4 local_44;
  float local_40 [4];
  float local_30;
  float local_2c;
  undefined4 local_28;
  undefined4 local_24;
  uint local_20;
  undefined1 local_1c [4];
  uint *local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  FUN_002385a0();
  local_c = 0;
  FUN_0006a610(&local_c);
  local_c = 0;
  FUN_0006a610(&local_c);
  local_c = *(undefined4 *)(param_2 + 0x998);
  FUN_0006a610(&local_c);
  FUN_000a4a60(5);
  FUN_000a4d00();
  puVar3 = *(uint **)(D3D8__D3D_g_pDevice + 0x15b4);
  local_c = 0;
  local_18 = puVar3;
  if (puVar3 != (uint *)0x0) {
    if ((((*puVar3 & 0xffff) == 0) && ((*puVar3 & 0x70000) == 0x50000)) && (puVar3[5] != 0)) {
      D3D8LTCG__D3DResource_AddRef(puVar3[5]);
      puVar3 = extraout_ECX;
    }
    *puVar3 = *puVar3 + 1;
    FUN_000e6c70(&DAT_0046b2e8,&local_c);
    FUN_00062280();
    local_8 = 3;
    FUN_0006a610(&local_8);
    local_8 = 3;
    FUN_0006a610(&local_8);
    FUN_00373f00(*(undefined4 *)(param_1 + 0xf4),0,0,&local_14,&local_20,local_1c,&local_10,&local_8
                );
    local_8 = FUN_0036ebf0(local_10,local_8);
    fVar1 = (float)*(int *)(param_1 + 0xc);
    if ((int)*(uint *)(param_1 + 0xc) < 0) {
      fVar1 = fVar1 + 4.2949673e+09;
    }
    local_40[0] = fVar1 + _DAT_0040cfa4;
    fVar1 = (float)*(int *)(param_1 + 0x10);
    if ((int)*(uint *)(param_1 + 0x10) < 0) {
      fVar1 = fVar1 + 4.2949673e+09;
    }
    local_40[2] = (float)DAT_0040cfac;
    local_40[1] = fVar1 + _DAT_0040cfa8;
    local_40[3] = (float)DAT_0040cfb0;
    local_20 = *(uint *)(param_1 + 0x10) >> 1;
    local_30 = (float)(*(uint *)(param_1 + 0xc) >> 1) + _DAT_0040cfb4;
    local_28 = DAT_0040cfbc;
    local_2c = (float)local_20 + _DAT_0040cfb8;
    local_24 = DAT_0040cfc0;
    if (((byte)DAT_0037bd48 & 0x10) == 0) {
      pfVar5 = local_40;
      pfVar6 = (float *)&DAT_0037e1b8;
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        *pfVar6 = *pfVar5;
        pfVar5 = pfVar5 + 1;
        pfVar6 = pfVar6 + 1;
      }
    }
    D3D8LTCG__D3DDevice_SetVertexShaderConstantNotInlineFast(8);
    FUN_002386d0();
    iVar4 = local_8;
    D3D8LTCG__D3D_CommonSetRenderTarget(local_8,local_c,&DAT_0037af64);
    if (DAT_004a5b8d != '\0') {
      FUN_002386d0();
      D3D8LTCG__D3DDevice_Clear(0,0,0xf0,0,0x3f800000,0);
    }
    if (DAT_004698ea == '\0') {
      FUN_002386d0();
      D3D8LTCG__D3DDevice_DrawIndexedVerticesUP(5,6,param_1 + 0xd4,param_1 + 0x14,0x18);
    }
    if (iVar4 != 0) {
      D3D8LTCG__D3DResource_Release(iVar4);
    }
    FUN_00062280();
    FUN_00373f00(*(undefined4 *)(param_1 + 0xf8),0,0,&local_8,local_1c,&local_20,&local_10,&local_14
                );
    local_8 = FUN_0036ebf0(local_10,local_14);
    local_60[0] = (float)(*(uint *)(param_1 + 0xc) >> 1) + _DAT_0040cf84;
    local_60[2] = (float)DAT_0040cf8c;
    local_60[1] = (float)(*(uint *)(param_1 + 0x10) >> 1) + _DAT_0040cf88;
    local_60[3] = (float)DAT_0040cf90;
    local_20 = *(uint *)(param_1 + 0x10) >> 2;
    local_50 = (float)(*(uint *)(param_1 + 0xc) >> 2) + _DAT_0040cf94;
    local_48 = DAT_0040cf9c;
    local_4c = (float)local_20 + _DAT_0040cf98;
    local_44 = DAT_0040cfa0;
    if (((byte)DAT_0037bd48 & 0x10) == 0) {
      pfVar5 = local_60;
      pfVar6 = (float *)&DAT_0037e1b8;
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        *pfVar6 = *pfVar5;
        pfVar5 = pfVar5 + 1;
        pfVar6 = pfVar6 + 1;
      }
    }
    D3D8LTCG__D3DDevice_SetVertexShaderConstantNotInlineFast(8);
    FUN_002386d0();
    uVar2 = local_c;
    D3D8LTCG__D3D_CommonSetRenderTarget(local_8,local_c,&DAT_0037af64);
    if (DAT_004a5b8c != '\0') {
      FUN_002386d0();
      D3D8LTCG__D3DDevice_Clear(0,0,0xf0,0,0x3f800000,0);
    }
    if (DAT_004698ea == '\0') {
      FUN_002386d0();
      D3D8LTCG__D3DDevice_DrawIndexedVerticesUP(5,6,param_1 + 0xd4,param_1 + 0x14,0x18);
    }
    FUN_002386d0();
    puVar3 = local_18;
    D3D8LTCG__D3D_CommonSetRenderTarget(local_18,uVar2,&DAT_0037af64);
    FUN_0006be20();
    D3D8LTCG__D3DResource_Release(local_8);
    D3D8LTCG__D3DResource_Release(uVar2);
    D3D8LTCG__D3DResource_Release(puVar3);
  }
  FUN_00238630();
  return;
}
