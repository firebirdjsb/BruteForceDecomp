/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 55EABD4FDF93C645D25654EF77A4D170639D7AECEE2DADFB95906153F6786E87
 * Entry: 0x001c7070, Ghidra index: 5808, label: FUN_001c7070
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int * FUN_001c7070(int *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int unaff_ESI;
  
  if (param_2 != param_3) {
    uVar1 = FUN_001d9150(param_3);
    FUN_000874a0(*(undefined4 *)(unaff_ESI + 8));
    *(undefined4 *)(unaff_ESI + 8) = uVar1;
  }
  *param_1 = param_2;
  return param_1;
}
