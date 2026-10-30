/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AB946734A99AEC16A3192B36E675967DB38328FDD675D82C5D2DA780CF3EBADE
 * Entry: 0x0024bc00, Ghidra index: 8271, label: FUN_0024bc00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0024bc00(void)

{
  undefined4 *in_EAX;
  undefined4 *in_ECX;
  
  if (in_ECX != (undefined4 *)0x0) {
    *in_ECX = *in_EAX;
    in_ECX[1] = in_EAX[1];
    FUN_002481a0();
  }
  return;
}
