/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7BB467F812E4C8790EA318F82DE0036F7CF63F61C8BDE62B2B98030B83D03FD2
 * Entry: 0x0012af50, Ghidra index: 3777, label: FUN_0012af50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0012af50(int *param_1,int *param_2,int *param_3)

{
  undefined4 *in_EAX;
  
  if (param_1 != param_2) {
    do {
      if (*param_1 == *param_3) break;
      param_1 = param_1 + 1;
    } while (param_1 != param_2);
  }
  *in_EAX = param_1;
  return;
}
