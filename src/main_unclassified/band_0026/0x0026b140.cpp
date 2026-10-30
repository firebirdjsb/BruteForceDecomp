/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5EBE8C824A7BDD200703F61C801ED907C4827E7E6D588A59A95492062E43D4A0
 * Entry: 0x0026b140, Ghidra index: 8758, label: FUN_0026b140
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0026b140(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[3];
  iVar1 = iVar2 + -1;
  param_1[3] = iVar1;
  if (iVar1 < 1) {
    param_1[3] = iVar2;
    (**(code **)(*param_1 + 0x4c))(1);
  }
  return iVar1;
}
