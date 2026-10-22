/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 74C769774EAD4F9BA343143E6DD0673FDBE3830452D8D386FD73E2156C52AE93
 * Entry: 0x000f3520, Ghidra index: 3041, label: FUN_000f3520
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046995c;
extern uint32_t DAT_00469b58;
undefined4 FUN_000f3520(int param_1)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int *piStack_244;
  undefined4 uStack_240;
  int *piStack_23c;
  int *piStack_238;
  int local_234;
  int *apiStack_230 [3];
  undefined1 local_224 [548];
  
  local_234 = *(int *)(DAT_0046995c + 0xa4);
  if (local_234 == -0x7fffffee) {
LAB_000f35ef:
    cVar2 = FUN_001ed100(local_224);
    if (cVar2 == '\0') {
      return 1;
    }
    piStack_244 = (int *)0xe1312f33;
    piVar3 = (int *)FUN_00100f90();
    piStack_23c = (int *)0x0;
    if ((piVar3 != (int *)0x0) && (iVar4 = (**(code **)(*piVar3 + 4))(), iVar4 == 1)) {
      piStack_23c = piVar3;
    }
    piStack_244 = (int *)0x13e1ac63;
    piVar3 = (int *)FUN_00100f90();
    piStack_238 = (int *)0x0;
    if ((piVar3 != (int *)0x0) && (iVar4 = (**(code **)(*piVar3 + 4))(), iVar4 == 7)) {
      piStack_238 = piVar3;
    }
    piStack_244 = (int *)0xe44eeedf;
    piVar3 = (int *)FUN_00100f90();
    piStack_244 = (int *)0x0;
    if ((piVar3 != (int *)0x0) && (iVar4 = (**(code **)(*piVar3 + 4))(), iVar4 == 6)) {
      piStack_244 = piVar3;
    }
    uStack_240 = 0xefce7048;
    piVar5 = (int *)FUN_00100f90();
    piVar3 = (int *)0x0;
    if ((piVar5 != (int *)0x0) && (iVar4 = (**(code **)(*piVar5 + 4))(), iVar4 == 6)) {
      piVar3 = piVar5;
    }
    uStack_240 = 0x12cc84b5;
    piVar6 = (int *)FUN_00100f90();
    piVar5 = (int *)0x0;
    if ((piVar6 != (int *)0x0) && (iVar4 = (**(code **)(*piVar6 + 4))(), iVar4 == 6)) {
      piVar5 = piVar6;
    }
    iVar4 = -1;
    if (*(int *)(DAT_0046995c + 0x1c) != 0) {
      cVar2 = FUN_002e5880();
      if (cVar2 == '\0') {
        iVar4 = FUN_002e5bf0(0);
        iVar4 = *(int *)(iVar4 + 0x2c);
      }
      else {
        iVar4 = 0;
      }
    }
    FUN_000f3240(piStack_238,iVar4);
    apiStack_230[0] = piStack_244;
    apiStack_230[1] = piVar3;
    apiStack_230[2] = piVar5;
    iVar7 = 0;
    do {
      iVar1 = iVar7 + 1;
      FUN_000f32e0(apiStack_230[iVar7],iVar1,iVar4,local_234,local_224);
      iVar7 = iVar1;
    } while (iVar1 < 3);
    if (iVar4 != 0) {
      piVar3 = *(int **)(param_1 + 0x74);
      if (piVar3 != *(int **)(param_1 + 0x78)) {
        while (piVar5 = (int *)*piVar3, piVar5[9] != 0x499ce0b) {
          piVar3 = piVar3 + 1;
          if (piVar3 == *(int **)(param_1 + 0x78)) {
            *(byte *)(param_1 + 0x66) = *(byte *)(param_1 + 0x66) & 0xfe;
            return 1;
          }
        }
        if ((*(byte *)(piVar5 + 10) & 2) != 0) {
          *(byte *)(piVar5 + 10) = *(byte *)(piVar5 + 10) & 0xfd;
          (**(code **)(*piVar5 + 0x24))();
        }
      }
      *(byte *)(param_1 + 0x66) = *(byte *)(param_1 + 0x66) & 0xfe;
    }
    return 1;
  }
  if (local_234 == -0x7fffffed) {
    piVar3 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
    (**(code **)(*piVar3 + 0x14))(param_1);
    iVar4 = DAT_0046995c;
    if (*(int *)(DAT_0046995c + 0x1c) != 1) goto LAB_000f35db;
    *(undefined4 *)(DAT_0046995c + 0x1c) = 0;
  }
  else {
    if (local_234 == 0) goto LAB_000f35ef;
    piVar3 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
    piStack_244 = (int *)0x19aa6e23;
    (**(code **)(*piVar3 + 8))(&piStack_244,0,0);
    piVar3 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
    (**(code **)(*piVar3 + 0x20))();
    iVar4 = DAT_0046995c;
    if (*(int *)(DAT_0046995c + 0x1c) != 1) goto LAB_000f35db;
    *(undefined4 *)(DAT_0046995c + 0x1c) = 0;
  }
  FUN_002e7280(1);
LAB_000f35db:
  *(undefined4 *)(iVar4 + 0xa4) = 0x80000013;
  return 0;
}
