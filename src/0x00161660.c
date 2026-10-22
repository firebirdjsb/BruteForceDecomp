/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D368E50713BCDA437548720AF8B3BE7F0C9E329C761455C92A33541F5F9BAD80
 * Entry: 0x00161660, Ghidra index: 4609, label: FUN_00161660
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00161660(void)

{
  int in_EAX;
  int unaff_EDI;
  
  for (; in_EAX != unaff_EDI; in_EAX = in_EAX + 0x124) {
    FUN_00160180();
  }
  return;
}
