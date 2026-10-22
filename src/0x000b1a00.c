/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BDD6A3CBD490B7EB868BFC02049BB5D1E5DD71D800D38368022696FCCA9AE3FD
 * Entry: 0x000b1a00, Ghidra index: 2128, label: FUN_000b1a00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003a0004;
extern uint32_t PTR_LAB_0039fff0;
void FUN_000b1a00(void)

{
  undefined4 *in_EAX;
  int iVar1;
  undefined4 *puVar2;
  
  FUN_000b2230();
  *in_EAX = &PTR_FUN_003a0004;
  in_EAX[0xb] = &PTR_LAB_0039fff0;
  puVar2 = in_EAX + 0x19;
  for (iVar1 = 0xf; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  in_EAX[0x28] = 0;
  in_EAX[0x29] = 0;
  in_EAX[0x2a] = 0x3ecccccd;
  return;
}
