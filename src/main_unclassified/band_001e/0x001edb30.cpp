/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E26A752A7FF3EC879678C53802B88A79C659EDBF09B0F1C67A3E16B61538F82E
 * Entry: 0x001edb30, Ghidra index: 6942, label: FUN_001edb30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Byte-returning 0x002E5880 callee reads implicit guest ECX.
 * Host C++ declaration matches existing draft only; ABI_UNVERIFIED. */
extern undefined1 FUN_002e5880(void);
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046cfd8;
extern uint32_t PTR_FUN_00396aa8;
void FUN_001edb30(undefined4 param_1)

{
  char cVar1;
  int unaff_ESI;
  undefined **local_20 [6];
  undefined4 local_8;
  undefined4 local_4;
  
  cVar1 = FUN_002e5880();
  if (cVar1 != '\0') {
    *(undefined1 *)(unaff_ESI + 0x5771) = 1;
    FUN_002e8c40();
    local_8 = param_1;
    local_20[0] = &PTR_FUN_00396aa8;
    local_4 = DAT_0046cfd8;
    FUN_002e7f50(0xfffffffc,local_20,1,1);
    FUN_002e8b80();
  }
  return;
}
