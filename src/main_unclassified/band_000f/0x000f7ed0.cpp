/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 616BAADA1B58A56728258E5EDEE4764970B1403D1805C5A6958BE6CD33AA59A8
 * Entry: 0x000f7ed0, Ghidra index: 3111, label: FUN_000f7ed0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000f7ed0(void)

{
  int *in_EAX;
  int iVar1;
  int unaff_EBX;
  
  if (((in_EAX != (int *)0x0) && (unaff_EBX != 0)) &&
     (iVar1 = (**(code **)(*in_EAX + 4))(), iVar1 == 3)) {
    FUN_0010c850();
    iVar1 = FUN_00100f90();
    if ((iVar1 != 0) && (iVar1 = FUN_001016f0(), iVar1 != 0)) {
      FUN_000f7c70(iVar1,0,0);
    }
  }
  return;
}
