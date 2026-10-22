/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9A0288C58B4BF6B93117861DA5984F4195E1FFA97F55CA1E34D2AA75F666760D
 * Entry: 0x002b3370, Ghidra index: 9759, label: FUN_002b3370
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t _DAT_00000000;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002b3370(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  
  iVar3 = 0;
  while (iVar1 = *(int *)(param_1 + 0x78), iVar1 != 0) {
    (**(code **)(**(int **)(iVar1 + 0x2c) + 0x1c))(iVar1);
    bVar4 = iVar1 == iVar3;
    iVar3 = iVar1;
    if (bVar4) {
      _DAT_00000000 = 0;
    }
  }
  FUN_002b32b0(param_1,1);
  while (iVar3 = *(int *)(param_1 + 0x1c), iVar3 != 0) {
    piVar2 = (int *)(*(short *)(iVar3 + 0x18) + iVar3);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x10))(1);
    }
  }
  return;
}
