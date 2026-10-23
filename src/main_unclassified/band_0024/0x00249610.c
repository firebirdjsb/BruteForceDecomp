/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2D9789DD15CC6DA548F032CCFAB86D887A30652FAD614826471FB09D06559AA4
 * Entry: 0x00249610, Ghidra index: 8178, label: FUN_00249610
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00249610(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *unaff_EDI;
  
  for (; param_1 != param_2; param_1 = param_1 + 0xb) {
    *param_1 = *unaff_EDI;
    param_1[1] = unaff_EDI[1];
    *(undefined1 *)(param_1 + 2) = *(undefined1 *)(unaff_EDI + 2);
    FUN_0024a450();
    FUN_0010bc40();
  }
  return;
}
