/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 32897707842E2EEF2AF698BBC18F6C48264EB14A7C63CABFEE4339CCFDF73C35
 * Entry: 0x001cd210, Ghidra index: 5961, label: FUN_001cd210
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001cd210(void)

{
  int unaff_ESI;
  int unaff_EDI;
  
  FUN_001dc220();
  return unaff_EDI + unaff_ESI * 0x18;
}
