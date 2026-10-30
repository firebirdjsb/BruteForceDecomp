/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D3DC7C599358BC498942A8B68CE6B5FB1F11C40CBEAE6DD058BD4F3904B5403B
 * Entry: 0x000d9a20, Ghidra index: 2683, label: FUN_000d9a20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_00237a30(undefined4 param_1);
extern void FUN_000dd380(float param_1,float param_2);
extern void FUN_00073330(float param_1);
extern void FUN_00149e60(void);
extern void FUN_000e40d0(float param_1);
extern void FUN_000d9320(int param_1);
extern void FUN_00177ba0(short *param_1,float param_2);
extern void FUN_001f48f0(float param_1);
extern void FUN_00140d70(float param_1);
extern void FUN_00169e20(int param_1,float param_2);
extern void FUN_000cdf90(int param_1);
extern void FUN_000d2040(int *param_1,float param_2);
extern void FUN_00225220(int *param_1,float param_2);
extern void FUN_002173a0(float param_1);
extern void FUN_002292a0(float param_1);
extern void FUN_00057a30(uint param_1,float param_2);
extern undefined4 FUN_000d4360(int param_1,float param_2);
extern void FUN_000d9090(int param_1,float param_2);
extern void FUN_000d9770(undefined4 param_1,int param_2);
extern void FUN_0008f6e0(std::uint32_t guest_edx);
extern void FUN_00127290(int *param_1);
extern void FUN_0022bfc0(int param_1,float param_2);
extern void FUN_0022cea0(int param_1,undefined4 param_2);
extern void FUN_000e0810(int *param_1);
extern void FUN_000d9840(undefined4 param_1);
extern void FUN_00174270(int param_1,float param_2);
extern void FUN_000d99d0(undefined4 param_1);
extern void FUN_0005c1c0(undefined4 param_1);
extern void FUN_000e0410(int param_1,undefined4 param_2);
extern void FUN_000b8e30(int *param_1,float param_2,byte param_3);
extern void FUN_00074a60(float param_1);
extern void FUN_000d0890(undefined4 param_1);
extern int FUN_001794f0(void);
extern undefined4 FUN_00179590(int param_1);
extern int FUN_00179660(int param_1);
extern void FUN_0017a580(int param_1,undefined4 param_2);
extern void FUN_0017a7a0(undefined4 *param_1);
extern int FUN_001793e0(int param_1,int param_2);
extern void FUN_00179ec0(int param_1,float param_2);

extern uint32_t DAT_0040d5fc;
extern uint32_t *DAT_00443310;
extern uint32_t DAT_00469ab9;
extern uint32_t DAT_00469b58;
extern uint32_t PTR_LAB_00399db4;
extern char s_debug_00404608[];
void FUN_000d9a20(int param_1,undefined4 param_2)

{
  byte *pbVar1;
  char cVar2;
  uint uVar3;
  uint unaff_ESI;
  int *piVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  
  if (DAT_00469ab9 != '\0') {
    FUN_00237a30(s_debug_00404608);
    DAT_00469ab9 = '\0';
  }
  *(int *)(param_1 + 0xb60) = *(int *)(param_1 + 0xb60) + 1;
  FUN_000dd380(param_1,param_2);
  FUN_00073330(param_2);
  (**(code **)(**(int **)(param_1 + 0xbec) + 0x28))(param_2);
  if (*(char *)(*(int *)(param_1 + 0xbe0) + 0x60) != '\0') {
    FUN_00149e60();
  }
  FUN_000e40d0(param_2);
  FUN_000d9320(param_1);
  if (*(int *)(param_1 + 0xbd4) != 0) {
    FUN_00177ba0(*(int *)(param_1 + 0xbd4),param_2);
  }
  if (*(int *)(param_1 + 0xa40) != 0) {
    FUN_001f48f0(param_2);
  }
  FUN_00140d70(param_2);
  FUN_00169e20(*(undefined4 *)(param_1 + 0xa44),param_2);
  (**(code **)(*DAT_00443310 + 0x6c))(DAT_00443310,param_2);
  FUN_000cdf90(*(undefined4 *)(param_1 + 500),param_2);
  FUN_000d2040(*(undefined4 *)(param_1 + 0xa48),param_2);
  FUN_00225220(*(undefined4 *)(param_1 + 0x1fc),param_2);
  FUN_002173a0(param_2);
  if (*(int *)(param_1 + 0xa58) != 0) {
    FUN_002292a0(param_2);
  }
  if (*(int *)(param_1 + 0x1f8) != 0) {
    FUN_00057a30(*(int *)(param_1 + 0x1f8),param_2);
  }
  FUN_000d4360(param_1,param_2);
  FUN_000d9090(param_1,param_2);
  FUN_000d9770(param_2,0xffffffff);
  if (*(int *)(param_1 + 8) != 0) {
    piVar5 = *(int **)(param_1 + 4);
    if (piVar5 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = (int *)*piVar5;
    }
    unaff_ESI = unaff_ESI & 0xffffff;
    if (piVar4 != piVar5) {
      do {
        if ((char)(unaff_ESI >> 0x18) != '\0') break;
        iVar6 = piVar4[3];
        if (iVar6 == 0) {
LAB_000d9be3:
          piVar5 = (int *)*piVar4;
          if (piVar4 != *(int **)(param_1 + 4)) {
            *(int **)piVar4[1] = piVar5;
            *(int *)(*piVar4 + 4) = piVar4[1];
            if (piVar4[3] != 0) {
              FUN_0008f6e0();
            }
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00237ec0(piVar4);
          }
        }
        else {
          if ((*(byte *)(iVar6 + 0x7d8) & 2) == 0) {
            cVar2 = FUN_00127c60(iVar6,piVar4[4],piVar4 + 5,piVar4 + 8,piVar4[0xb],piVar4[0xc],
                                 piVar4[0xd]);
            if ((cVar2 != '\0') && ((float)piVar4[0xd] != 0.0)) {
              unaff_ESI = CONCAT13(1,(int3)unaff_ESI);
            }
            goto LAB_000d9be3;
          }
          FUN_00127290(iVar6);
          unaff_ESI = CONCAT13(1,(int3)unaff_ESI);
          piVar5 = piVar4;
        }
        piVar4 = piVar5;
      } while (piVar5 != *(int **)(param_1 + 4));
    }
  }
  uVar3 = *(uint *)(param_1 + 0x14);
  if (uVar3 != 0) {
    if (*(undefined4 **)(param_1 + 0x10) == (undefined4 *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = (int *)**(undefined4 **)(param_1 + 0x10);
    }
    uVar7 = 1;
    if (DAT_0040d5fc < uVar3) {
      uVar7 = uVar3 / DAT_0040d5fc;
    }
    if (piVar5 != *(int **)(param_1 + 0x10)) {
      do {
        if ((int)uVar7 < 1) break;
        if (piVar5[3] != 0) {
          pbVar1 = (byte *)(piVar5[3] + 0x70);
          *pbVar1 = *pbVar1 & 0x7f;
        }
        piVar4 = (int *)*piVar5;
        uVar7 = uVar7 - 1;
        if (piVar5 != *(int **)(param_1 + 0x10)) {
          *(int **)piVar5[1] = piVar4;
          *(int *)(*piVar5 + 4) = piVar5[1];
          if (piVar5[3] != 0) {
            FUN_0008f6e0();
          }
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00237ec0(piVar5);
        }
        piVar5 = piVar4;
      } while (piVar4 != (int *)*(int *)(param_1 + 0x10));
    }
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    if (*(int **)(param_1 + 0x1c) == (int *)0x0) {
      iVar6 = 0;
    }
    else {
      iVar6 = **(int **)(param_1 + 0x1c);
    }
    if (iVar6 != *(int *)(param_1 + 0x1c)) {
      FUN_0022bfc0(*(undefined4 *)(iVar6 + 0x68),*(undefined4 *)(iVar6 + 0x6c));
      FUN_0022cea0(param_1,iVar6 + 0x70);
      FUN_000e0810(iVar6);
    }
  }
  FUN_000d9840(param_2);
  FUN_00174270(*(undefined4 *)(param_1 + 0x20c),param_2);
  FUN_000d99d0(param_2);
  if (*(undefined4 **)(param_1 + 0x150) == (undefined4 *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = (int *)**(undefined4 **)(param_1 + 0x150);
  }
  if (piVar5 != *(int **)(param_1 + 0x150)) {
    do {
      if ((int *)piVar5[3] != (int *)0x0) {
        (**(code **)(*(int *)piVar5[3] + 0x1c))(param_2);
      }
      piVar5 = (int *)*piVar5;
    } while (piVar5 != (int *)*(int *)(param_1 + 0x150));
  }
  (**(code **)(**(int **)(param_1 + 0xb80) + 4))(param_2);
  iVar6 = *(int *)(param_1 + 0xbdc);
  uVar3 = 0;
  if (*(int *)(iVar6 + 8) != 0) {
    if (*(int *)(iVar6 + 8) == 0) goto LAB_000d9d94;
    do {
      if (*(int *)(*(int *)(iVar6 + 0xc) + uVar3 * 4) != 0) {
        FUN_0005c1c0(param_2);
      }
LAB_000d9d94:
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(iVar6 + 8));
  }
  FUN_000e0410(param_1,param_2);
  FUN_000b8e30(*(undefined4 *)(param_1 + 0xbe4),param_2,0);
  piVar5 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x58))();
  if ((*piVar5 == 0x120785ef) ||
     (piVar5 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x58))(), *piVar5 == -0x104e72d8))
  {
    FUN_00074a60(param_2);
  }
  FUN_000d0890(param_2);
  iVar6 = *(int *)(param_1 + 0x208);
  FUN_001794f0();
  FUN_00179590(iVar6);
  uVar3 = FUN_00179660(iVar6);
  if ((8 < uVar3) && (uVar3 = FUN_00179660(iVar6), 8 < uVar3)) {
    FUN_0017a580(*(undefined4 *)(iVar6 + 0x20),unaff_ESI);
  }
  FUN_0017a7a0(&PTR_LAB_00399db4);
  FUN_001793e0(*(undefined4 *)(param_1 + 0x208),0x10);
  FUN_00179ec0(*(undefined4 *)(param_1 + 0x208),param_2);
  return;
}
