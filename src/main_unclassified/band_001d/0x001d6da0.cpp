/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C8E87014F0568454AC0FE2C637BA07EB867D9099C6F2FBE3E5ABCE79F221CC99
 * Entry: 0x001d6da0, Ghidra index: 6379, label: FUN_001d6da0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_001d6da0(undefined4 *param_1,int param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  
  if (param_2 == param_3) {
    *param_1 = param_4;
    return param_1;
  }
  do {
    iVar1 = param_3 + -0x14;
    param_4 = param_4 + -5;
    *param_4 = *(undefined4 *)(param_3 + -0x14);
    FUN_001d4290(param_3 + -0x10);
    param_3 = iVar1;
  } while (iVar1 != param_2);
  *param_1 = param_4;
  return param_1;
}
