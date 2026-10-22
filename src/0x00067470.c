/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 30B9DBDC6231494617C63B491AE17B27EF20B46A6336A0B6ADC23B0DBD490E03
 * Entry: 0x00067470, Ghidra index: 1127, label: FUN_00067470
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00067470(int *param_1)

{
  int iVar1;
  
  if (param_1[0x23] != 0) {
    param_1[0x23] = param_1[0x23] + -1;
  }
  iVar1 = param_1[0x23];
  if (iVar1 == 0) {
    param_1[0x23] = 1;
    (**(code **)(*param_1 + 0x6c))(1);
    iVar1 = 0;
  }
  return iVar1;
}
