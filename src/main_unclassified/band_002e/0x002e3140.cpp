/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 250AE104897F982B983D7C78E32C39406809607D4FBF30558E8263F12B63BD1F
 * Entry: 0x002e3140, Ghidra index: 10391, label: FUN_002e3140
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_002e3140(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *in_ECX;
  
  iVar1 = FUN_003450ca(*in_ECX,param_1);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = XAPILIB__GetLastError();
  if (iVar1 < 1) {
    uVar2 = XAPILIB__GetLastError();
    return uVar2;
  }
  uVar2 = XAPILIB__GetLastError();
  return uVar2 & 0xffff | 0x80070000;
}
