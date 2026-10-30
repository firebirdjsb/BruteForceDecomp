/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A47D64FEB6B9604A42B626E9FEC773E79757809D217FCAE66D728A90BEC3B41C
 * Entry: 0x002e3100, Ghidra index: 10390, label: FUN_002e3100
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_002e3100(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *in_ECX;
  
  iVar1 = FUN_0034509a(*in_ECX,param_1,param_2);
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
