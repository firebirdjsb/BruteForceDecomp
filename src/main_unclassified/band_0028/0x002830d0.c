/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C274365631D22F924FB71A38E354A25543F183EE793AEE15E105D4C1BDE3CCD4
 * Entry: 0x002830d0, Ghidra index: 9065, label: FUN_002830d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
bool FUN_002830d0(void)

{
  int *in_EAX;
  int iVar1;
  int *unaff_EDI;
  
  (**(code **)(*unaff_EDI + 0x18))();
  (**(code **)(*in_EAX + 0x18))();
  iVar1 = (**(code **)(*unaff_EDI + 0x24))();
  if (-1 < iVar1) {
    iVar1 = (**(code **)(*unaff_EDI + 0x28))();
  }
  FUN_00239dc0();
  return iVar1 != 0;
}
