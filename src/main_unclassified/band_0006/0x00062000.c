/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 573CB8AB02CE1D48BA9739A8FDB34554DD606E9F3F95688C6E9BF5D2EB2C1595
 * Entry: 0x00062000, Ghidra index: 1044, label: FUN_00062000
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00062000(int *param_1)

{
  int iVar1;
  
  if (param_1[0xc] != 0) {
    param_1[0xc] = param_1[0xc] + -1;
  }
  iVar1 = param_1[0xc];
  if (iVar1 == 0) {
    param_1[0xc] = 1;
    (**(code **)(*param_1 + 0x6c))(1);
    iVar1 = 0;
  }
  return iVar1;
}
