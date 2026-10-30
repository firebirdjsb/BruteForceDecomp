/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8323E22C3844969D0D8EB8B9CC9831A69727A96A40D4B385B45F09ABDE3B0CD6
 * Entry: 0x002a2ad0, Ghidra index: 9527, label: FUN_002a2ad0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbox_d3d_device_x86.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003b8ad0;
extern uint32_t *DAT_004698c4;
extern uint32_t DAT_00469aec;
void FUN_002a2ad0(void)

{
  int iVar1;
  uint *puVar2;
  uint *extraout_ECX;
  uint *puVar3;
  uint *local_4;
  
  local_4 = (uint *)0x1;
  FUN_0006a610(&local_4);
  local_4 = (uint *)0x1;
  FUN_0006a610(&local_4);
  local_4 = (uint *)0x80;
  FUN_0006a610(&local_4);
  local_4 = (uint *)0x3;
  FUN_0006a610(&local_4);
  local_4 = (uint *)0x3;
  FUN_0006a610(&local_4);
  puVar2 = DAT_004698c4;
  local_4 = DAT_004698c4;
  if (DAT_004698c4 != (uint *)0x0) {
    puVar3 = DAT_004698c4;
    if ((((*DAT_004698c4 & 0xffff) == 0) && ((*DAT_004698c4 & 0x70000) == 0x50000)) &&
       (DAT_004698c4[5] != 0)) {
      D3D8LTCG__D3DResource_AddRef(DAT_004698c4[5]);
      puVar3 = extraout_ECX;
    }
    *puVar3 = *puVar3 + 1;
  }
  FUN_000622f0(&local_4);
  if (puVar2 != (uint *)0x0) {
    D3D8LTCG__D3DResource_Release(puVar2);
  }
  iVar1 = D3D8__D3D_g_pDevice;
  if (DAT_00469aec != 2) {
    *(undefined4 *)(D3D8__D3D_g_pDevice + 0x4e8) = 1;
    *(undefined4 *)(iVar1 + 0x4ec) = 0;
    *(undefined **)(iVar1 + 0x4f0) = &DAT_003b8ad0;
    D3D8LTCG__D3DDevice_SetPixelShader_0__LTCG_eax_handle();
    DAT_00469aec = 2;
  }
  return;
}
