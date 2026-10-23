/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BBC2CCF43C0AC9C5E04D1AD93E0327E55E8D99927FE06060EC0C15BA7CBCDAC3
 * Entry: 0x000eb270, Ghidra index: 2892, label: FUN_000eb270
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbox_d3d_device_x86.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037af64;
void FUN_000eb270(int param_1,undefined4 param_2,int *param_3)

{
  uint *puVar1;
  int iVar2;
  int extraout_ECX;
  int iVar3;
  uint *extraout_ECX_00;
  uint *puVar4;
  int unaff_retaddr;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  uint *local_24;
  undefined1 local_20 [4];
  undefined1 local_1c [4];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if ((*(char *)(param_1 + 0x38) != '\0') && (*(int *)(param_1 + 0x1c) != 0)) {
    if ((*(byte *)((int)param_3 + 0x71) & 4) != 0) {
      FUN_002385a0();
      puVar1 = *(uint **)(D3D8__D3D_g_pDevice + 0x15c0);
      iVar3 = D3D8__D3D_g_pDevice;
      local_24 = puVar1;
      if ((((*puVar1 & 0xffff) == 0) && ((*puVar1 & 0x70000) == 0x50000)) && (puVar1[5] != 0)) {
        D3D8LTCG__D3DResource_AddRef(puVar1[5]);
        iVar3 = extraout_ECX;
      }
      *puVar1 = *puVar1 + 1;
      puVar4 = *(uint **)(iVar3 + 0x15b8);
      if (puVar4 != (uint *)0x0) {
        if ((((*puVar4 & 0xffff) == 0) && ((*puVar4 & 0x70000) == 0x50000)) && (puVar4[5] != 0)) {
          D3D8LTCG__D3DResource_AddRef(puVar4[5]);
          puVar4 = extraout_ECX_00;
        }
        *puVar4 = *puVar4 + 1;
      }
      FUN_00373f00(*(undefined4 *)(param_1 + 0x1c),0,0,&local_28,local_1c,local_20,&local_2c,
                   &local_30);
      iVar2 = FUN_0036ebf0(local_2c,local_30);
      local_28 = *(undefined4 *)(param_1 + 0x14);
      FUN_002386d0();
      D3D8LTCG__D3D_CommonSetRenderTarget(local_28,iVar2,&DAT_0037af64);
      local_18 = 0;
      local_14 = 0;
      local_10 = *(undefined4 *)(param_1 + 8);
      local_8 = 0;
      local_4 = 0x3f800000;
      local_c = local_10;
      FUN_00095070(0xffffffc0);
      FUN_002386d0();
      D3D8LTCG__D3DDevice_Clear(0,0,3,0,0x3f800000,0);
      iVar3 = *(int *)(param_1 + 0x5c);
      *(undefined4 *)(iVar3 + 0x16c) = 0x3f000000;
      *(undefined4 *)(iVar3 + 0x170) = 0x3f000000;
      *(undefined4 *)(iVar3 + 0x174) = 0x3f000000;
      *(undefined4 *)(iVar3 + 0x178) = 0x3f000000;
      (**(code **)(*param_3 + 0x118))(param_2);
      FUN_002386d0();
      D3D8LTCG__D3D_CommonSetRenderTarget(puVar1,unaff_retaddr,&DAT_0037af64);
      FUN_00238630();
      FUN_0006be20();
      *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
      *(int *)(*(int *)(param_1 + 0x5c) + 0x20) = param_1 + 0x24;
      if (iVar2 != 0) {
        D3D8LTCG__D3DResource_Release(iVar2);
      }
      if (unaff_retaddr != 0) {
        D3D8LTCG__D3DResource_Release(unaff_retaddr);
      }
      D3D8LTCG__D3DResource_Release(local_28);
      return;
    }
    *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x1c) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x20) = 0;
  }
  return;
}
