/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2EAD076E4034F7BD4091097F667A7369A2E31B201A1B2E96591A657F92CB03AD
 * Entry: 0x002a4e80, Ghidra index: 9555, label: FUN_002a4e80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_002a4e80(int *param_1)

{
  int iVar1;
  
  if (param_1[0x1b] != 0) {
    param_1[0x1b] = param_1[0x1b] + -1;
  }
  iVar1 = param_1[0x1b];
  if (iVar1 == 0) {
    param_1[0x1b] = 1;
    (**(code **)(*param_1 + 0x6c))(1);
    iVar1 = 0;
  }
  return iVar1;
}
