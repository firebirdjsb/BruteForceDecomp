/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A8B78A1FEA578195997553B9AC47E608677CE8E4A9C79E0962BACA50B58ADC04
 * Entry: 0x00243850, Ghidra index: 8056, label: FUN_00243850
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00243850(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *unaff_ESI;
  undefined4 *unaff_EDI;
  
  puVar3 = (undefined4 *)FUN_002ea01d(0xc);
  if (puVar3 != (undefined4 *)0x0) {
    uVar1 = unaff_ESI[2];
    uVar2 = unaff_ESI[1];
    *puVar3 = *unaff_ESI;
    puVar3[1] = uVar2;
    puVar3[2] = uVar1;
    *unaff_EDI = puVar3;
    return;
  }
  *unaff_EDI = 0;
  return;
}
