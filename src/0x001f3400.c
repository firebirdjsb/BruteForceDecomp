/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 033ED27C2BCC4E583908C1CF0A62BBF739C43C41AFF7EE8BB935A0C7E366E0B8
 * Entry: 0x001f3400, Ghidra index: 7018, label: FUN_001f3400
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001f3400(undefined4 param_1,float *param_2,float *param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 in_XMM0 [16];
  undefined1 auVar4 [16];
  
  fVar2 = *param_2 * *param_2 + *param_3 * *param_3;
  if (fVar2 <= param_4 * param_4) {
    *param_3 = 0.0;
    *param_2 = 0.0;
    return;
  }
  auVar4 = rsqrtss(in_XMM0,fVar2);
  fVar3 = auVar4._0_4_;
  fVar1 = *param_3;
  fVar2 = (fVar3 * fVar2 - param_4) / (1.0 - param_4);
  *param_2 = fVar3 * *param_2 * fVar2;
  *param_3 = fVar3 * fVar1 * fVar2;
  return;
}
