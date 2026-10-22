/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3673E0EA06EFD3555C0B31B670A392ACFA4A3056F000F492816F5FFDFED81F0D
 * Entry: 0x00252c60, Ghidra index: 8382, label: FUN_00252c60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00252c60(void)

{
  uint in_EAX;
  int iVar1;
  int *unaff_ESI;
  
  do {
    iVar1 = (**(code **)(*unaff_ESI + 0x14))();
    if (iVar1 != 0) {
      return;
    }
    in_EAX = in_EAX >> 7;
  } while (in_EAX != 0);
  return;
}
