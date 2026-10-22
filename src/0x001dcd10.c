/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C1902E08CE799C6BB68ABEA69F1764C54E2D7A42C43AB7B4C5F9B7EF1DF4A0A4
 * Entry: 0x001dcd10, Ghidra index: 6590, label: FUN_001dcd10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001dcd10(void)

{
  undefined4 *in_EAX;
  undefined4 *in_ECX;
  
  if (in_EAX != (undefined4 *)0x0) {
    *in_EAX = *in_ECX;
    *(undefined1 *)(in_EAX + 1) = *(undefined1 *)(in_ECX + 1);
    in_EAX[2] = in_ECX[2];
    in_EAX[3] = in_ECX[3];
  }
  return;
}
