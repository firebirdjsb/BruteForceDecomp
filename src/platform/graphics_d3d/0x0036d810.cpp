/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BC109E40DF1F4B6FAD8196DFA1EB4E16C3E2D3438C9F23F1B2A4F5476B418939
 * Entry: 0x0036d810, Ghidra index: 13293, label: FUN_0036d810
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0036d810(void)

{
  int in_EAX;
  
  D3D8LTCG__D3D_CommonSetRenderTarget
            (*(undefined4 *)(in_EAX + 0x163c),*(undefined4 *)(in_EAX + 0x1640),in_EAX + 0x1648);
  D3D8LTCG__D3DResource_Release(*(undefined4 *)(in_EAX + 0x163c));
  if (*(int *)(in_EAX + 0x1640) != 0) {
    D3D8LTCG__D3DResource_Release(*(int *)(in_EAX + 0x1640));
  }
  D3D8LTCG__D3DDevice_SetTexture_4__LTCG_eax_Stage(*(undefined4 *)(in_EAX + 0x1644));
  if (*(int *)(in_EAX + 0x1644) != 0) {
    D3D8LTCG__D3DResource_Release(*(int *)(in_EAX + 0x1644));
  }
  return;
}
