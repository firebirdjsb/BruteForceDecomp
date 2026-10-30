/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EDAF96E715AD722AF873E1D451406EDBA82DC4FEB299FA9A06A372F3CDC2E36F
 * Entry: 0x001c7bb0, Ghidra index: 5814, label: FUN_001c7bb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001c7bb0(int param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_3 != param_4) {
    iVar1 = *(int *)(param_1 + 8);
    iVar2 = param_3;
    for (; param_4 != iVar1; param_4 = param_4 + 0x6c) {
      FUN_001d2de0(iVar2);
      iVar2 = iVar2 + 0x6c;
    }
    iVar1 = *(int *)(param_1 + 8);
    for (iVar3 = iVar2; iVar3 != iVar1; iVar3 = iVar3 + 0x6c) {
      FUN_00086ed0();
    }
    *(int *)(param_1 + 8) = iVar2;
  }
  *param_2 = param_3;
  return;
}
