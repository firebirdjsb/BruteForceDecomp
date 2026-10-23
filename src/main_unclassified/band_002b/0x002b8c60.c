/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 45044552C47C60822FFC7FB5B55EF43725B60A3EA810014AEB8184C35AFFC9BA
 * Entry: 0x002b8c60, Ghidra index: 9861, label: FUN_002b8c60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002b8c60(void)

{
  uint uVar1;
  int in_EAX;
  int unaff_ESI;
  
  if ((in_EAX == 0) ||
     ((((uVar1 = *(uint *)(unaff_ESI + 8), (uVar1 & 1) == 0 || (*(int *)(in_EAX + 0x18) == 0)) &&
       (((uVar1 & 2) == 0 || ((*(byte *)(in_EAX + 0x70) & 0x10) != 0)))) &&
      (((uVar1 & 4) == 0 || ((*(byte *)(in_EAX + 0x70) & 0x10) == 0)))))) {
    if (*(int *)(in_EAX + 4) == 2) {
      (**(code **)(**(int **)(in_EAX + 0x7c) + 0x18))();
    }
    else if (*(int *)(in_EAX + 4) == 3) {
      FUN_002b89f0(unaff_ESI,in_EAX);
      return;
    }
  }
  return;
}
