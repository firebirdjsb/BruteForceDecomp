/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8AED367B3635EC6A83B06810FDC78A4F0CA2ED5ACED43F47A79ABA0F288984F6
 * Entry: 0x000bc550, Ghidra index: 2291, label: FUN_000bc550
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037ec88;
void FUN_000bc550(void)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int in_ECX;
  int iVar6;
  float10 fVar7;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float fStack_18;
  float fStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  local_28 = *(float *)(in_ECX + 0x18) * *(float *)(in_ECX + 0x34);
  local_24 = 0.0;
  local_20 = 0.0;
  if (((*(int *)(in_ECX + 0x28) != 0) && (iVar3 = *(int *)(*(int *)(in_ECX + 0x28) + 8), iVar3 != 0)
      ) && (iVar3 = *(int *)(iVar3 + 0x10), iVar3 != 0)) {
    piVar2 = (int *)(**(code **)(*(int *)(iVar3 + 0x48) + 0x18))();
    local_20 = (float)*piVar2;
    local_24 = (float)piVar2[1];
  }
  local_2c = (float)(int)*(short *)(in_ECX + 10);
  local_20 = (float)(int)*(short *)(in_ECX + 8) + local_28 + local_20;
  local_1c = (float)(int)local_2c + local_28 + local_24;
  fVar7 = (float10)FUN_000bb170();
  local_24 = (float)fVar7;
  if (fVar7 != (float10)0.0) {
    local_2c = 1.4013e-45;
    FUN_0006a610(&local_2c);
    local_2c = 1.0804e-42;
    FUN_0006a610(&local_2c);
    local_2c = local_24 * 255.0;
    iVar3 = (int)local_2c;
    local_24 = local_2c;
    FUN_00062280();
    cVar1 = FUN_000a4a60(6);
    if (cVar1 != '\0') {
      FUN_000a4d00();
      if (in_ECX != 0) {
        uStack_10 = *(undefined4 *)(in_ECX + 0x14);
        uStack_4 = 0;
        uStack_c = uStack_10;
        uStack_8 = uStack_10;
      }
      FUN_000a4d80();
    }
    iVar6 = *(int *)(in_ECX + 0x30) + 1;
    FUN_00062230(3);
    local_2c = *(float *)(in_ECX + 0x2c);
    FUN_000ba4e0();
    fStack_14 = 6.2831855 / (float)*(int *)(in_ECX + 0x30);
    local_24 = 0.0;
    D3D8LTCG__D3DDevice_SetVertexDataColor
              (3,((((int)(((uint)local_2c >> 0x18) * iVar3) / 0xff & 0xffU) * 0x100 +
                  ((uint)local_2c & 0xff)) * 0x100 + ((uint)local_2c >> 8 & 0xff)) * 0x100 +
                 ((uint)local_2c >> 0x10 & 0xff));
    puVar5 = D3D8__D3D_g_pDevice;
    puVar4 = (undefined4 *)*D3D8__D3D_g_pDevice;
    if ((undefined4 *)D3D8__D3D_g_pDevice[1] <= puVar4) {
      puVar4 = (undefined4 *)D3D8LTCG__D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
    }
    *puVar4 = 0x818c8;
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar5 = puVar4 + 3;
    puVar4 = D3D8__D3D_g_pDevice;
    for (; D3D8__D3D_g_pDevice = puVar4, iVar6 != 0; iVar6 = iVar6 + -1) {
      fVar7 = (float10)fcos((float10)local_24);
      puVar5 = (undefined4 *)*puVar4;
      local_2c = (float)(fVar7 * (float10)local_28 + (float10)local_20);
      fVar7 = (float10)fsin((float10)local_24);
      fStack_18 = (float)(fVar7 * (float10)local_28 + (float10)local_1c);
      if ((undefined4 *)puVar4[1] <= puVar5) {
        puVar5 = (undefined4 *)D3D8LTCG__D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
      }
      local_24 = fStack_14 + local_24;
      *puVar5 = 0x81880;
      puVar5[1] = local_2c;
      puVar5[2] = fStack_18;
      *puVar4 = puVar5 + 3;
      puVar4 = D3D8__D3D_g_pDevice;
    }
    D3D8LTCG__D3DDevice_End();
    return;
  }
  return;
}
