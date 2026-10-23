/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 02C218A4A6C70C4C0F19269A1390332F5AC6845DF3945DFCAAF26B71BF42387B
 * Entry: 0x00212280, Ghidra index: 7437, label: FUN_00212280
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00212280(float param_1,float param_2,float param_3)

{
  float *unaff_ESI;
  float local_10;
  float local_c;
  float local_8 [2];
  
  FUN_00233020(param_1 * 0.017453292,&local_10,&local_c);
  FUN_00233020(param_2 * 0.017453292,local_8,&param_1);
  FUN_00233020(param_3 * 0.017453292,&param_2,&param_3);
  unaff_ESI[7] = local_10;
  *unaff_ESI = param_3 * param_1 - param_2 * local_8[0] * local_10;
  unaff_ESI[1] = -(local_8[0] * local_c);
  unaff_ESI[2] = param_3 * local_8[0] * local_10 + param_2 * param_1;
  unaff_ESI[3] = param_1 * local_10 * param_2 + param_3 * local_8[0];
  unaff_ESI[4] = param_1 * local_c;
  unaff_ESI[5] = param_2 * local_8[0] - param_1 * local_10 * param_3;
  unaff_ESI[6] = -(param_2 * local_c);
  unaff_ESI[8] = param_3 * local_c;
  return;
}
