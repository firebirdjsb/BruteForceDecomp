/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 064DF3D4B936C33B2C0410BECD81723CD87A430E899F4EE6C226F437FB391F5B
 * Entry: 0x00291de0, Ghidra index: 9241, label: FUN_00291de0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_003912bc;
void FUN_00291de0(undefined4 param_1,undefined2 param_2,int *param_3,int param_4)

{
  undefined4 *in_EAX;
  undefined4 *in_ECX;
  
  *in_EAX = &PTR_LAB_003912bc;
  in_EAX[1] = 0;
  in_EAX[1] = *in_ECX;
  *(undefined2 *)(in_EAX + 3) = param_2;
  *(undefined2 *)((int)in_EAX + 0xe) = 1;
  in_EAX[2] = *param_3 + param_4;
  return;
}
