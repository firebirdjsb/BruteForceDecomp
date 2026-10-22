/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DBCFC3BA35B5668EF7AEDCE0701A6527BEBA6557D15D98743BEE24589536004E
 * Entry: 0x0006a6e0, Ghidra index: 1203, label: FUN_0006a6e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbox_d3d_device_x86.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b38;
extern uint32_t DAT_00469b3c;
extern uint32_t DAT_00469b40;
extern uint32_t _DAT_00469b34;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0006a6e0(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (DAT_00469b40 != 0) {
    D3D8LTCG__D3DResource_Release(DAT_00469b40);
    DAT_00469b40 = 0;
  }
  puVar2 = D3D8__D3D_g_pDevice;
  if (DAT_00469b3c != 0) {
    if (D3D8__D3D_g_pDevice[0x13f] == 1) {
      FUN_00376e10();
      D3D8__D3D_g_pDevice = (undefined4 *)0x0;
      for (iVar1 = 0x810; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      }
    }
    else {
      D3D8__D3D_g_pDevice[0x13f] = D3D8__D3D_g_pDevice[0x13f] + -1;
    }
    DAT_00469b3c = 0;
  }
  _DAT_00469b34 = 0;
  if (DAT_00469b38 != 0) {
    DAT_00469b38 = 0;
  }
  return;
}
