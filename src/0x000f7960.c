/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 58E9C29C1BC315776D325F8A1B42E201023D7740B10C9BF28CD5C452695C374C
 * Entry: 0x000f7960, Ghidra index: 3106, label: FUN_000f7960
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469948;
extern uint32_t DAT_0046995c;
extern uint32_t DAT_00469b58;
undefined4 FUN_000f7960(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  int *piVar6;
  bool bVar7;
  
  iVar2 = FUN_001020d0();
  if ((((iVar2 != 0) &&
       (iVar3 = *(int *)(*(int *)(DAT_00469948 + 0x22c + *(int *)(iVar2 + 4) * 4) + 0xc4),
       iVar3 != 0)) && (*(int *)(iVar3 + 0xbc) != 4)) && ((*(byte *)(param_1 + 100) & 0x40) == 0)) {
    iVar3 = FUN_0008a460();
    if (iVar3 != 0) {
      FUN_00100f90();
      iVar4 = FUN_001016f0();
      if (iVar4 != 0) {
        if ((bool)*(char *)(iVar3 + 0x34) != (*(int *)(iVar4 + 0x70) == 1)) {
          pbVar5 = (byte *)FUN_0008b9c0(iVar2);
          if (*(char *)(iVar3 + 0x20) == '\0') {
            iVar4 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x18c))(iVar3 + 0x1c);
            bVar7 = *(char *)(iVar4 + 0x34) == '\0';
            *(bool *)(iVar4 + 0x34) = bVar7;
            iVar3 = DAT_00469b58;
            pbVar5[0xa4] = pbVar5[0xa4] ^ (bVar7 << 4 ^ pbVar5[0xa4]) & 0x10;
            (**(code **)(**(int **)(iVar3 + 8) + 0x194))(iVar4);
          }
          else {
            if (*(int *)(iVar3 + 0x1c) == 0xa6de845) {
              pbVar5[0xc] = 0x4e;
              pbVar5[0xd] = 0x16;
              pbVar5[0xe] = 0xa3;
              pbVar5[0xf] = 0x15;
            }
            else {
              pbVar5[0xc] = 0x45;
              pbVar5[0xd] = 0xe8;
              pbVar5[0xe] = 0x6d;
              pbVar5[0xf] = 10;
            }
            *pbVar5 = *pbVar5 | 2;
            FUN_000793b0();
            piVar6 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
            (**(code **)(*piVar6 + 8))(&stack0xfffffff8,0x3f800000,0);
          }
          uVar1 = *(undefined4 *)(iVar2 + 4);
          (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x134))(uVar1);
          FUN_001ed7f0(uVar1);
          if (*(int *)(DAT_0046995c + 0x1c) == 0) {
            (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x250))(uVar1);
          }
        }
        return 1;
      }
    }
    return 0;
  }
  return 0;
}
