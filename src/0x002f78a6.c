/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CD51779B96B22BB5A5F1BAA9394DFDA26EA8C7D96D381B3D1F94AC12FB65BA89
 * Entry: 0x002f78a6, Ghidra index: 10930, label: XLoadSectionByHandle
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 XAPILIB__XLoadSectionByHandle(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = XeLoadSection(param_1);
  if (iVar1 < 0) {
    XapiSetLastNTError(iVar1);
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 4);
  }
  return uVar2;
}
