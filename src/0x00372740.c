/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 974D417F11FBD943009A3951D1A6599C448FD6A54C8C0FE2A3AA1C3E1133CBF9
 * Entry: 0x00372740, Ghidra index: 13399, label: FUN_00372740
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00080288;
extern uint32_t DAT_000802a0;
extern uint32_t DAT_0037df0c;
extern uint32_t DAT_0037df10;
extern uint32_t DAT_0037df14;
extern uint32_t DAT_0037df18;
extern uint32_t DAT_0037df1c;
extern uint32_t DAT_0037df34;
extern uint32_t DAT_0037ec88;
extern uint32_t _DAT_0037af58;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00372740(void)

{
  undefined4 *in_EAX;
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  bool bVar4;
  float local_c;
  float local_8;
  
  FUN_0036f320();
  if (D3D8__D3DRS_FogEnable == 0) {
    puVar1 = (undefined4 *)*in_EAX;
    if ((undefined4 *)in_EAX[1] <= puVar1) {
      puVar1 = (undefined4 *)D3D8LTCG__D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
    }
    *puVar1 = 0x402a4;
    puVar1[1] = 0;
    if ((in_EAX[0xdb] != 0) && (in_EAX[0xdc] != 0)) {
      *in_EAX = puVar1 + 2;
      return;
    }
    bVar4 = DAT_0037df34 != 0;
    puVar1[2] = &DAT_00080288;
    puVar1[3] = (uint)bVar4 * 2 + 0xc;
    puVar1[4] = 0x1c80;
    *in_EAX = puVar1 + 5;
    return;
  }
  iVar2 = (DAT_0037df1c == 0) + 1;
  if (DAT_0037df0c == 0) {
    local_c = 1.0;
    local_8 = 1.0;
    uVar3 = 0x2601;
    iVar2 = 0;
  }
  else if (DAT_0037df0c == 3) {
    local_8 = _DAT_0037af58;
    if (DAT_0037df14 != DAT_0037df10) {
      local_8 = 1.0 / (DAT_0037df14 - DAT_0037df10);
    }
    uVar3 = 0x2601;
    local_c = DAT_0037df14 * local_8 + 1.0;
    local_8 = -local_8;
  }
  else {
    local_c = 1.5;
    if (DAT_0037df0c == 1) {
      local_8 = DAT_0037df18 * -0.090168074;
      uVar3 = 0x800;
    }
    else {
      local_8 = DAT_0037df18 * -0.21233003;
      uVar3 = 0x801;
    }
  }
  puVar1 = (undefined4 *)*in_EAX;
  if ((undefined4 *)in_EAX[1] <= puVar1) {
    puVar1 = (undefined4 *)D3D8LTCG__D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
  }
  *puVar1 = &DAT_000802a0;
  puVar1[1] = iVar2;
  puVar1[2] = 1;
  puVar1[3] = 0x4029c;
  puVar1[4] = uVar3;
  puVar1[5] = 0xc09c0;
  puVar1[6] = local_c;
  puVar1[7] = local_8;
  puVar1[8] = 0;
  if ((in_EAX[0xdb] != 0) && (in_EAX[0xdc] != 0)) {
    *in_EAX = puVar1 + 9;
    return;
  }
  bVar4 = DAT_0037df34 != 0;
  puVar1[9] = &DAT_00080288;
  puVar1[10] = (-(uint)bVar4 & 0x20000) + 0x130c0300;
  puVar1[0xb] = 0x1c80;
  *in_EAX = puVar1 + 0xc;
  return;
}
