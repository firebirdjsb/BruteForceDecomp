/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BE5DBE94D483EFA21A9329766D6EBC31D38327D79D8384A18F5A07BE4BF28D97
 * Entry: 0x001e23d0, Ghidra index: 6747, label: FUN_001e23d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int * FUN_001e23d0(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int unaff_ESI;
  
  iVar2 = param_2;
  piVar1 = param_1;
  FUN_001e30f0(&param_1,param_2 + 0x1c,*(undefined4 *)(unaff_ESI + 8),param_2,param_1);
  FUN_000762d0();
  *(int *)(unaff_ESI + 8) = *(int *)(unaff_ESI + 8) + -0x1c;
  *piVar1 = iVar2;
  return piVar1;
}
