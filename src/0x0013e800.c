/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 793B11E56D85B39E3F2B6CB3BA69F9CE2C25892A0B0CDC7FEB2F0053C62DBFB6
 * Entry: 0x0013e800, Ghidra index: 4029, label: FUN_0013e800
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_0013e800(undefined4 *param_1,float param_2)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)fcos((float10)param_2);
  fVar2 = (float10)fsin((float10)param_2);
  *param_1 = 0x3f800000;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = (float)fVar1;
  param_1[5] = -(float)fVar2;
  param_1[6] = 0;
  param_1[7] = (float)fVar2;
  param_1[8] = (float)fVar1;
  return param_1;
}
