/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 099C6B51DA5B652BE6C373903C28307AE21CE10C019D2990E974933B8CBB41BB
 * Entry: 0x00051430, Ghidra index: 737, label: FUN_00051430
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_000514c0(int param_1,undefined4 param_2);

void FUN_00051430(int param_1,int param_2)

{
  int iVar1;
  
  for (iVar1 = (param_2 - param_1 >> 2) - (param_2 - param_1 >> 0x1f) >> 1; 0 < iVar1;
      iVar1 = iVar1 + -1) {
    FUN_000514c0(param_1,*(undefined4 *)(param_1 + -4 + iVar1 * 4));
  }
  return;
}
