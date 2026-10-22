/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E879A425103FA6F5D5DF2142754E65704F467C5DA0A7B470B20EC9458CFCC172
 * Entry: 0x000582a0, Ghidra index: 865, label: FUN_000582a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int * FUN_000582a0(int *param_1,int param_2,int param_3,int param_4)

{
  if (param_2 == param_3) {
    *param_1 = param_4;
    return param_1;
  }
  do {
    if (param_2 != param_4) {
      FUN_00056c20();
    }
    param_2 = param_2 + 0x1c;
    param_4 = param_4 + 0x1c;
  } while (param_2 != param_3);
  *param_1 = param_4;
  return param_1;
}
