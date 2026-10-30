/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EDEF318EFB7D72698B716CEFA9E26E85330D2CC12BCD7ACC509DF7997DAE20F4
 * Entry: 0x001d1480, Ghidra index: 6245, label: FUN_001d1480
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001d1480(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *in_EDX;
  
  if (param_1 != param_2) {
    puVar1 = param_1 + 2;
    do {
      *param_1 = *in_EDX;
      puVar1[-1] = in_EDX[1];
      *puVar1 = in_EDX[2];
      puVar1[1] = in_EDX[3];
      puVar1[2] = in_EDX[4];
      puVar1[3] = in_EDX[5];
      puVar1[4] = in_EDX[6];
      puVar1[5] = in_EDX[7];
      param_1 = param_1 + 8;
      puVar1 = puVar1 + 8;
    } while (param_1 != param_2);
  }
  return;
}
