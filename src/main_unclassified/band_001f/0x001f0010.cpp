/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6B65A41A48859622FCCFD3DC5C0F0B6078C1E48E4A6F99BAD8B0C5AB03330B00
 * Entry: 0x001f0010, Ghidra index: 6972, label: FUN_001f0010
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
extern uint32_t PTR_FUN_00396a14;
void FUN_001f0010(void)

{
  char cVar1;
  undefined **appuStack_18 [6];
  
  cVar1 = FUN_002e5880();
  if (cVar1 != '\0') {
    FUN_002e8c40();
    appuStack_18[0] = &PTR_FUN_00396a14;
    FUN_002e7f50(0xfffffffc,appuStack_18,1,1);
    FUN_002e8b80();
  }
  return;
}
