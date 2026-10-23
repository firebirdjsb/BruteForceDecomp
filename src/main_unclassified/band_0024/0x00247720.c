/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 10802BAECA44E536FAFC6F1A85B38F0066332D67F9E799839A230535175E3FC3
 * Entry: 0x00247720, Ghidra index: 8104, label: FUN_00247720
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int * FUN_00247720(int *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int unaff_ESI;
  
  if (param_2 != param_3) {
    uVar1 = FUN_0024b0d0(param_3);
    FUN_0024a990(*(undefined4 *)(unaff_ESI + 8));
    *(undefined4 *)(unaff_ESI + 8) = uVar1;
  }
  *param_1 = param_2;
  return param_1;
}
