/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B5B75B217A62FAD48E430EC406B2AE531DEE0D9BF514B991582C65574ECC2E1D
 * Entry: 0x001d1510, Ghidra index: 6247, label: FUN_001d1510
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001d1510(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *unaff_EDI;
  
  if (param_1 != param_2) {
    do {
      *param_1 = *unaff_EDI;
      FUN_00087940(param_1 + 1,0,0xffffffff);
      FUN_0001f4f0(unaff_EDI + 8,0,0xffffffff);
      param_1[0xf] = unaff_EDI[0xf];
      param_1 = param_1 + 0x10;
    } while (param_1 != param_2);
  }
  return;
}
