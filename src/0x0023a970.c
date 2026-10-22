/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4D395A89213B8BAC1EEABC75CD0A11540C101C0D7752CBDBE7E262356B5DFC24
 * Entry: 0x0023a970, Ghidra index: 7904, label: FUN_0023a970
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0023a970(int *param_1,int param_2,undefined1 param_3)

{
  int iVar1;
  
  if ((((char)param_1[1] == '\0') && (param_1[2] != 0)) &&
     (iVar1 = (**(code **)(*param_1 + 0x14))(param_1,param_1[2]), iVar1 < 0)) {
    return iVar1;
  }
  *(undefined1 *)(param_1 + 1) = param_3;
  param_1[2] = param_2;
  return 0;
}
