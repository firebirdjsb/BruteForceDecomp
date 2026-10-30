/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 91EE3605F0DE9388B52FF00F946DB332BA78C752D8D75C5B75AC0440E0A7115B
 * Entry: 0x0036e990, Ghidra index: 13312, label: D3DDevice_SetFlickerFilter_0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbox_d3d_device_x86.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037b82c;
extern uint32_t DAT_0037b834;
void D3D8LTCG__D3DDevice_SetFlickerFilter_0(void)

{
  int unaff_ESI;
  
  if ((DAT_0037b834 == 0) || (DAT_0037b82c != unaff_ESI)) {
    AvSendTVEncoderOption(*(undefined4 *)(D3D8__D3D_g_pDevice + 0x17c8),0xb);
    DAT_0037b834 = 1;
    DAT_0037b82c = unaff_ESI;
  }
  return;
}
