/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 40349F56429954AB435111366862692C70C493052EFD91A5FC887BAF8547CFD4
 * Entry: 0x0017df40, Ghidra index: 5095, label: FUN_0017df40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0017df40(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  for (iVar1 = (param_2 - param_1 >> 2) - (param_2 - param_1 >> 0x1f) >> 1; 0 < iVar1;
      iVar1 = iVar1 + -1) {
    FUN_0017dfe0(param_1,*(undefined4 *)(param_1 + -4 + iVar1 * 4),param_3);
  }
  return;
}
