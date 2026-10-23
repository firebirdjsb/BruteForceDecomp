/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 49C1592B453A4D9E6D534CD2C05E0CF496B0E97361C5B6361D7C18EFED5CFB42
 * Entry: 0x002a4090, Ghidra index: 9541, label: FUN_002a4090
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_002a4090(int *param_1)

{
  int iVar1;
  
  if (param_1[0x21] != 0) {
    param_1[0x21] = param_1[0x21] + -1;
  }
  iVar1 = param_1[0x21];
  if (iVar1 == 0) {
    param_1[0x21] = 1;
    (**(code **)(*param_1 + 0x6c))(1);
    iVar1 = 0;
  }
  return iVar1;
}
