/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1993716E6519BE146F9F99FDB6F84E67025563DAF222D7A9AA556F90A2A571E7
 * Entry: 0x000f6890, Ghidra index: 3082, label: FUN_000f6890
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_000f6890(void)

{
  int iVar1;
  int *unaff_EDI;
  
  if (unaff_EDI != (int *)0x0) {
    iVar1 = (**(code **)(*unaff_EDI + 4))();
    if (iVar1 == 3) {
      FUN_0010c7d0();
      iVar1 = FUN_000f6850();
      if (iVar1 != 0) {
        if ((*(byte *)(unaff_EDI + 10) & 2) != 0) {
          *(byte *)(unaff_EDI + 10) = *(byte *)(unaff_EDI + 10) & 0xfd;
          (**(code **)(*unaff_EDI + 0x24))();
        }
      }
      return 1;
    }
  }
  return 0;
}
