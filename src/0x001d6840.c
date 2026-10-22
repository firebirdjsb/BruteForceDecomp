/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C3B9515121E45B180301364EFEEDCC366A064C6F71FF9AA4614A326BC9447D25
 * Entry: 0x001d6840, Ghidra index: 6366, label: FUN_001d6840
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001d6840(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *in_EAX;
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (param_1 == param_2) {
    *in_EAX = param_3;
    return;
  }
  do {
    puVar1 = param_2 + -3;
    puVar2 = param_3 + -3;
    *puVar2 = *puVar1;
    param_3[-2] = param_2[-2];
    param_3[-1] = param_2[-1];
    param_2 = puVar1;
    param_3 = puVar2;
  } while (puVar1 != param_1);
  *in_EAX = puVar2;
  return;
}
