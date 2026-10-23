/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E3F01966F0701A8BA0B44B25828D66F936C0ACCD0C5867A35E22EF36CE5B8F47
 * Entry: 0x0017d840, Ghidra index: 5082, label: FUN_0017d840
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_0017d840(undefined4 *param_1,int param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_2 == param_3) {
    *param_1 = param_4;
    return param_1;
  }
  do {
    iVar1 = param_3 + -0x18;
    puVar2 = param_4 + -6;
    *puVar2 = *(undefined4 *)(param_3 + -0x18);
    FUN_0017c270();
    param_4[-1] = *(undefined4 *)(param_3 + -4);
    param_3 = iVar1;
    param_4 = puVar2;
  } while (iVar1 != param_2);
  *param_1 = puVar2;
  return param_1;
}
