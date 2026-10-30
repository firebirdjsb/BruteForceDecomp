/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1C71AAC4951C4076D01E7B668A820EF385FE178C116817E7BD77759FEF8BD01F
 * Entry: 0x0016e7e0, Ghidra index: 4821, label: FUN_0016e7e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0016e7e0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  for (iVar1 = (param_2 - param_1 >> 2) - (param_2 - param_1 >> 0x1f) >> 1; 0 < iVar1;
      iVar1 = iVar1 + -1) {
    FUN_0016eaf0(param_1,*(undefined4 *)(param_1 + -4 + iVar1 * 4),param_3);
  }
  return;
}
