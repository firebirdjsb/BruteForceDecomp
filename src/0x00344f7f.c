/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0622DF567B8F0D113B9E89BC17BBB47F3C8531D631972DEE5A12BBBDD0B4350E
 * Entry: 0x00344f7f, Ghidra index: 12760, label: FUN_00344f7f
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00344f7f(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  if (in_ECX == 0) {
    return 0x276d;
  }
  uVar1 = FUN_0034dd88();
  return uVar1;
}
