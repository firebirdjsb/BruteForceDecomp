/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5E1ADACC470BA912B8DA515D63104974A044A15593D1F497A17BF4F589717AB6
 * Entry: 0x002e2fd0, Ghidra index: 10386, label: FUN_002e2fd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_002e2fd0(void)

{
  int iVar1;
  uint uVar2;
  int *in_ECX;
  
  if (*in_ECX != -1) {
    iVar1 = FUN_00345084(*in_ECX);
    *in_ECX = -1;
    if (iVar1 != 0) {
      iVar1 = XAPILIB__GetLastError();
      if (iVar1 < 1) {
        uVar2 = XAPILIB__GetLastError();
        return uVar2;
      }
      uVar2 = XAPILIB__GetLastError();
      return uVar2 & 0xffff | 0x80070000;
    }
  }
  return 0;
}
