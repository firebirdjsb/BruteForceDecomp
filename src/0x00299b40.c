/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 282C236D652E8989E015BB37AAFC1F69D27C67092BCA8810BD1D2221007C6564
 * Entry: 0x00299b40, Ghidra index: 9389, label: FUN_00299b40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00299b40(void)

{
  int in_ECX;
  
  if (0 < in_ECX) {
    FUN_00299580(5);
    return;
  }
  if (in_ECX < 0) {
    FUN_00299580(4,-1 - in_ECX,-in_ECX);
  }
  return;
}
