/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3EC382CE63E264E4EF6A09E9FCBD943531E15541B04909F6B1AF58C138F98E7C
 * Entry: 0x002a2670, Ghidra index: 9519, label: FUN_002a2670
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_002a2670(int *param_1)

{
  int iVar1;
  
  if (param_1[0x28] != 0) {
    param_1[0x28] = param_1[0x28] + -1;
  }
  iVar1 = param_1[0x28];
  if (iVar1 == 0) {
    param_1[0x28] = 1;
    (**(code **)(*param_1 + 0x6c))(1);
    iVar1 = 0;
  }
  return iVar1;
}
