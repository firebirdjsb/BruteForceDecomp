/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7E4E94E63943F80F44973BC94B0DA70E82F06638A26917932CF41048868970F6
 * Entry: 0x00229720, Ghidra index: 7670, label: FUN_00229720
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00394528;
extern uint32_t PTR_FUN_00394548;
extern uint32_t PTR_FUN_0039adec;
extern uint32_t PTR_FUN_0039efd0;
extern uint32_t PTR_FUN_0039efec;
extern uint32_t PTR_LAB_00394530;
extern uint32_t PTR_LAB_0039453c;
extern uint32_t PTR_LAB_00394544;
extern uint32_t PTR_LAB_0039a8c0;
extern uint32_t PTR_LAB_0039efdc;
void FUN_00229720(void)

{
  int in_EAX;
  undefined4 *in_ECX;
  
  if (in_EAX != 0) {
    in_ECX[0x13] = &DAT_00394528;
    in_ECX[0xed] = &PTR_FUN_0039efec;
    in_ECX[0xec] = &PTR_LAB_0039efdc;
    in_ECX[0xed] = &PTR_FUN_0039efd0;
  }
  FUN_0022d330();
  *in_ECX = &PTR_FUN_00394548;
  in_ECX[0x12] = &PTR_FUN_0039adec;
  in_ECX[0x1a] = &PTR_LAB_0039a8c0;
  in_ECX[0x74] = &PTR_LAB_00394544;
  *(undefined ***)(*(int *)(in_ECX[0x13] + 4) + 0x4c + (int)in_ECX) = &PTR_LAB_0039453c;
  *(undefined ***)(*(int *)(in_ECX[0x13] + 4) + 0x50 + (int)in_ECX) = &PTR_LAB_00394530;
  *(int *)(*(int *)(in_ECX[0x13] + 4) + 0x48 + (int)in_ECX) = *(int *)(in_ECX[0x13] + 4) + -0x364;
  in_ECX[0xe1] = 0;
  in_ECX[0xe2] = 0x42c80000;
  in_ECX[0xe3] = 0x42c80000;
  in_ECX[0xde] = 0;
  in_ECX[0xe4] = 0;
  in_ECX[0xe6] = 0;
  in_ECX[0xe5] = 0;
  in_ECX[0xe7] = 0;
  in_ECX[0xe8] = 0;
  in_ECX[0xe9] = 0;
  *(byte *)(in_ECX + 0xdf) = *(byte *)(in_ECX + 0xdf) & 0xfb | 3;
  in_ECX[0xea] = 0x3e99999a;
  return;
}
