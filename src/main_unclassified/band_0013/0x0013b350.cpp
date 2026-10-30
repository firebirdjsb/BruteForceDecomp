/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A0DB450D235E2C1F8C5FFF5EB01311FDF763FD89691A6DC3CF3A9F5E5514D3E6
 * Entry: 0x0013b350, Ghidra index: 3983, label: FUN_0013b350
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0013b350(int param_1,int param_2,int param_3,undefined4 param_4,int param_5)

{
  if (*(int *)(param_3 + 4) != *(int *)(param_1 + 4)) {
    FUN_0008f6a0(*(int *)(param_1 + 4));
  }
  if (param_5 != 0) {
    FUN_0008f6a0(param_5);
  }
  FUN_0013b050(param_1,0,param_2 - param_1 >> 3);
  if (param_5 != 0) {
    FUN_0008f6e0();
    return;
  }
  return;
}
