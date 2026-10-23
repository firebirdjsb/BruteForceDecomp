/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FB4075F352D611C565088A352E60DE5EA539ABF8C5D799D50CE5989539D4B7C0
 * Entry: 0x000456c0, Ghidra index: 542, label: FUN_000456c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_000456c0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_000120f0();
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x59c) != 0)) {
    uVar2 = FUN_0005bca0();
    return uVar2;
  }
  return 0;
}
