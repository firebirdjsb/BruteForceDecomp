/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C7D08C6F89ED518197AF9ED2A46284AFDCC16F0F040E9EA2447867F132AE969B
 * Entry: 0x00271060, Ghidra index: 8807, label: FUN_00271060
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00271060(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                 undefined4 param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16,
                 undefined4 param_17)

{
  undefined4 *in_ECX;
  
  *in_ECX = param_1;
  in_ECX[5] = param_6;
  in_ECX[6] = param_7;
  in_ECX[7] = param_8;
  in_ECX[8] = param_9;
  in_ECX[0xd] = param_14;
  in_ECX[9] = param_10;
  in_ECX[10] = param_11;
  in_ECX[0xb] = param_12;
  in_ECX[0xc] = param_13;
  in_ECX[2] = param_3;
  in_ECX[3] = param_4;
  in_ECX[4] = param_5;
  in_ECX[0x10] = param_17;
  in_ECX[1] = param_2;
  in_ECX[0xe] = 0;
  in_ECX[0xf] = 0;
  return;
}
