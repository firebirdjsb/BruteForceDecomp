/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 56D69AF0513BB8A9054C766444107689E139C6DC214F02F8C7907A5226E8714E
 * Entry: 0x000ec180, Ghidra index: 2920, label: FUN_000ec180
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039e608;
extern uint32_t PTR_FUN_0039e7e8;
extern uint32_t PTR_LAB_003a3f18;
void FUN_000ec180(void)

{
  undefined4 *in_EAX;
  
  FUN_00059b60();
  *in_EAX = &PTR_FUN_0039e608;
  in_EAX[2] = &PTR_LAB_003a3f18;
  in_EAX[3] = &PTR_FUN_0039e7e8;
  in_EAX[0xf] = 0;
  in_EAX[0x11] = 0;
  in_EAX[0x13] = 0;
  in_EAX[0x14] = 0xffffffff;
  return;
}
