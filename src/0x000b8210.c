/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5CEC2E1268710C9CA97FB4C871F5CAD121DFDBCD4E249EE1A24BF0486EFDC4BF
 * Entry: 0x000b8210, Ghidra index: 2217, label: FUN_000b8210
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039fc84;
extern uint32_t PTR_LAB_0039fc70;
void FUN_000b8210(void)

{
  undefined4 *in_EAX;
  
  FUN_000b2230();
  *in_EAX = &PTR_FUN_0039fc84;
  in_EAX[0xb] = &PTR_LAB_0039fc70;
  in_EAX[0x1e] = 0;
  in_EAX[0x19] = 0;
  *(undefined2 *)(in_EAX + 2) = 0;
  *(undefined2 *)((int)in_EAX + 10) = 0;
  in_EAX[0x1c] = 0;
  in_EAX[0x1b] = 0;
  in_EAX[7] = 3;
  return;
}
