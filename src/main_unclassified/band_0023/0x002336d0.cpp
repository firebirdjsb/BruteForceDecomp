/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 32C0943726E3E1DB6E34900D11A353C763C76DF26840D9B64B8C95B83FFE2A86
 * Entry: 0x002336d0, Ghidra index: 7785, label: FUN_002336d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002336d0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  float *unaff_ESI;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  FUN_00233020(param_1,&local_c,&local_4);
  FUN_00233020(param_2,&local_10,&local_8);
  FUN_00233020(param_3,&local_18,&local_14);
  *unaff_ESI = local_14 * local_8;
  unaff_ESI[1] = local_10 * local_c * local_14 - local_18 * local_4;
  unaff_ESI[2] = local_18 * local_c + local_10 * local_14 * local_4;
  unaff_ESI[3] = local_18 * local_8;
  unaff_ESI[4] = local_10 * local_c * local_18 + local_14 * local_4;
  unaff_ESI[5] = local_18 * local_4 * local_10 - local_14 * local_c;
  unaff_ESI[6] = -local_10;
  unaff_ESI[7] = local_8 * local_c;
  unaff_ESI[8] = local_8 * local_4;
  return;
}
