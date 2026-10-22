/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8510A4AD0DFBD838B2DFE2A786E8A77EC0D6C80CF884A15577B33D390DF93E0E
 * Entry: 0x000a4a60, Ghidra index: 1960, label: FUN_000a4a60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbox_d3d_device_x86.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037ec88;
extern uint32_t DAT_003f7c50;
extern uint32_t DAT_003f7c54;
extern uint32_t DAT_003f7c58;
extern uint32_t DAT_003f7c5c;
extern uint32_t DAT_003f7c60;
extern uint32_t DAT_003f7c64;
extern uint32_t DAT_00469acc;
extern uint32_t DAT_00469acd;
extern uint32_t DAT_00469ace;
extern uint32_t DAT_00469acf;
extern uint32_t DAT_00469ad0;
extern uint32_t DAT_00469ad4;
extern uint32_t DAT_00469ae0;
extern uint32_t DAT_00469ae4;
extern uint32_t DAT_00469aeb;
extern uint32_t PTR_DAT_003e2368;
extern uint32_t PTR_DAT_003e23c8;
extern uint32_t PTR_DAT_003e23cc;
undefined4 FUN_000a4a60(int param_1)

{
  undefined4 *puVar1;
  int in_EAX;
  undefined4 *puVar2;
  uint uVar3;
  
  if (DAT_00469aeb != '\0') {
    DAT_00469aeb = '\0';
    DAT_003f7c58 = -1;
    DAT_003f7c5c = 0xffffffff;
    DAT_003f7c60 = -1;
    DAT_00469acc = '\0';
    DAT_00469acd = '\0';
    DAT_00469ace = '\0';
    DAT_00469acf = '\0';
  }
  uVar3 = 0;
  if (in_EAX == 0x18) {
    uVar3 = DAT_003f7c50;
    if (DAT_00469acd == '\0') {
      if (DAT_00469acc == '\0') {
        DAT_00469ad0 = DAT_00469ad0 + 1;
        DAT_00469acc = '\x01';
        D3D8LTCG__D3DDevice_LoadVertexShaderProgram(PTR_DAT_003e23c8,DAT_003f7c50);
        DAT_00469acd = '\x01';
        DAT_00469acf = '\0';
        uVar3 = DAT_003f7c50;
      }
      else {
        DAT_00469ae0 = DAT_00469ae0 + 1;
        DAT_00469acd = '\x01';
        DAT_00469acf = '\0';
      }
    }
    else {
      DAT_00469ae0 = DAT_00469ae0 + 1;
    }
  }
  else {
    if (in_EAX != 0x19) {
      if (DAT_003f7c58 == in_EAX) {
        DAT_00469ae0 = DAT_00469ae0 + 1;
      }
      else {
        DAT_003f7c5c = (uint)*(ushort *)((&PTR_DAT_003e2368)[in_EAX] + 2);
        D3D8LTCG__D3DDevice_LoadVertexShaderProgram((&PTR_DAT_003e2368)[in_EAX],0);
        if (DAT_003f7c50 < DAT_003f7c5c) {
          DAT_00469acc = '\0';
        }
        if (DAT_003f7c54 < DAT_003f7c5c) {
          DAT_00469ace = '\0';
        }
        DAT_00469ad0 = DAT_00469ad0 + 1;
        DAT_00469acd = '\0';
        DAT_00469acf = '\0';
        DAT_003f7c58 = in_EAX;
      }
      goto LAB_000a4c20;
    }
    uVar3 = DAT_003f7c54;
    if (DAT_00469acf == '\0') {
      if (DAT_00469ace == '\0') {
        DAT_00469ad0 = DAT_00469ad0 + 1;
        DAT_00469ace = '\x01';
        D3D8LTCG__D3DDevice_LoadVertexShaderProgram(PTR_DAT_003e23cc,DAT_003f7c54);
        DAT_00469acf = '\x01';
        DAT_00469acd = '\0';
        uVar3 = DAT_003f7c54;
      }
      else {
        DAT_00469ae0 = DAT_00469ae0 + 1;
        DAT_00469acf = '\x01';
        DAT_00469acd = '\0';
      }
    }
    else {
      DAT_00469ae0 = DAT_00469ae0 + 1;
    }
  }
  if (uVar3 < DAT_003f7c5c) {
    DAT_003f7c58 = -1;
    DAT_003f7c5c = 0xffffffff;
  }
LAB_000a4c20:
  puVar1 = D3D8__D3D_g_pDevice;
  if (DAT_003f7c60 == param_1) {
    DAT_00469ae4 = DAT_00469ae4 + 1;
    if (uVar3 != DAT_003f7c64) {
      puVar2 = (undefined4 *)*D3D8__D3D_g_pDevice;
      if ((undefined4 *)D3D8__D3D_g_pDevice[1] <= puVar2) {
        puVar2 = (undefined4 *)D3D8LTCG__D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
      }
      *puVar2 = 0x41ea0;
      puVar2[1] = uVar3;
      *puVar1 = puVar2 + 2;
      puVar1[0xe1] = uVar3;
      DAT_003f7c64 = uVar3;
    }
    return 1;
  }
  D3D8LTCG__D3DDevice_SelectVertexShaderDirect_0();
  DAT_003f7c60 = param_1;
  DAT_003f7c64 = uVar3;
  DAT_00469ad4 = DAT_00469ad4 + 1;
  return 1;
}
