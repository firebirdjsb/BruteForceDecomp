/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7ABD3373C9D8FF50C7E1B10531D06E44E8C521C941408668D825FCDF2FC9FAC0
 * Entry: 0x002653c0, Ghidra index: 8719, label: FUN_002653c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002653c0(void)

{
  int iVar1;
  int in_EDX;
  uint unaff_ESI;
  int *unaff_EDI;
  
  iVar1 = *(int *)(in_EDX + 0x10);
  if (iVar1 == 0) {
    *unaff_EDI = 0;
    return 2;
  }
  if (*(uint *)(iVar1 + 8) == unaff_ESI) {
    *unaff_EDI = iVar1;
  }
  else {
    if (*(uint *)(iVar1 + 8) < unaff_ESI) {
      iVar1 = *(int *)(iVar1 + 0x20);
      if (iVar1 != 0) {
        while (*(uint *)(iVar1 + 8) < unaff_ESI) {
          *(int *)(in_EDX + 0x10) = iVar1;
          iVar1 = *(int *)(iVar1 + 0x20);
          if (iVar1 == 0) {
            *unaff_EDI = *(int *)(in_EDX + 0x10);
            return 1;
          }
        }
        *unaff_EDI = iVar1;
        if (*(uint *)(iVar1 + 8) == unaff_ESI) {
          return 0;
        }
      }
      *unaff_EDI = *(int *)(in_EDX + 0x10);
      return 1;
    }
    for (iVar1 = *(int *)(iVar1 + 0x1c); (iVar1 != 0 && (unaff_ESI < *(uint *)(iVar1 + 8)));
        iVar1 = *(int *)(iVar1 + 0x1c)) {
      *(int *)(in_EDX + 0x10) = iVar1;
    }
    *unaff_EDI = iVar1;
    if ((iVar1 == 0) || (*(uint *)(iVar1 + 8) != unaff_ESI)) {
      return 1;
    }
  }
  return 0;
}
