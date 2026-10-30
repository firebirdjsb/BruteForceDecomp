/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 449A58074109D29EB16F6178BB47D48854D663715B645527E4CB1DEA768484AD
 * Entry: 0x000ec9f0, Ghidra index: 2937, label: FUN_000ec9f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039e7e8;
extern uint32_t PTR_FUN_0039e9a8;
extern uint32_t PTR_LAB_003a3f18;
void FUN_000ec9f0(void)

{
  undefined4 *in_EAX;
  
  FUN_00059b60();
  *in_EAX = &PTR_FUN_0039e9a8;
  in_EAX[2] = &PTR_LAB_003a3f18;
  in_EAX[3] = &PTR_FUN_0039e7e8;
  in_EAX[8] = 0x3ecccccd;
  return;
}
