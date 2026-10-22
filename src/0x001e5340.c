/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BFC7CEFEEC7735C1F788964B15E60E5382AC9C1DA5968EBBE5FA83DB34A92FAE
 * Entry: 0x001e5340, Ghidra index: 6795, label: FUN_001e5340
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbox_xapi_device_identities_x86.h"
undefined4 FUN_001e5340(void)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_ESI;
  undefined4 *puVar3;
  undefined *local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  puVar3 = (undefined4 *)(unaff_ESI + 0x22c);
  for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  puVar3 = (undefined4 *)(unaff_ESI + 0x250);
  for (iVar2 = 0x19; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  puVar3 = (undefined4 *)(unaff_ESI + 0x2b4);
  for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)(unaff_ESI + 0x21c) = 0;
  *(undefined4 *)(unaff_ESI + 0x220) = 0;
  *(undefined4 *)(unaff_ESI + 0x224) = 0;
  *(undefined4 *)(unaff_ESI + 0x228) = 0;
  *(undefined4 *)(unaff_ESI + 0x7c) = 0;
  local_18 = &XAPILIB__g_DeviceType_Gamepad;
  local_14 = 4;
  XAPILIB__XInitDevices(1,&local_18);
  uVar1 = XAPILIB__XGetDevices(&XAPILIB__g_DeviceType_Gamepad);
  *(undefined4 *)(unaff_ESI + 0x7c) = uVar1;
  FUN_001e7450(unaff_ESI);
  FUN_001e53f0(unaff_ESI);
  local_18 = (undefined *)((uint)local_18 & 0xffffffe0);
  local_14 = 0x3f800000;
  local_10 = 0x3f800000;
  FUN_001e73b0(unaff_ESI,&local_18);
  FUN_001e55e0();
  return 1;
}
