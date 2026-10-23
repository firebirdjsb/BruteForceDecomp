/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AAFE4EEA344F1F9B2816C799E304DC62A3749AED65E21B9BE1A1EE96BF012E14
 * Entry: 0x00061330, Ghidra index: 1019, label: FUN_00061330
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00061330(int *param_1)

{
  int iVar1;
  
  if (param_1[0x24] != 0) {
    param_1[0x24] = param_1[0x24] + -1;
  }
  iVar1 = param_1[0x24];
  if (iVar1 == 0) {
    param_1[0x24] = 1;
    (**(code **)(*param_1 + 0x6c))(1);
    iVar1 = 0;
  }
  return iVar1;
}
