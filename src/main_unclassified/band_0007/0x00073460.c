/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6E0288F7590E13AB8352DA962B0EF5730268E5A64F96AC2B1C91037BFA38754E
 * Entry: 0x00073460, Ghidra index: 1296, label: FUN_00073460
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00073460(float param_1)

{
  int in_ECX;
  
  if (0.0 <= param_1) {
    if (10.0 < param_1) {
      param_1 = 10.0;
    }
  }
  else {
    param_1 = 0.0;
  }
  *(undefined4 *)(in_ECX + 0x7c) = 0x3f800000;
  *(float *)(in_ECX + 0x80) = (1.0 - *(float *)(in_ECX + 0x78)) * param_1;
  return;
}
