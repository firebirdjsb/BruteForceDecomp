/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 76AAD65C877516802FE88A26179856F0FC086740B44FA9C855BAF8A139DB5222
 * Entry: 0x00344f42, Ghidra index: 12757, label: FUN_00344f42
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00344f42(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  if (in_ECX == 0) {
    return 0x276d;
  }
  uVar1 = FUN_0034a037();
  return uVar1;
}
