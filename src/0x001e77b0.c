/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 67B2084DFCDCF70119CD1FC2C2400225915938992899FB8B337114A000F3B969
 * Entry: 0x001e77b0, Ghidra index: 6814, label: FUN_001e77b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbox_xapi_device_identities_x86.h"
void FUN_001e77b0(void)

{
  int iVar1;
  int unaff_ESI;
  uint local_8;
  uint local_4;
  
  local_4 = 0;
  local_8 = 0;
  iVar1 = XAPILIB__XGetDeviceChanges(&XAPILIB__g_DeviceType_Gamepad,&local_4,&local_8);
  if (iVar1 != 0) {
    if (local_8 != 0) {
      *(uint *)(unaff_ESI + 0x7c) = *(uint *)(unaff_ESI + 0x7c) & ~local_8;
    }
    if (local_4 != 0) {
      *(uint *)(unaff_ESI + 0x7c) = *(uint *)(unaff_ESI + 0x7c) | local_4;
    }
  }
  return;
}
