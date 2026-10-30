/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 421EFB0C588869E1C9A930C57AA7529A43378B8D676CAD6C24194784EADD26CC
 * Entry: 0x003446d9, Ghidra index: 12738, label: FUN_003446d9
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_003446d9(int param_1)

{
  undefined4 uVar1;
  
  if (*(undefined1 **)(param_1 + 0x10) == (undefined1 *)0x0) {
    uVar1 = FUN_003437b3(param_1,1);
  }
  else {
    if (*(undefined1 **)(param_1 + 0x10) == *(undefined1 **)(param_1 + 0x24)) {
      **(undefined1 **)(param_1 + 0x24) = 0;
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
    }
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x10);
    uVar1 = 1;
  }
  return uVar1;
}
