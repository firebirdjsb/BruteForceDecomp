/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 886E1D1A433EAEF190E189A78286C6614D3E05A9D802FB87B1EC9A397E405F65
 * Entry: 0x0013e740, Ghidra index: 4028, label: FUN_0013e740
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046cfd8;
void FUN_0013e740(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *in_EAX;
  float *in_ECX;
  uint uVar7;
  int in_EDX;
  
  fVar1 = *in_ECX;
  fVar4 = in_ECX[2];
  uVar7 = DAT_0046cfd8 * 0x19660d + 0x3c6ef35f;
  DAT_0046cfd8 = uVar7 * 0x19660d + 0x3c6ef35f;
  fVar5 = ((float)(uVar7 >> 9 | 0x3f800000) - 1.0) * *(float *)(in_EDX + 0x20);
  fVar2 = *(float *)(in_EDX + 0x20);
  fVar6 = ((float)(DAT_0046cfd8 >> 9 | 0x3f800000) - 1.0) * *(float *)(in_EDX + 0x20);
  fVar3 = *(float *)(in_EDX + 0x20);
  in_EAX[1] = in_ECX[1];
  *in_EAX = ((fVar5 + fVar5) - fVar2) + fVar1;
  in_EAX[2] = ((fVar6 + fVar6) - fVar3) + fVar4;
  return;
}
