/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B9B257772ACEFC0E4B91EBC1483D6E51B7BBF0164F0FD830EF54E22A0D5DD62E
 * Entry: 0x00070090, Ghidra index: 1266, label: FUN_00070090
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00070090(float param_1,float param_2,float param_3,float param_4,float param_5,
                 float param_6)

{
  float fVar1;
  float fVar2;
  float *in_EAX;
  float *in_ECX;
  
  param_3 = param_3 - param_1;
  fVar1 = (param_3 * 3.0 - (param_2 + param_2 + param_4) * param_5) / (param_5 * param_5);
  fVar2 = (((param_2 + param_4) * param_5 - (param_3 + param_3)) / (param_5 * param_5 * param_5)) *
          param_6;
  *in_EAX = ((fVar1 + fVar2) * param_6 + param_2) * param_6 + param_1;
  *in_ECX = (fVar1 + fVar1 + fVar2 * 3.0) * param_6 + param_2;
  return;
}
