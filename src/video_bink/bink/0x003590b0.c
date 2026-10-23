/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F1726215ADE1E84A5CA5B1C2973D5C48B6D1E3F19FD6FF060EFE5C039D57A4B3
 * Entry: 0x003590b0, Ghidra index: 13163, label: FUN_003590b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_003590b0(void)

{
  int iVar1;
  int in_ECX;
  int *piVar2;
  int unaff_EDI;
  
  iVar1 = 0;
  if (0 < *(int *)(in_ECX + 0x2f8)) {
    piVar2 = *(int **)(in_ECX + 0x25c);
    do {
      if (*(int *)(*(int *)(in_ECX + 0x268) + *piVar2 * 4) == unaff_EDI) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 < *(int *)(in_ECX + 0x2f8));
  }
  return -1;
}
