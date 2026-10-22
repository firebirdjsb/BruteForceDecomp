/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C9C2EC43EC7CCA0F6BB11DB432F11494057FE105AFD7AC47537B9C371E8FDC22
 * Entry: 0x000ebdc0, Ghidra index: 2911, label: FUN_000ebdc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039ec08;
extern uint32_t PTR_LAB_0039ee54;
extern uint32_t PTR_LAB_003a3f18;
void FUN_000ebdc0(void)

{
  undefined4 *in_EAX;
  
  FUN_00059b60();
  in_EAX[0x15] = 0;
  in_EAX[0x14] = 0;
  in_EAX[0x13] = 0;
  in_EAX[0x11] = 0;
  in_EAX[0x10] = 0;
  in_EAX[0xf] = 0;
  in_EAX[0x16] = 0x3f800000;
  in_EAX[0x12] = 0x3f800000;
  in_EAX[0xe] = 0x3f800000;
  *in_EAX = &PTR_FUN_0039ec08;
  in_EAX[2] = &PTR_LAB_003a3f18;
  in_EAX[3] = &PTR_LAB_0039ee54;
  in_EAX[0x17] = 0x42c80000;
  in_EAX[0x18] = 0x43960000;
  return;
}
