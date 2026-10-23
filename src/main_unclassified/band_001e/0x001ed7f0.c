/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D6C8E2C9722A966828425DC1C434D6E7C7E44AA1CD0CFFFD7A72B660727B0258
 * Entry: 0x001ed7f0, Ghidra index: 6937, label: FUN_001ed7f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039690c;
void FUN_001ed7f0(undefined4 param_1)

{
  int unaff_ESI;
  undefined **local_20 [6];
  undefined4 local_8;
  undefined4 local_4;
  
  if (*(int *)(unaff_ESI + 0x1c) != 0) {
    FUN_002e8c40();
    local_20[0] = &PTR_FUN_0039690c;
    local_8 = 0xffffffff;
    local_4 = param_1;
    FUN_002e7f50(0xfffffffb,local_20,1,1);
    FUN_002e8b80();
  }
  return;
}
