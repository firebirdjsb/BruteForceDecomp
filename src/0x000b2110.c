/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6C47259A1B1241F70EB9A8E2BC5467638393B23BC7C4B76D10F4BADB034FA1A8
 * Entry: 0x000b2110, Ghidra index: 2139, label: FUN_000b2110
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_000b2110(byte *param_1,undefined4 *param_2)

{
  float fVar1;
  undefined4 local_8;
  
  fVar1 = *(float *)(param_1 + 0xc) / *(float *)(param_1 + 8);
  local_8 = CONCAT13(param_1[3] +
                     (char)(int)((float)(int)((uint)param_1[7] - (uint)param_1[3]) * fVar1),
                     CONCAT12(param_1[2] +
                              (char)(int)((float)(int)((uint)param_1[6] - (uint)param_1[2]) * fVar1)
                              ,CONCAT11(param_1[1] +
                                        (char)(int)((float)(int)((uint)param_1[5] - (uint)param_1[1]
                                                                ) * fVar1),
                                        *param_1 +
                                        (char)(int)((float)(int)((uint)param_1[4] - (uint)*param_1)
                                                   * fVar1))));
  *param_2 = local_8;
  return param_2;
}
