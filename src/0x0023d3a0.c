/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4B203A5EA52ECB033FA4FAFA12785CE9A9B2C9678C7561AA52809AE05F3F7032
 * Entry: 0x0023d3a0, Ghidra index: 7954, label: FUN_0023d3a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0023d3a0(void)

{
  undefined4 *puVar1;
  int unaff_EBX;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)(unaff_EBX + 0xc);
  for (puVar2 = *(undefined4 **)(unaff_EBX + 8); puVar2 != puVar1; puVar2 = puVar2 + 1) {
    FUN_0023cc80(*puVar2);
  }
  if (*(int *)(unaff_EBX + 8) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(unaff_EBX + 8));
  }
  *(undefined4 *)(unaff_EBX + 8) = 0;
  *(undefined4 *)(unaff_EBX + 0xc) = 0;
  *(undefined4 *)(unaff_EBX + 0x10) = 0;
  return;
}
