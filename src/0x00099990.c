/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6DB655D4CB9CBF955C9F5D4C5B05EFDBB530E5490291F73CD57AFDB1D096220F
 * Entry: 0x00099990, Ghidra index: 1851, label: FUN_00099990
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00099990(void)

{
  int unaff_ESI;
  undefined4 local_4;
  
  if ((*(char *)(unaff_ESI + 0xb45) != '\0') && (*(char *)(unaff_ESI + 0xb46) != '\0')) {
    local_4 = 1;
    FUN_0006a610(&local_4);
    *(undefined1 *)(unaff_ESI + 0xb46) = 0;
  }
  return;
}
