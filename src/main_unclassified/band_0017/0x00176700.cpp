/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 797431D434EEEAECF2C99A3E9D88E6F7D2DFAFAAE01C4BEEEE8A9D5BEC881FA7
 * Entry: 0x00176700, Ghidra index: 4938, label: FUN_00176700
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00176700(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *in_EAX;
  undefined4 *puVar2;
  
  if (param_1 == param_2) {
    *in_EAX = *param_3;
    return;
  }
  do {
    *param_3 = *param_1;
    param_3[1] = param_1[1];
    param_3[2] = param_1[2];
    puVar1 = param_1 + 3;
    param_1 = param_1 + 4;
    puVar2 = param_3 + 4;
    param_3[3] = *puVar1;
    param_3 = puVar2;
  } while (param_1 != param_2);
  *in_EAX = *puVar2;
  return;
}
