/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BD15BB51DDA90B5D7E7B0E2298A0656953B9FE26217A5C14CEDAE7C9B1D846AB
 * Entry: 0x0015b950, Ghidra index: 4533, label: FUN_0015b950
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037ec88;
undefined4 FUN_0015b950(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = D3D8__D3D_g_pDevice;
  puVar2 = (undefined4 *)*D3D8__D3D_g_pDevice;
  if ((undefined4 *)D3D8__D3D_g_pDevice[1] <= puVar2) {
    puVar2 = (undefined4 *)D3D8LTCG__D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
  }
  *puVar2 = 0x817c8;
  puVar2[1] = 1;
  puVar2[2] = 1;
  *puVar1 = puVar2 + 3;
  return 0;
}
