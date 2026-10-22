/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 65ED94FEEE496DE17834AE9C0385EEAA84E648142F6497C44F2C0EA060E77486
 * Entry: 0x001a6770, Ghidra index: 5363, label: FUN_001a6770
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001a6770(int *param_1)

{
  int iVar1;
  
  if (param_1[0xe] != 0) {
    param_1[0xe] = param_1[0xe] + -1;
  }
  iVar1 = param_1[0xe];
  if (iVar1 == 0) {
    param_1[0xe] = 1;
    (**(code **)(*param_1 + 0x44))(1);
    iVar1 = 0;
  }
  return iVar1;
}
