/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A1B5AD8DD1CFE90F7328A264110A360048F951B8680163B078E60F4391DB6DF8
 * Entry: 0x00249560, Ghidra index: 8175, label: FUN_00249560
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00249560(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *unaff_EDI;
  
  if (param_1 != param_2) {
    do {
      *param_1 = *unaff_EDI;
      FUN_0001f4f0(unaff_EDI + 1,0,0xffffffff);
      *(undefined1 *)(param_1 + 8) = *(undefined1 *)(unaff_EDI + 8);
      param_1[9] = unaff_EDI[9];
      param_1[10] = unaff_EDI[10];
      *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(unaff_EDI + 0xb);
      FUN_0024a300();
      param_1 = param_1 + 0x10;
    } while (param_1 != param_2);
  }
  return;
}
