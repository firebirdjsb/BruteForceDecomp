/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1023B7B42E3929DEEA289DF3915791FE8F847C90032158DDE87D92BF26E92C46
 * Entry: 0x002174c0, Ghidra index: 7465, label: FUN_002174c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbox_d3d_device_x86.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037ec88;
void FUN_002174c0(uint param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 unaff_EBX;
  int iVar4;
  int iVar5;
  undefined1 local_13;
  undefined1 local_12;
  undefined1 local_11;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  uVar2 = param_1;
  iVar4 = *(int *)(param_1 + 8);
  iVar5 = *(int *)(param_1 + 0xc);
  local_11 = 1;
  param_1 = param_1 & 0xffffff00;
  local_4 = 0;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_12 = 1;
  local_13 = 1;
  for (; iVar4 != iVar5; iVar4 = iVar4 + 0x14) {
    FUN_00213fc0(iVar4,param_2,&local_11,&param_1,&local_4,&local_8,&local_c,&local_10,&local_12,
                 &local_13,unaff_EBX);
  }
  iVar4 = *(int *)(uVar2 + 0x1c);
  puVar1 = D3D8__D3D_g_pDevice;
  for (iVar5 = *(int *)(uVar2 + 0x18); D3D8__D3D_g_pDevice = puVar1, iVar5 != iVar4;
      iVar5 = iVar5 + 0x14) {
    FUN_00213fc0(iVar5,param_2,&local_11,&param_1,&local_4,&local_8,&local_c,&local_10,&local_12,
                 &local_13,unaff_EBX);
    puVar1 = D3D8__D3D_g_pDevice;
  }
  if ((char)param_1 != '\0') {
    puVar3 = (undefined4 *)*puVar1;
    if ((undefined4 *)puVar1[1] <= puVar3) {
      puVar3 = (undefined4 *)D3D8LTCG__D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
    }
    *puVar3 = 0x417fc;
    puVar3[1] = 0;
    *puVar1 = puVar3 + 2;
    if ((puVar1[2] & 0x1000) != 0) {
      D3D8LTCG__D3D_SetFence(1);
    }
    puVar1[2] = puVar1[2] & 0xffffe7ff;
  }
  return;
}
