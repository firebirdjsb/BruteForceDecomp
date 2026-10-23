/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AFA60747CBDBB6354D92BA132F08DFFE6B397CBD7BCAA63ACE60D51A2EC06B0B
 * Entry: 0x002558c0, Ghidra index: 8423, label: FUN_002558c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_00393900;
void FUN_002558c0(void)

{
  undefined4 *in_EAX;
  
  in_EAX[1] = 0;
  in_EAX[2] = 0;
  in_EAX[3] = 0;
  in_EAX[4] = 0;
  in_EAX[5] = 0;
  in_EAX[6] = 0;
  in_EAX[7] = 7;
  in_EAX[9] = 0;
  in_EAX[10] = 0;
  in_EAX[0xb] = 0;
  *in_EAX = &PTR_LAB_00393900;
  in_EAX[0xa22] = 1;
  return;
}
