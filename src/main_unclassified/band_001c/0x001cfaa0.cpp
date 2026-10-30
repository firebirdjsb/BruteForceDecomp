/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F5E67D6763D1418CF4DA0B8FDF2D3C954580652BE96CD13244F5DDCFECDF7FBF
 * Entry: 0x001cfaa0, Ghidra index: 6140, label: FUN_001cfaa0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001cfaa0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *unaff_EDI;
  
  if (param_1 != param_2) {
    puVar1 = param_1 + 4;
    do {
      *param_1 = *unaff_EDI;
      puVar1[-3] = unaff_EDI[1];
      puVar1[-2] = unaff_EDI[2];
      puVar1[-1] = unaff_EDI[3];
      *puVar1 = unaff_EDI[4];
      puVar1[1] = unaff_EDI[5];
      FUN_0001f4f0(unaff_EDI + 6,0,0xffffffff);
      puVar1[9] = unaff_EDI[0xd];
      puVar1[10] = unaff_EDI[0xe];
      puVar1[0xb] = unaff_EDI[0xf];
      param_1 = param_1 + 0x10;
      puVar1 = puVar1 + 0x10;
    } while (param_1 != param_2);
  }
  return;
}
