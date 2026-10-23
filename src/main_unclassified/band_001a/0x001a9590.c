/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4EC3998F6DF02FEDC3884F778BF158E8DA16AFA760B8894D504FEEC3F168525B
 * Entry: 0x001a9590, Ghidra index: 5466, label: FUN_001a9590
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001a9590(undefined4 param_1)

{
  int unaff_ESI;
  int iVar1;
  
  if (*(int *)(unaff_ESI + 4) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (*(int *)(unaff_ESI + 8) - *(int *)(unaff_ESI + 4)) / 0x4c;
    if (iVar1 != 0) goto LAB_001a95cb;
  }
  FUN_001b0820(param_1);
LAB_001a95cb:
  FUN_001b54f0();
  return iVar1 * 0x4c + *(int *)(unaff_ESI + 4);
}
