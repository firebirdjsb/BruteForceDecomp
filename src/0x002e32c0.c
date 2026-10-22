/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FBD416B0761761DA44AF875DABAA892DE5B954EB0CC905235AB951A7B097A4FB
 * Entry: 0x002e32c0, Ghidra index: 10395, label: FUN_002e32c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_002e32c0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 *in_ECX;
  
  iVar1 = FUN_0034514c(*in_ECX,param_1,param_2,0,param_3,0x10);
  if (iVar1 != -1) {
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
