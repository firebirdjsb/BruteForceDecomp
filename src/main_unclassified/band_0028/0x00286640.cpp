/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8E4117FE6B3286A5A513B1BF87EF6CFBD6297BBD205AF6DA459CE635B3638DDE
 * Entry: 0x00286640, Ghidra index: 9081, label: FUN_00286640
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00286640(int *param_1)

{
  int iVar1;
  
  if (param_1[2] != 0) {
    param_1[2] = param_1[2] + -1;
  }
  iVar1 = param_1[2];
  if (iVar1 == 0) {
    param_1[2] = 1;
    (**(code **)(*param_1 + 0x1c))(1);
    iVar1 = 0;
  }
  return iVar1;
}
