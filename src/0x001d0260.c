/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 18858EF7F5460AB54C5529AEAF1AFE4DF65298CC9E91190033F90C9D142F6969
 * Entry: 0x001d0260, Ghidra index: 6163, label: FUN_001d0260
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001d0260(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  
  if (param_1 != param_2) {
    puVar1 = param_1 + 5;
    do {
      *param_1 = *in_ECX;
      puVar1[-4] = in_ECX[1];
      puVar1[-3] = in_ECX[2];
      puVar1[-2] = in_ECX[3];
      puVar1[-1] = in_ECX[4];
      *puVar1 = in_ECX[5];
      puVar1[1] = in_ECX[6];
      puVar1[2] = in_ECX[7];
      puVar1[3] = in_ECX[8];
      puVar1[4] = in_ECX[9];
      puVar1[5] = in_ECX[10];
      param_1 = param_1 + 0xb;
      puVar1 = puVar1 + 0xb;
    } while (param_1 != param_2);
  }
  return;
}
