/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F138A2E6BEBD37A0D23C9D350E1662DF8208AB955CADD898958A4FDD45725F26
 * Entry: 0x0015f700, Ghidra index: 4576, label: FUN_0015f700
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039be64;
extern uint32_t PTR_FUN_0039bf7c;
extern uint32_t PTR_LAB_0039dfa4;
void FUN_0015f700(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = PTR_FUN_0039bf7c;
  FUN_002107d0(*(undefined4 *)(in_ECX[5] + 0x54c),0);
  *in_ECX = &PTR_FUN_0039be64;
  if (in_ECX[9] != 0) {
    FUN_0008f6e0();
  }
  if (in_ECX[7] != 0) {
    FUN_0008f6e0();
  }
  if (in_ECX[5] != 0) {
    FUN_0008f6e0();
  }
  *in_ECX = &PTR_LAB_0039dfa4;
  return;
}
