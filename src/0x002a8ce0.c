/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B5980F19CD4D584A756E9414DA60B327AB67B74C272CB2A8451B6EDB76AF5AAC
 * Entry: 0x002a8ce0, Ghidra index: 9625, label: FUN_002a8ce0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046cfdc;
float * FUN_002a8ce0(undefined4 param_1,float *param_2)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  undefined1 in_XMM0 [16];
  undefined1 auVar4 [16];
  
  uVar1 = DAT_0046cfdc * 0x19660d + 0x3c6ef35f;
  uVar2 = uVar1 * 0x19660d + 0x3c6ef35f;
  DAT_0046cfdc = uVar2 * 0x19660d + 0x3c6ef35f;
  *param_2 = (float)(DAT_0046cfdc >> 9 | 0x40000000) - 3.0;
  param_2[1] = (float)(uVar2 >> 9 | 0x40000000) - 3.0;
  param_2[2] = (float)(uVar1 >> 9 | 0x40000000) - 3.0;
  auVar4 = rsqrtss(in_XMM0,param_2[2] * param_2[2] + param_2[1] * param_2[1] + *param_2 * *param_2);
  fVar3 = auVar4._0_4_;
  *param_2 = fVar3 * *param_2;
  param_2[1] = fVar3 * param_2[1];
  param_2[2] = fVar3 * param_2[2];
  return param_2;
}
