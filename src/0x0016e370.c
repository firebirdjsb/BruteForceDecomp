/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C10C5B864B63DD655B3F70C317F203D243F58A2661A6E1557C5A35C00B21DC87
 * Entry: 0x0016e370, Ghidra index: 4814, label: FUN_0016e370
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0016e370(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  for (param_2 = param_2 - (int)param_1; 1 < param_2 >> 2; param_2 = param_2 + -4) {
    uVar1 = *(undefined4 *)((int)param_1 + param_2 + -4);
    *(undefined4 *)((int)param_1 + param_2 + -4) = *param_1;
    FUN_0016eaf0(param_1,uVar1,param_3);
  }
  return;
}
