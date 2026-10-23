/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2835718E3B3E5313629712C8DA44357C7B5B5CE0C00E7A00A81E5F90393181B4
 * Entry: 0x000ef880, Ghidra index: 2978, label: FUN_000ef880
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_000ef880(int param_1,undefined4 *param_2,byte *param_3,byte *param_4)

{
  float local_c;
  undefined4 local_8;
  
  local_c = 1.0 - *(float *)(param_1 + 0x20) / *(float *)(param_1 + 0x1c);
  if (0.0 <= local_c) {
    if (1.0 < local_c) {
      local_c = 1.0;
    }
  }
  else {
    local_c = 0.0;
  }
  local_8 = CONCAT13(param_3[3] +
                     (char)(int)((float)(int)((uint)param_4[3] - (uint)param_3[3]) * local_c),
                     CONCAT12(param_3[2] +
                              (char)(int)((float)(int)((uint)param_4[2] - (uint)param_3[2]) *
                                         local_c),
                              CONCAT11(param_3[1] +
                                       (char)(int)((float)(int)((uint)param_4[1] - (uint)param_3[1])
                                                  * local_c),
                                       *param_3 +
                                       (char)(int)((float)(int)((uint)*param_4 - (uint)*param_3) *
                                                  local_c))));
  *param_2 = local_8;
  return param_2;
}
