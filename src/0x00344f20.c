/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 471343F0D2B90ECEF33D1F51ED4D3F5DAC825D62DC57415F303D8C34B645A1AB
 * Entry: 0x00344f20, Ghidra index: 12755, label: FUN_00344f20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00344f20(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  if (in_ECX == 0) {
    return 0x276d;
  }
  uVar1 = FUN_00347b5c();
  return uVar1;
}
