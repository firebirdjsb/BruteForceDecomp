/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DCCBB1DCC5C5EAC5FFE730F4183430ABCEA0D0569370F3596D974B85326DAA10
 * Entry: 0x001d01d0, Ghidra index: 6161, label: FUN_001d01d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001d01d0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *unaff_EDI;
  
  for (; param_1 != param_2; param_1 = param_1 + 0x11) {
    *param_1 = *unaff_EDI;
    param_1[1] = unaff_EDI[1];
    param_1[2] = unaff_EDI[2];
    *(undefined1 *)(param_1 + 3) = *(undefined1 *)(unaff_EDI + 3);
    FUN_00137500();
    param_1[8] = unaff_EDI[8];
    FUN_0010bc40();
    FUN_0010bc40();
  }
  return;
}
