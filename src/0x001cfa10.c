/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E57CAB5FC69DC6F1928F43A78032227917B445D3EE8DC489E131D29F083767DD
 * Entry: 0x001cfa10, Ghidra index: 6138, label: FUN_001cfa10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001cfa10(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *unaff_EDI;
  
  if (param_1 != param_2) {
    do {
      *param_1 = *unaff_EDI;
      FUN_0001f4f0(unaff_EDI + 1,0,0xffffffff);
      param_1[8] = unaff_EDI[8];
      param_1[9] = unaff_EDI[9];
      param_1[10] = unaff_EDI[10];
      FUN_0010bc40();
      param_1 = param_1 + 0xf;
    } while (param_1 != param_2);
  }
  return;
}
