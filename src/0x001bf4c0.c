/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4C6B01979D525FAD75EF0065E7F07FED672FF8DBB826A711D3E1724F361E8514
 * Entry: 0x001bf4c0, Ghidra index: 5763, label: FUN_001bf4c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int * FUN_001bf4c0(int *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int unaff_ESI;
  
  if (param_2 != param_3) {
    uVar1 = FUN_001d7e60(param_3);
    FUN_00132c50(uVar1,*(undefined4 *)(unaff_ESI + 8));
    *(undefined4 *)(unaff_ESI + 8) = uVar1;
  }
  *param_1 = param_2;
  return param_1;
}
