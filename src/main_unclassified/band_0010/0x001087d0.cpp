/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C4899CCEE0EED63F93B5068768DEA7C88D6CE3B13597B28F6B84B8A5CB4AD6F1
 * Entry: 0x001087d0, Ghidra index: 3388, label: FUN_001087d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040ccfc;
extern uint32_t DAT_0040cd04;
extern uint32_t DAT_0046d064;
/* WARNING: Removing unreachable block (ram,0x001088ed) */

void FUN_001087d0(int param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  
  if ((param_2 != (int *)0x0) && (iVar4 = (**(code **)(*param_2 + 4))(), iVar4 == 1)) {
    iVar4 = *(int *)(param_1 + 0x28);
    if (iVar4 == 0) {
      FUN_001e97c0();
      FUN_0010a7d0();
      if (param_2[9] == DAT_0046d064) {
        param_2[9] = -0x1a79f9c;
        (**(code **)(*param_2 + 0x2c))();
      }
    }
    else {
      iVar2 = *(int *)(iVar4 + 0x40);
      for (iVar4 = *(int *)(iVar4 + 0x3c); iVar4 != iVar2; iVar4 = iVar4 + 0x18) {
        cVar3 = FUN_00107b20(param_1,iVar4);
        if (cVar3 != '\0') {
          cVar3 = FUN_00107a90(param_1,iVar4);
          if (cVar3 == '\0') {
            FUN_002eaa70(&DAT_0040cd04);
          }
          else {
            FUN_002eaa70(&DAT_0040ccfc);
          }
          FUN_0008ed00();
          uVar5 = FUN_001e97c0();
          FUN_002eaa70(uVar5);
          FUN_0008ed00();
          FUN_000fb6e0(1,10);
        }
      }
      FUN_0010a7d0();
      bVar1 = *(byte *)(param_2 + 10);
      if ((bVar1 >> 2 & 1) != 0) {
        *(byte *)(param_2 + 10) = bVar1 & 4 ^ bVar1;
        (**(code **)(*param_2 + 0x28))();
      }
    }
  }
  return;
}
