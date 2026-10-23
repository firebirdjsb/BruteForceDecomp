/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 81E8DAA54E4DB935073869B074F29109263AE3ECDB4E015B8B40BA804C3D805A
 * Entry: 0x00085540, Ghidra index: 1560, label: FUN_00085540
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int * FUN_00085540(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int unaff_ESI;
  
  iVar2 = param_2;
  piVar1 = param_1;
  FUN_00086990(&param_1,param_2 + 0x3c,*(undefined4 *)(unaff_ESI + 8),param_2,param_1);
  FUN_00086a20();
  *(int *)(unaff_ESI + 8) = *(int *)(unaff_ESI + 8) + -0x3c;
  *piVar1 = iVar2;
  return piVar1;
}
