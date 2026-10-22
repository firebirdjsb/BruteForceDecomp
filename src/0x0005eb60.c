/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 91BB81DD165B9666E166D83EF67CFBF28986E14B0E288D9F306CE5AE0AD95AF5
 * Entry: 0x0005eb60, Ghidra index: 993, label: FUN_0005eb60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int * FUN_0005eb60(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int unaff_ESI;
  
  iVar2 = param_2;
  piVar1 = param_1;
  FUN_00045180(&param_1,param_2 + 8,*(undefined4 *)(unaff_ESI + 8),param_2,param_1);
  FUN_0001d590();
  *(int *)(unaff_ESI + 8) = *(int *)(unaff_ESI + 8) + -8;
  *piVar1 = iVar2;
  return piVar1;
}
