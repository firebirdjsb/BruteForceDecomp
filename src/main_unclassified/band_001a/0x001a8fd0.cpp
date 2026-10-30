/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 86857F3030F84C03F6B5E4A6D87E5B059AFA1F932B0FAB9CBF34D59C9162FA8F
 * Entry: 0x001a8fd0, Ghidra index: 5453, label: FUN_001a8fd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001a8fd0(void)

{
  int unaff_EBX;
  int iVar1;
  float10 fVar2;
  undefined4 uVar3;
  
  if (*(int *)(unaff_EBX + 4) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (*(int *)(unaff_EBX + 8) - *(int *)(unaff_EBX + 4)) / 0xc;
    if (iVar1 != 0) goto LAB_001a9009;
  }
  FUN_001afcf0();
LAB_001a9009:
  uVar3 = 0;
  fVar2 = (float10)FUN_0015ecf0(0);
  FUN_001b4e20(uVar3,(float)fVar2,0);
  return *(int *)(unaff_EBX + 4) + iVar1 * 0xc;
}
