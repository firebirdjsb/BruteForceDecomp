/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8706A4F80BD5ACB09DF5E6CA46D90749EB96DDF907E2C41CF3BFF8F8FB3BA148
 * Entry: 0x0024bb60, Ghidra index: 8268, label: FUN_0024bb60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0024bb60(void)

{
  undefined4 *in_EAX;
  undefined4 *in_ECX;
  undefined4 *puStack00000004;
  
  if (in_EAX != (undefined4 *)0x0) {
    *in_EAX = *in_ECX;
    puStack00000004 = in_EAX + 1;
    FUN_001e0dd0();
    return;
  }
  return;
}
