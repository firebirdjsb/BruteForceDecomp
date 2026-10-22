/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CD56DDE1CDD1F1E805301ECA8AA6BF057CDE7D5F6FA5FF8522C0474EBC20B3FE
 * Entry: 0x003721b0, Ghidra index: 13394, label: FUN_003721b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037ec88;
void FUN_003721b0(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int unaff_ESI;
  
  D3D8LTCG__CDevice_SetStateVB_8(D3D8__D3D_g_pDevice,0);
  if (D3D8__D3D_g_pDevice[1] + 0x200U <= (uint)(*D3D8__D3D_g_pDevice + 4 + unaff_ESI * 4)) {
    uVar1 = unaff_ESI * 4 + 0x208;
    uVar2 = DAT_0037ec88 >> 1;
    if (DAT_0037ec88 >> 1 < uVar1) {
      uVar2 = uVar1;
    }
    uVar3 = DAT_0037ec88;
    if (DAT_0037ec88 < uVar1) {
      uVar3 = uVar1;
    }
    D3D8LTCG__D3D_MakeRequestedSpace_8(uVar2,uVar3);
  }
  return;
}
