/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AE5475F252229DF47985ADE16E82ACF9903B6068DD25A4FF613CC45EBB5D5DCD
 * Entry: 0x000f6820, Ghidra index: 3080, label: FUN_000f6820
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000f6820(int *param_1,int *param_2,int *param_3)

{
  int *in_EAX;
  
  if (param_1 != param_2) {
    do {
      if (param_1[2] == *param_3) break;
      param_1 = (int *)*param_1;
    } while (param_1 != param_2);
  }
  *in_EAX = (int)param_1;
  return;
}
