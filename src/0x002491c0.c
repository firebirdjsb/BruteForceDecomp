/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 436722C821848461DA80971C649F70E6AEAB064799D87796608B67D3CF81CD87
 * Entry: 0x002491c0, Ghidra index: 8156, label: FUN_002491c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002491c0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *in_ECX;
  
  if (param_1 != param_2) {
    do {
      *param_1 = *in_ECX;
      param_1[1] = in_ECX[1];
      param_1[2] = in_ECX[2];
      param_1[3] = in_ECX[3];
      param_1[4] = in_ECX[4];
      param_1[5] = in_ECX[5];
      param_1[6] = in_ECX[6];
      param_1[7] = in_ECX[7];
      param_1[8] = in_ECX[8];
      param_1[9] = in_ECX[9];
      param_1[10] = in_ECX[10];
      param_1[0xb] = in_ECX[0xb];
      param_1 = param_1 + 0xc;
    } while (param_1 != param_2);
  }
  return;
}
