/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B7105C5120F129C7426AB300D8AD00390DADBC30B79463B431D4FC2C015E3F52
 * Entry: 0x00061a60, Ghidra index: 1032, label: FUN_00061a60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00061a60(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *unaff_ESI;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  
  iVar1 = FUN_00238290();
  if (iVar1 == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = (undefined4 *)FUN_0005ed40(param_1,in_stack_00000020,in_stack_00000024);
  }
  *puVar2 = 0;
  if ((undefined4 *)unaff_ESI[1] != (undefined4 *)0x0) {
    *(undefined4 *)unaff_ESI[1] = puVar2;
    puVar2[1] = unaff_ESI[1];
    unaff_ESI[1] = puVar2;
    return;
  }
  puVar2[1] = 0;
  *unaff_ESI = puVar2;
  unaff_ESI[1] = puVar2;
  return;
}
