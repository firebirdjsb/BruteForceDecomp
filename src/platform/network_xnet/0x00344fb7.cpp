/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 65A2EAD7DFA6D3EE1C0DC437BA4CB39A80DC923D4F177AC79CC62CC004F9C917
 * Entry: 0x00344fb7, Ghidra index: 12763, label: FUN_00344fb7
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00344fb7(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  if (in_ECX == 0) {
    return 0x276d;
  }
  uVar1 = FUN_003512aa();
  return uVar1;
}
