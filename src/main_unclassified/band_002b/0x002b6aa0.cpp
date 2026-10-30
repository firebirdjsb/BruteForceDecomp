/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 04C8E07F493351C9D3AB40995B3870B86EE3CAAA87DCA54C2EFE1B43366C5EDF
 * Entry: 0x002b6aa0, Ghidra index: 9832, label: FUN_002b6aa0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002b6aa0(void)

{
  int iVar1;
  undefined4 *in_EDX;
  undefined4 *puVar2;
  
  puVar2 = in_EDX;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *in_EDX = 0x3f800000;
  in_EDX[5] = 0x3f800000;
  in_EDX[10] = 0x3f800000;
  return;
}
