/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5A77AB5032444B8320FFBFB8F32FDF7123F466144D0F6975CBE7D329F8AE865D
 * Entry: 0x002e0840, Ghidra index: 10356, label: FUN_002e0840
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002e0840(undefined1 *param_1)

{
  undefined1 uVar1;
  
  if (param_1 == (undefined1 *)0x0) {
    return 0x80004003;
  }
  uVar1 = FUN_002e40d0();
  *param_1 = uVar1;
  return 0;
}
