/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 106FCC2EB1739A4A800AAAFDC8A957C7A03883528ED33AD6F48A435B81D43C4E
 * Entry: 0x001edbf0, Ghidra index: 6943, label: FUN_001edbf0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00396954;
void FUN_001edbf0(void)

{
  undefined **local_18 [6];
  
  FUN_002e8c40();
  local_18[0] = &PTR_FUN_00396954;
  FUN_002e7f50(0xfffffffb,local_18,1,1);
  FUN_002e8b80();
  return;
}
