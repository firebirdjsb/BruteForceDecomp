/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F73B3AAECB7808F0F47FFC833F60B9910850B2C119618C97165FACA7594048D3
 * Entry: 0x00238b10, Ghidra index: 7886, label: FUN_00238b10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t _DAT_004698f0;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00238b10(void)

{
  int iVar1;
  char *unaff_ESI;
  undefined4 *puVar2;
  
  if (*unaff_ESI != '\0') {
    *unaff_ESI = '\0';
    if (*(int *)(unaff_ESI + 4) != 0) {
      D3D8LTCG__D3DDevice_SetTexture_4__LTCG_eax_Stage(0);
      D3D8LTCG__D3DDevice_SetTexture_4__LTCG_eax_Stage(0);
      D3D8LTCG__D3DDevice_SetTexture_4__LTCG_eax_Stage(0);
      D3D8LTCG__D3DDevice_SetTexture_4__LTCG_eax_Stage(0);
    }
    FUN_00238520();
    puVar2 = D3D8__D3D_g_pDevice;
    _DAT_004698f0 = 0;
    if (*(int *)(unaff_ESI + 4) != 0) {
      if (D3D8__D3D_g_pDevice[0x13f] == 1) {
        FUN_00376e10();
        for (iVar1 = 0x810; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar2 = 0;
          puVar2 = puVar2 + 1;
        }
        D3D8__D3D_g_pDevice = (undefined4 *)0x0;
        unaff_ESI[4] = '\0';
        unaff_ESI[5] = '\0';
        unaff_ESI[6] = '\0';
        unaff_ESI[7] = '\0';
        return;
      }
      D3D8__D3D_g_pDevice[0x13f] = D3D8__D3D_g_pDevice[0x13f] + -1;
      unaff_ESI[4] = '\0';
      unaff_ESI[5] = '\0';
      unaff_ESI[6] = '\0';
      unaff_ESI[7] = '\0';
    }
  }
  return;
}
