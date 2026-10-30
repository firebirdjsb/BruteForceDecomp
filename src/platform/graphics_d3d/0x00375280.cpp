/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 20CF4E9221A969B17BB50413C7A5B6A926E348CF8B7266D26E6065ED16A48753
 * Entry: 0x00375280, Ghidra index: 13440, label: FUN_00375280
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbox_d3d_device_x86.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037df94;
extern uint32_t DAT_0037ec50;
extern uint32_t _DAT_0037ec84;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00375280(void)

{
  if ((((*(byte *)(D3D8__D3D_g_pDevice + 0x49c) & 0x10) != 0) && ((_DAT_0037ec84 & 0x70) != 0)) &&
     (DAT_0037ec50 == -1)) {
    DAT_0037ec50 = DAT_0037df94;
    switch(_DAT_0037ec84 >> 4 & 7) {
    case 1:
      DAT_0037df94 = 1;
      return;
    case 2:
      DAT_0037df94 = 2;
      return;
    case 3:
      DAT_0037df94 = 4;
      return;
    case 4:
      DAT_0037df94 = 0x80000000;
      return;
    case 5:
      DAT_0037df94 = 0x80000001;
      return;
    case 6:
      DAT_0037df94 = 0x80000002;
      return;
    case 7:
      DAT_0037df94 = -0x7ffffffc;
    }
  }
  return;
}
