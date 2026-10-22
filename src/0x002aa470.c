/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 438BC43339177EE217BC9E238918668A40AC09A6DE0A305A28F6B7CDAE01A988
 * Entry: 0x002aa470, Ghidra index: 9645, label: FUN_002aa470
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_002aa470(int *param_1)

{
  int iVar1;
  
  if (param_1[0x17] != 0) {
    param_1[0x17] = param_1[0x17] + -1;
  }
  iVar1 = param_1[0x17];
  if (iVar1 == 0) {
    param_1[0x17] = 1;
    (**(code **)(*param_1 + 0x6c))(1);
    iVar1 = 0;
  }
  return iVar1;
}
