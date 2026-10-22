/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1F09CE857C9D41480E05FC6FC91392EFAA202A443C1E01ABBBA553622F35C947
 * Entry: 0x001cb8d0, Ghidra index: 5885, label: FUN_001cb8d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001cb8d0(void)

{
  int unaff_ESI;
  int unaff_EDI;
  
  FUN_001d9f80();
  return unaff_EDI + unaff_ESI * 0x14;
}
