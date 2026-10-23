/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 804735E9AE2097601449A4E698890B9DC8BE7F5D9C4ED45729DFF841C1641DA9
 * Entry: 0x0034a9bb, Ghidra index: 12940, label: FUN_0034a9bb
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0034a9bb(byte *param_1,int param_2)

{
  param_1[2] = 6;
  if ((*param_1 & 4) != 0) {
    FUN_0034886e();
    if (*(int *)(param_1 + 0x128) != 0) {
      FUN_0034fd39(param_1);
    }
  }
  if (*(int *)(param_1 + 0x2c) == 0) {
    if (param_2 != 0) {
      FUN_00349366(param_1,0x5301,0,0,0,0);
    }
  }
  else {
    FUN_0034a993(param_1);
  }
  return;
}
