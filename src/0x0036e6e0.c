/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BFF15C8C277C6AB82D691D14ECA53AD115147155854B3C9872559479E6693E5B
 * Entry: 0x0036e6e0, Ghidra index: 13309, label: D3DDevice_EndVisibilityTest_0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037ec88;
undefined4 D3D8LTCG__D3DDevice_EndVisibilityTest_0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = (undefined4 *)FUN_0036e670();
  puVar1 = D3D8__D3D_g_pDevice;
  if (puVar2 == (undefined4 *)0x0) {
    return 0x8007000e;
  }
  *puVar2 = D3D8__D3D_g_pDevice[0xb];
  puVar3 = (undefined4 *)*puVar1;
  if ((undefined4 *)puVar1[1] <= puVar3) {
    puVar3 = (undefined4 *)D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
  }
  *puVar3 = 0x817cc;
  puVar3[1] = 0;
  puVar3[2] = (uint)puVar2 & 0xeffffff | 0x1000000;
  *puVar1 = puVar3 + 3;
  return 0;
}
