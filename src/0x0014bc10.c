/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6C5DB72422ECD3C49FCA7E547B3BFB76DCD88751A7FFAD090227C3C5A80FF512
 * Entry: 0x0014bc10, Ghidra index: 4324, label: FUN_0014bc10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0014bc10(void)

{
  int *piVar1;
  int in_EDX;
  int unaff_ESI;
  
  *(int *)(unaff_ESI + 0xb8) = in_EDX;
  for (piVar1 = *(int **)(in_EDX + 0x2c); piVar1 != *(int **)(in_EDX + 0x30); piVar1 = piVar1 + 1) {
    if (unaff_ESI == *piVar1) goto LAB_0014bc3c;
  }
  FUN_001611d0();
LAB_0014bc3c:
  FUN_0014c0f0(unaff_ESI);
  return;
}
