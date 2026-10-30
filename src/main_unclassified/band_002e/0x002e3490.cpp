/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B4557E0F863577204E1F85AD7BC3B700B1AA0551B45BDFB0E5E127C4FA831800
 * Entry: 0x002e3490, Ghidra index: 10402, label: FUN_002e3490
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_002e3490(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  int *in_ECX;
  
  if (*in_ECX != -1) {
    iVar1 = FUN_00345084(*in_ECX);
    *in_ECX = -1;
    if (iVar1 != 0) {
      XAPILIB__GetLastError();
      XAPILIB__GetLastError();
    }
  }
  iVar1 = FUN_00345079(2,param_1,param_2);
  *in_ECX = iVar1;
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
