/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CF5979AE99B26CE9CFD4C35066E2C2A423FD0BF7BB6B50D7D7E88A9BAF51F4BE
 * Entry: 0x000a6a70, Ghidra index: 1974, label: FUN_000a6a70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003a07a8;
extern uint32_t PTR_LAB_003a0710;
extern uint32_t PTR_LAB_003a0f0c;
void FUN_000a6a70(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *in_EAX;
  int unaff_EBX;
  
  in_EAX[1] = 0;
  in_EAX[2] = 0;
  *in_EAX = &PTR_FUN_003a07a8;
  in_EAX[0x6c] = 0;
  in_EAX[0x6d] = 0;
  FUN_000a5300(0);
  *in_EAX = &PTR_LAB_003a0710;
  puVar1 = in_EAX + 0x6f;
  *puVar1 = &PTR_LAB_003a0f0c;
  in_EAX[0x70] = 1;
  in_EAX[0x71] = in_EAX;
  iVar2 = *(int *)(unaff_EBX + 8);
  in_EAX[0x6e] = iVar2;
  if (iVar2 == 0) {
    in_EAX[0x6e] = puVar1;
    return;
  }
  **(int **)(unaff_EBX + 0xc) = (int)puVar1;
  return;
}
