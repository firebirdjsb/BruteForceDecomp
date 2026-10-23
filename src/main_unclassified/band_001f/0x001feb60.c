/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 42606AB29F564BC92F0122FFAA816C7872E1284F940D7E44EB260D28AD75A3CC
 * Entry: 0x001feb60, Ghidra index: 7239, label: FUN_001feb60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_001feb60(void)

{
  int iVar1;
  int *in_EAX;
  undefined4 *unaff_EBX;
  int unaff_ESI;
  int unaff_EDI;
  
  *unaff_EBX = 0;
  if (*in_EAX != *(int *)(unaff_EDI + 0x30)) {
    do {
      iVar1 = ((int *)*in_EAX)[2];
      if (((*(int *)(unaff_ESI + 4) == *(int *)(iVar1 + 4)) &&
          (*(int *)(unaff_ESI + 8) == *(int *)(iVar1 + 0xc))) &&
         (*(int *)(iVar1 + 0x14) < *(int *)(iVar1 + 0x10))) {
        *unaff_EBX = *(undefined4 *)(*in_EAX + 8);
        *in_EAX = *(int *)*in_EAX;
        return 1;
      }
      iVar1 = *(int *)*in_EAX;
      *in_EAX = iVar1;
    } while (iVar1 != *(int *)(unaff_EDI + 0x30));
  }
  return 0;
}
