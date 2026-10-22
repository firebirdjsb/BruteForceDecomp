/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4A2811CB7AEA36602C41F8F7B8C458C395452D8455403C91B0C40EDD266ACA04
 * Entry: 0x0033def3, Ghidra index: 12601, label: FUN_0033def3
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0033def3(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  int iVar1;
  
  if (*(int *)(param_1 + 8) == 0) {
    FUN_0033bc7e(1,param_3,param_4,0,param_5);
    iVar1 = FUN_0033dc7b();
    if (-1 < iVar1) {
      *(undefined4 *)(param_1 + 8) = 1;
    }
  }
  else {
    iVar1 = -0x7fffbffb;
  }
  return iVar1;
}
