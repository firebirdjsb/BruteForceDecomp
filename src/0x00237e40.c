/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E8D598D035DEE00D6953B7E238839C40896BC1109EE0263AABF497A5E2029507
 * Entry: 0x00237e40, Ghidra index: 7858, label: FUN_00237e40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469900;
extern uint32_t DAT_00469901;
extern uint32_t DAT_0046cf94;
extern uint32_t DAT_0046cf98;
extern uint32_t DAT_0046cfa0;
void FUN_00237e40(void)

{
  bool bVar1;
  uint unaff_ESI;
  
  RtlEnterCriticalSection(&DAT_0046cfa0);
  bVar1 = false;
  if ((DAT_0046cf94 <= unaff_ESI) && (unaff_ESI < DAT_0046cf98)) {
    bVar1 = true;
  }
  if (((DAT_00469900 == '\0') || (DAT_00469901 != '\0')) || (!bVar1)) {
    FUN_00259080();
  }
  RtlLeaveCriticalSection(&DAT_0046cfa0);
  return;
}
