/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5C40802EFA8127450605D3209861D9A7049CC96EA8435D8D9ED0522621B10064
 * Entry: 0x00174320, Ghidra index: 4904, label: FUN_00174320
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00174320(void)

{
  int *piVar1;
  int *piVar2;
  undefined4 unaff_EBX;
  int unaff_EDI;
  
  piVar1 = *(int **)(unaff_EDI + 4);
  piVar2 = (int *)*piVar1;
  while (piVar2 != piVar1) {
    FUN_00174aa0(unaff_EBX);
    FUN_0012aba0();
    piVar1 = *(int **)(unaff_EDI + 4);
  }
  return;
}
