/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3629CB920472AC5B955A7BBBDC2E1036C5BE94C324CBAC0A0C03E9F6F81774F4
 * Entry: 0x002940b0, Ghidra index: 9277, label: FUN_002940b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-draft declaration only; Xbox guest call ABI remains ABI_UNVERIFIED. */
extern void FUN_0028ae10(void);
void FUN_002940b0(void)

{
  undefined4 *in_EAX;
  
  for (; in_EAX != (undefined4 *)0x0; in_EAX = (undefined4 *)*in_EAX) {
    FUN_0028ae10();
  }
  return;
}
