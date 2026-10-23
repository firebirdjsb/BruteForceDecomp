/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 83D08EA87B49CD49631C8A92FACF2AA0C213983746F2BB8881ABE6A94B5EC0BE
 * Entry: 0x00242c80, Ghidra index: 8040, label: FUN_00242c80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00242c80(void)

{
  int in_EAX;
  int *in_ECX;
  
  if (in_EAX == 0) {
    if (*in_ECX != 0) {
      FUN_00241710(1);
    }
    *in_ECX = 0;
    return;
  }
  if (*in_ECX == 0) {
    FUN_00243e90();
    FUN_002417d0();
  }
  return;
}
