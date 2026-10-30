/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C2B06C926CDE7E7EB6AFEFC98EE3D4C5161D73F5B8F6859B7EC052B05285A3E2
 * Entry: 0x002f332f, Ghidra index: 10829, label: XCalculateSignatureEnd
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 XAPILIB__XCalculateSignatureEnd(uint *param_1,undefined1 *param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 local_18 [20];
  
  uVar1 = *param_1;
  iVar4 = 1;
  if (param_2 != (undefined1 *)0x0) {
    puVar2 = param_2;
    if ((uVar1 & 1) != 0) {
      puVar2 = local_18;
    }
    FUN_002f31b1(param_1 + 2,param_1[1],0x10,puVar2);
    if ((uVar1 & 1) != 0) {
      iVar4 = FUN_002f3223(param_1,local_18,param_2);
    }
  }
  LocalFree(param_1);
  if (iVar4 == 0) {
    uVar3 = GetLastError();
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
