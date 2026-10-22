/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 07EBFBDAC56C950476CB239219F77A05F83ACBECA8BBA8A81A42A62DA7F14223
 * Entry: 0x003840c1, Ghidra index: 13640, label: FUN_003840c1
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_003840c1(int param_1,undefined4 param_2)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)FUN_00380fc4();
  if ((*pbVar1 & 2) == 0) {
    if (*(int *)(param_1 + 4) < 0) {
      pbVar1[6] = pbVar1[6] + 1;
      if (pbVar1[6] < 4) {
        *(undefined4 *)(param_1 + 0x14) = 4;
        FUN_00381379(param_1);
      }
      else {
        *pbVar1 = *pbVar1 | 8;
        FUN_00382571();
      }
    }
    else {
      pbVar1[6] = 0;
      FUN_00383d44(param_2);
    }
  }
  else {
    FUN_00383ffe(param_2);
  }
  return;
}
