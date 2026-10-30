/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 309B809F9A16C05E63467957869C03636FEFCDAE66E5B107D5FE5BE129703A7D
 * Entry: 0x0017f160, Ghidra index: 5121, label: FUN_0017f160
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined1 FUN_0017f160(undefined4 param_1,float param_2)

{
  undefined1 uVar1;
  int *piVar2;
  
  piVar2 = (int *)FUN_0017ee90();
  if (piVar2 != (int *)0x0) {
    uVar1 = 0;
    if (0.0 < param_2) {
      uVar1 = (**(code **)(*piVar2 + 0x14))(param_2);
    }
    return uVar1;
  }
  return 0;
}
