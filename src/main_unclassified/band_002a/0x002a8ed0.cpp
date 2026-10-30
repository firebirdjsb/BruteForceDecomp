/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E5089A56791B7BA5A45C3CEE4439D687D83BD7265B81A6722D374C06E16FBE34
 * Entry: 0x002a8ed0, Ghidra index: 9627, label: FUN_002a8ed0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_002a8ed0(int *param_1)

{
  int iVar1;
  
  if (param_1[0x15] != 0) {
    param_1[0x15] = param_1[0x15] + -1;
  }
  iVar1 = param_1[0x15];
  if (iVar1 == 0) {
    param_1[0x15] = 1;
    (**(code **)(*param_1 + 0x6c))(1);
    iVar1 = 0;
  }
  return iVar1;
}
