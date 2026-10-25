/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4629C8A73A3401F41BC276FB11D69BFFC39C80AAB5C834533A2074F2F406627F
 * Entry: 0x0006a750, Ghidra index: 1204, label: FUN_0006a750
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037ec88;
extern uint32_t DAT_0037ec8c;
extern uint32_t DAT_003bc93c;
extern uint32_t DAT_00469b38;
extern uint32_t DAT_00469b40;
extern uint32_t _DAT_0037ec38;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0006a750(void)

{
  uint uVar1;
  int iVar2;
  uint *extraout_ECX;
  uint *puVar3;
  undefined4 *puVar4;
  bool bVar5;
  undefined4 local_5c;
  undefined4 local_58;
  /* XBE 0x0006a761: ECX=0x11; LEA EDI,[ESP+0x24]; REP STOSD.
   * The same stack address is passed to device creation. Storage only;
   * device API contract and remaining register ABI are unverified. */
  undefined4 device_stack_words[0x11];
  
  puVar4 = device_stack_words;
  for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  DAT_00469b38 = 1;
  DAT_0037ec8c = 0x180000;
  DAT_0037ec88 = 0x4000;
  XAPILIB__XGetVideoFlags();
  iVar2 = D3D8LTCG__Direct3D_CreateDevice_16__LTCG_eax_BehaviorFlags_ecx_ppReturnedDeviceInterface
                    (0,1,0,device_stack_words);
  if (iVar2 != 0) {
    return 0;
  }
  local_5c = 0;
  local_58 = 0;
  D3D8LTCG__D3DDevice_SetViewport(&local_5c);
  puVar3 = *(uint **)(D3D8__D3D_g_pDevice + 0x15c0);
  if ((((*puVar3 & 0xffff) == 0) && ((*puVar3 & 0x70000) == 0x50000)) && (puVar3[5] != 0)) {
    D3D8LTCG__D3DResource_AddRef(puVar3[5]);
    puVar3 = extraout_ECX;
  }
  bVar5 = DAT_003bc93c == 3;
  *puVar3 = *puVar3 + 1;
  DAT_00469b40 = puVar3;
  if (bVar5) {
    FUN_00067d90(0x3fa28f5c,0,0x3f800000,0);
  }
  D3D8LTCG__D3DDevice_Clear(0,0,0xf3,0xff000000,0x3f800000,0);
  iVar2 = D3D8__D3D_g_pDevice;
  puVar3 = *(uint **)(D3D8__D3D_g_pDevice + 0x388);
  _DAT_0037ec38 = 0;
  if ((puVar3 != (uint *)0x0) &&
     (uVar1 = *puVar3, *puVar3 = uVar1 - 0x80000, (uVar1 - 0x80000 & 0x78ffff) == 0)) {
    D3D8LTCG__D3D_DestroyResource__LTCG();
  }
  *(undefined4 *)(iVar2 + 0x388) = 0;
  *(undefined4 *)(iVar2 + 0x1c) = 0;
  D3D8LTCG__D3DDevice_Swap_0();
  return 1;
}
