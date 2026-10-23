/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D68973B1D32C5D2C4F2FA20E262A600BC3ECAD26F893A0DEA346A5A2668CFE05
 * Entry: 0x001051e0, Ghidra index: 3339, label: FUN_001051e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004699fc;
void FUN_001051e0(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  int local_20;
  undefined1 local_1c [4];
  undefined2 local_18;
  undefined4 local_8;
  undefined4 local_4;
  
  for (piVar6 = *(int **)(param_1 + 0x74);
      (piVar5 = (int *)0x0, piVar6 != *(int **)(param_1 + 0x78) &&
      (piVar5 = (int *)*piVar6, piVar5[9] != -0x1f109c70)); piVar6 = piVar6 + 1) {
  }
  piVar6 = (int *)0x0;
  if ((piVar5 != (int *)0x0) && (iVar1 = (**(code **)(*piVar5 + 4))(), iVar1 == 1)) {
    piVar6 = piVar5;
  }
  for (piVar5 = *(int **)(param_1 + 0x74);
      (piVar2 = (int *)0x0, piVar5 != *(int **)(param_1 + 0x78) &&
      (piVar2 = (int *)*piVar5, piVar2[9] != 0x15d992e0)); piVar5 = piVar5 + 1) {
  }
  piVar5 = (int *)0x0;
  if ((piVar2 != (int *)0x0) && (iVar1 = (**(code **)(*piVar2 + 4))(), iVar1 == 1)) {
    piVar5 = piVar2;
  }
  piVar2 = *(int **)(param_1 + 0x74);
  piVar4 = (int *)0x0;
  if (piVar2 != *(int **)(param_1 + 0x78)) {
    do {
      piVar4 = (int *)*piVar2;
      if (((int *)*piVar2)[9] == 0x1a69c681) break;
      piVar2 = piVar2 + 1;
      piVar4 = (int *)0x0;
    } while (piVar2 != *(int **)(param_1 + 0x78));
  }
  piVar2 = (int *)0x0;
  if ((piVar4 != (int *)0x0) && (iVar1 = (**(code **)(*piVar4 + 4))(), iVar1 == 1)) {
    piVar2 = piVar4;
  }
  if (piVar6 != (int *)0x0) {
    if ((piVar5 != (int *)0x0) && (piVar2 != (int *)0x0)) {
      if (DAT_004699fc != '\0') {
        FUN_000ef180();
        FUN_000ef180();
        FUN_000ef180();
        FUN_0008e3e0();
        FUN_0010a7d0();
        local_2c = 0;
        iVar1 = FUN_0008dfb0(&local_2c);
        local_28 = 0;
        local_20 = FUN_0008dfb0(&local_28);
        local_4 = 7;
        local_8 = 0;
        local_18 = 0;
        local_24 = 0x197ec49e;
        uVar3 = FUN_001e97c0();
        FUN_002eaa70(uVar3);
        FUN_0008ed00();
        FUN_002eaa70(u__0040cc20);
        FUN_0008ed00();
        if (iVar1 == 0) {
          FUN_002eaa70(u___0040cc2c);
          FUN_0008ed00();
        }
        else {
          local_24 = iVar1;
          FUN_001e97c0();
          FUN_0008ea70(local_1c);
          FUN_000fb6e0(1,9);
          FUN_0008e0d0(local_2c);
        }
        FUN_0010a7d0();
        FUN_00106550();
        local_24 = 0xf7566df7;
        uVar3 = FUN_001e97c0();
        FUN_002eaa70(uVar3);
        FUN_0008ed00();
        FUN_002eaa70(u__0040cc20);
        FUN_0008ed00();
        if (local_20 == 0) {
          FUN_002eaa70(u___0040cc2c);
          FUN_0008ed00();
        }
        else {
          FUN_001e97c0();
          FUN_0008ea70(local_1c);
          FUN_000fb6e0(1,9);
          FUN_0008e0d0(local_28);
        }
        FUN_0010a7d0();
        FUN_000853c0();
        return;
      }
      FUN_000ef180();
      FUN_000ef180();
      FUN_000ef180();
      return;
    }
    if ((*(byte *)(piVar6 + 10) & 4) != 0) {
      *(byte *)(piVar6 + 10) = *(byte *)(piVar6 + 10) & 0xfb;
      (**(code **)(*piVar6 + 0x28))();
    }
  }
  if ((piVar5 != (int *)0x0) && ((*(byte *)(piVar5 + 10) & 4) != 0)) {
    *(byte *)(piVar5 + 10) = *(byte *)(piVar5 + 10) & 0xfb;
    (**(code **)(*piVar5 + 0x28))();
  }
  if ((piVar2 != (int *)0x0) && ((*(byte *)(piVar2 + 10) & 4) != 0)) {
    *(byte *)(piVar2 + 10) = *(byte *)(piVar2 + 10) & 0xfb;
    (**(code **)(*piVar2 + 0x28))();
  }
  return;
}
