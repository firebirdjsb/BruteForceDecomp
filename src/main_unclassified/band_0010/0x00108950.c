/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D5937CCC5F354422551BCBC1B8BAEC84DC35C8B831B84C135D1B5C3027260779
 * Entry: 0x00108950, Ghidra index: 3389, label: FUN_00108950
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040ccfc;
extern uint32_t DAT_0040cd04;
extern uint32_t DAT_00469b58;
extern uint32_t DAT_0046d064;
/* WARNING: Removing unreachable block (ram,0x00108b47) */

void FUN_00108950(int param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 auStack_40 [64];
  
  if (((param_2 != (int *)0x0) && (iVar4 = (**(code **)(*param_2 + 4))(), iVar4 == 1)) &&
     (param_2 != (int *)0x0)) {
    iVar4 = *(int *)(param_1 + 0x28);
    if (iVar4 == 0) {
      FUN_001e97c0();
      FUN_0010a7d0();
      if (param_2[9] == DAT_0046d064) {
        param_2[9] = 0x31bbdc2;
        (**(code **)(*param_2 + 0x2c))();
      }
    }
    else {
      iVar5 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x234))();
      iVar2 = *(int *)(iVar4 + 0x40);
      for (iVar4 = *(int *)(iVar4 + 0x3c); iVar4 != iVar2; iVar4 = iVar4 + 0x18) {
        cVar3 = FUN_00107b20(param_1,iVar4);
        if (cVar3 != '\0') {
          cVar3 = FUN_00107a90(param_1,iVar4);
          if (cVar3 == '\0') {
            cVar3 = FUN_00107bc0(param_1);
            if (cVar3 == '\0') {
              FUN_002eaa70(&DAT_0040ccfc);
              FUN_0008ed00();
            }
            else {
              FUN_002eaa70(&DAT_0040cd04);
              FUN_0008ed00();
            }
            uVar6 = FUN_001e97c0();
            FUN_002eaa70(uVar6);
          }
          else {
            FUN_002eaa70(&DAT_0040ccfc);
            FUN_0008ed00();
            uVar6 = FUN_001e97c0((int)((float)*(int *)(iVar4 + 0x14) * ((float)iVar5 * 0.1 + 1.0)));
            FUN_002ea9a9(auStack_40,0x20,uVar6);
            FUN_002eaa70(auStack_40);
          }
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
