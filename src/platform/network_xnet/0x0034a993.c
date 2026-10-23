/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1BCE6C55BE58E783F23FC8ED9B542DE2E3314AB913F85F1047AFA61968574D01
 * Entry: 0x0034a993, Ghidra index: 12939, label: FUN_0034a993
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0034a993(int param_1)

{
  undefined4 uVar1;
  
  while (*(int *)(param_1 + 0x2c) != 0) {
    uVar1 = FUN_0034c30c();
    FUN_0034a72a(uVar1,0);
  }
  return;
}
