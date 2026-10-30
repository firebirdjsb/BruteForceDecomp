/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 920C33B289F9CEBEF99C823D0C85268E2CA29C9D81BF3EE74D5408D7228A9D1D
 * Entry: 0x00294110, Ghidra index: 9279, label: FUN_00294110
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00294110(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *in_EDX;
  
  puVar3 = (undefined4 *)0x0;
  while (puVar1 = in_EDX, puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    puVar2 = (undefined4 *)*puVar1;
    while ((in_EDX = puVar2, in_EDX != (undefined4 *)0x0 && (in_EDX[1] == 0))) {
      *puVar1 = *in_EDX;
      *in_EDX = *puVar3;
      puVar3 = in_EDX;
      puVar2 = (undefined4 *)*puVar1;
    }
  }
  return;
}
