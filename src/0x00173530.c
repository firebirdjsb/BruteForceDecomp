/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E05794D662C4ABC97624CC466DA0BAC35F3C6DEF6FC166A46E158F7FEF124A4C
 * Entry: 0x00173530, Ghidra index: 4881, label: FUN_00173530
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00173530(void)

{
  uint uVar1;
  int in_EDX;
  int unaff_EDI;
  
  for (uVar1 = 0;
      (*(int *)(in_EDX + 8) != 0 &&
      (uVar1 < (uint)(*(int *)(in_EDX + 0xc) - *(int *)(in_EDX + 8) >> 3))); uVar1 = uVar1 + 1) {
    if (*(int *)(*(int *)(in_EDX + 8) + uVar1 * 8) == unaff_EDI) {
      return *(undefined4 *)(*(int *)(in_EDX + 8) + 4 + uVar1 * 8);
    }
  }
  return 0xffffffff;
}
