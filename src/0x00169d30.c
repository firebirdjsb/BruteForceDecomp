/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9A7A0E9A3C1564F52477CCB02088164D167249E271F5A61FB2675703436668A6
 * Entry: 0x00169d30, Ghidra index: 4760, label: FUN_00169d30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00169d30(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  undefined4 *in_EAX;
  
  for (; (param_1 != param_2 && (param_1[3] != param_3)); param_1 = (undefined4 *)*param_1) {
  }
  *in_EAX = param_1;
  return;
}
