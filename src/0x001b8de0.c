/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A9E3A23D013789309FD194DB6E5D0B413ADBCBEA612ABEB78981598A2A23B135
 * Entry: 0x001b8de0, Ghidra index: 5708, label: FUN_001b8de0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001b8de0(int param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_3 != param_4) {
    iVar2 = FUN_001d6c40(param_4);
    iVar1 = *(int *)(param_1 + 8);
    for (iVar3 = iVar2; iVar3 != iVar1; iVar3 = iVar3 + 0xac) {
      FUN_000e3600();
    }
    *(int *)(param_1 + 8) = iVar2;
  }
  *param_2 = param_3;
  return;
}
