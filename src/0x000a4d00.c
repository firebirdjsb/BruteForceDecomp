/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B3079E059B51E73EC81B6EBAF2CC5AC96FB2D186A6D27D8357E171824023C080
 * Entry: 0x000a4d00, Ghidra index: 1962, label: FUN_000a4d00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003f7c68;
extern uint32_t DAT_00469aec;
extern uint32_t PTR_DAT_003e2530;
extern uint32_t _DAT_00469ad8;
extern uint32_t _DAT_00469adc;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000a4d00(void)

{
  undefined *puVar1;
  int iVar2;
  int unaff_ESI;
  
  iVar2 = D3D8__D3D_g_pDevice;
  if (DAT_00469aec != 0) {
    DAT_003f7c68 = -1;
    DAT_00469aec = 0;
  }
  if (DAT_003f7c68 == unaff_ESI) {
    _DAT_00469adc = _DAT_00469adc + 1;
    return 1;
  }
  puVar1 = (&PTR_DAT_003e2530)[unaff_ESI * 0x131];
  if (puVar1 != (undefined *)0x0) {
    *(undefined4 *)(D3D8__D3D_g_pDevice + 0x4e8) = 1;
    *(undefined4 *)(iVar2 + 0x4ec) = 0;
    *(undefined **)(iVar2 + 0x4f0) = puVar1;
  }
  D3D8LTCG__D3DDevice_SetPixelShader_0__LTCG_eax_handle();
  _DAT_00469ad8 = _DAT_00469ad8 + 1;
  DAT_003f7c68 = unaff_ESI;
  return 1;
}
