/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 46C640A2A3918285D17655E6FB873D4647580997206DA08D0E5769EB7E7D8C56
 * Entry: 0x001b6a00, Ghidra index: 5692, label: FUN_001b6a00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int * FUN_001b6a00(int *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int unaff_ESI;
  
  if (param_2 != param_3) {
    uVar1 = FUN_001d6530(param_3);
    FUN_00087630(*(undefined4 *)(unaff_ESI + 8));
    *(undefined4 *)(unaff_ESI + 8) = uVar1;
  }
  *param_1 = param_2;
  return param_1;
}
