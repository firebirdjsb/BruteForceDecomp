/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 03104449F9FAFC009931869F46489F3626864735F8F99A89B69C5A474CAF4F1A
 * Entry: 0x001e8df0, Ghidra index: 6848, label: FUN_001e8df0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001e8df0(float param_1)

{
  int iVar1;
  int iVar2;
  int unaff_ESI;
  undefined1 local_14 [8];
  float local_c;
  undefined4 local_8;
  int local_4;
  
  local_c = param_1 + *(float *)(unaff_ESI + 4);
  local_8 = *(undefined4 *)(unaff_ESI + 4);
  local_4 = *(int *)(unaff_ESI + 0x18);
  *(int *)(unaff_ESI + 0x18) = local_4 + 1;
  iVar1 = *(int *)(unaff_ESI + 0xc);
  iVar2 = FUN_00129f40(unaff_ESI + 8,iVar1,*(undefined4 *)(iVar1 + 4),local_14);
  FUN_0027a650();
  *(int *)(iVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  if (*(int *)(unaff_ESI + 0x18) == 0) {
    *(undefined4 *)(unaff_ESI + 0x18) = 1;
  }
  return local_4;
}
