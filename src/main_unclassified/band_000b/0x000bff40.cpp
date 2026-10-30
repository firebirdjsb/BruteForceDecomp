/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EE3D98E026FE0ADCCCF6CF49A926D0B41E1ADEE380DF6C624E3D496A52A54F92
 * Entry: 0x000bff40, Ghidra index: 2336, label: FUN_000bff40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_000bff40(undefined4 param_1,float param_2,float *param_3)

{
  float fVar1;
  float local_18;
  float local_14;
  float local_10;
  
  FUN_00232180(0);
  fVar1 = (local_14 - param_3[1]) * (local_14 - param_3[1]) +
          (local_10 - param_3[2]) * (local_10 - param_3[2]) +
          (local_18 - *param_3) * (local_18 - *param_3);
  if (fVar1 < param_2 != (fVar1 == param_2)) {
    return 1;
  }
  return 0;
}
