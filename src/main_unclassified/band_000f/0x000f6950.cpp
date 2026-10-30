/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1F6080C88E06EB44F02F8B6C4047B82005DEB1757A4BE814AFE3AF45F310A468
 * Entry: 0x000f6950, Ghidra index: 3084, label: FUN_000f6950
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_000f6950(void)

{
  int iVar1;
  int *unaff_EDI;
  
  if (unaff_EDI != (int *)0x0) {
    iVar1 = (**(code **)(*unaff_EDI + 4))();
    if (iVar1 == 3) {
      iVar1 = FUN_000f6850();
      if (iVar1 == 0) {
        FUN_0010c7d0();
        return 1;
      }
      FUN_0010c7d0();
      return 1;
    }
  }
  return 0;
}
