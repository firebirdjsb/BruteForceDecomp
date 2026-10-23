/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4D2862B65CB1228814F8196EB5C6FC91CC7E079B0FE45EC7272D5269368EB972
 * Entry: 0x002ba7f0, Ghidra index: 9885, label: FUN_002ba7f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float10 FUN_002ba7f0(undefined4 param_1,undefined4 param_2)

{
  undefined1 local_30 [12];
  undefined4 local_24;
  float local_20 [3];
  undefined4 local_14;
  undefined1 local_10 [12];
  undefined4 local_4;
  
  local_4 = 0;
  local_24 = 0;
  FUN_002bae30(param_1);
  local_14 = 0;
  FUN_002ba160(param_1,param_2,local_10,local_30,local_20);
  return (float10)1.0 /
         (float10)SQRT((float)local_20._4_8_ * (float)local_20._4_8_ +
                       SUB84(local_20._4_8_,4) * SUB84(local_20._4_8_,4) + local_20[0] * local_20[0]
                      );
}
