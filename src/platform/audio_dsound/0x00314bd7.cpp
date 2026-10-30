/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BF9A978E93BA50A10D68DEF5D3F83A09074621ADC29F08BBE5C53E58092EA93F
 * Entry: 0x00314bd7, Ghidra index: 12083, label: FUN_00314bd7
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_00314bd7(int *param_1)

{
  int iVar1;
  undefined4 *in_ECX;
  uint uVar2;
  
  uVar2 = 0;
  iVar1 = XAPILIB__GetFileSize(*in_ECX,0);
  *param_1 = iVar1;
  if (iVar1 == -1) {
    iVar1 = XAPILIB__GetLastError();
    if (iVar1 < 1) {
      uVar2 = XAPILIB__GetLastError();
    }
    else {
      uVar2 = XAPILIB__GetLastError();
      uVar2 = uVar2 & 0xffff | 0x80070000;
    }
  }
  return uVar2;
}
