/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6E5D6A30084232261E1BDFD24D27010D4DECF7B60F7E3B5E36D5E7D1374CE2FD
 * Entry: 0x002d34c0, Ghidra index: 10199, label: FUN_002d34c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002d34c0(int param_1)

{
  float local_20 [3];
  undefined4 local_14;
  float local_10 [3];
  undefined4 local_4;
  
  local_14 = 0;
  local_4 = 0;
  FUN_002ba160(*(undefined4 *)(param_1 + 0xec),*(undefined4 *)(param_1 + 0xf4),param_1 + 0x44,
               param_1 + 0x24,local_20);
  FUN_002ba160(*(undefined4 *)(param_1 + 0xf0),*(undefined4 *)(param_1 + 0xf8),param_1 + 0x54,
               param_1 + 0x34,local_10);
  *(float *)(param_1 + 0xa4) = local_10[0] - local_20[0];
  *(ulonglong *)(param_1 + 0xa8) =
       CONCAT44(SUB84(local_10._4_8_,4) - SUB84(local_20._4_8_,4),
                (float)local_10._4_8_ - (float)local_20._4_8_);
  return;
}
