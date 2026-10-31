/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EFCDF54EFAE5F8BF1CBDB5EE3E452213CA33793C9343CCD89A504981CA5E00FF
 * Entry: 0x00330e05, Ghidra index: 12379, label: FUN_00330e05
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-draft declaration only; Xbox x86 guest ABI_UNVERIFIED. */
extern void FUN_0033ea20(int param_1);
undefined4 FUN_00330e05(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xc) == 0x1500f0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x66c) + 0xa8);
    if (iVar1 != 0) {
      FUN_0033ea20(iVar1);
      *(undefined4 *)(*(int *)(param_1 + 0x66c) + 0xa8) = 0;
    }
    *param_2 = *(undefined4 *)(param_1 + 0x66c);
    *(undefined4 *)(param_1 + 0x66c) = 0;
  }
  else {
    *param_2 = 0;
  }
  return *(undefined4 *)(param_1 + 0xc);
}
