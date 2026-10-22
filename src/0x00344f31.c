/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C8B540D439B33C52A554F36B9AF0CE1A51D073D935F20021D5F0FFA15EF4DAD8
 * Entry: 0x00344f31, Ghidra index: 12756, label: FUN_00344f31
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00344f31(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  if (in_ECX == 0) {
    return 0x276d;
  }
  uVar1 = FUN_003482b3();
  return uVar1;
}
