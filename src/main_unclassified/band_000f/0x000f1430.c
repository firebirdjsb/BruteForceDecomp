/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 98AAEFF86A1857B6955A423F2E1DA750039F31E3ADA41B64C2170C8DC0050532
 * Entry: 0x000f1430, Ghidra index: 3009, label: FUN_000f1430
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_x86_word_lanes.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040cd74;
extern uint32_t DAT_00469b58;
/* WARNING: Type propagation algorithm not settling */

undefined1 FUN_000f1430(int param_1,int *param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined4 *******pppppppuVar13;
  int *piStack_40;
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [4];
  undefined4 *******apppppppuStack_34 [4];
  undefined4 uStack_24;
  uint uStack_20;
  undefined1 auStack_1c [4];
  undefined4 uStack_18;
  undefined4 uStack_8;
  uint uStack_4;
  
  piVar10 = param_2;
  iVar3 = (**(code **)(*param_2 + 4))();
  if (iVar3 != 8) {
    return 0;
  }
  FUN_00102d50();
  iVar3 = DAT_00469b58;
  piVar10[0x27] = -1;
  piVar10[0x28] = -1;
  iVar3 = (**(code **)(**(int **)(iVar3 + 8) + 0x1ac))();
  piStack_40 = *(int **)(iVar3 + 8);
  piVar10 = *(int **)(iVar3 + 4);
  if (piVar10 != piStack_40) {
    do {
      iVar11 = *piVar10;
      iVar3 = iVar11 + 8;
      if ((((iVar3 != 0) && (iVar3 = FUN_002eaa70(iVar3), iVar3 != 0)) &&
          (iVar3 = FUN_00102b50(iVar11,auStack_3c), iVar3 != 0)) &&
         (iVar3 = FUN_001098f0(), iVar3 != 0)) {
        FUN_0010a7d0();
      }
      piVar10 = piVar10 + 1;
    } while (piVar10 != piStack_40);
  }
  piStack_40 = (int *)0xebb41e5c;
  uVar4 = FUN_001e97c0();
  uStack_4 = 7;
  uStack_8 = 0;
  /* MOV WORD PTR [ESP+0x3c],BX (BX=0) at 0x000F14E7.
   * Initialize ONLY the lower two bytes; the upper two bytes belong to the
   * original 32-bit guest stack slot and must not be read before assignment. */
  bf_x86_word_store_byte(&uStack_18,0U,UINT8_C(0));
  bf_x86_word_store_byte(&uStack_18,1U,UINT8_C(0));
  uVar4 = FUN_002eaa70(uVar4);
  FUN_000876a0(auStack_1c,uVar4);
  if (uStack_4 < 8) {
    puVar12 = &uStack_18;
  }
  else {
    puVar12 = (undefined4 *)(uintptr_t)uStack_18;
    if (uStack_18 == 0) goto LAB_000f1544;
  }
  iVar3 = FUN_002eaa70(puVar12);
  if (((iVar3 != 0) && (iVar3 = FUN_00102b50(&piStack_40,auStack_3c), iVar3 != 0)) &&
     (iVar3 = FUN_001098f0(), iVar3 != 0)) {
    FUN_0010a7d0();
  }
LAB_000f1544:
  iVar3 = param_1;
  puVar12 = *(undefined4 **)(param_1 + 0x240);
  iVar11 = param_1 + 0x23c;
  if (puVar12 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *puVar12;
  }
  FUN_001298b0(&param_1,uVar4,puVar12);
  iVar7 = *(int *)(iVar3 + 0x240);
  iVar5 = FUN_000f6790(iVar11,iVar7,*(undefined4 *)(iVar7 + 4),&piStack_40);
  FUN_000b2a50();
  *(int *)(iVar7 + 4) = iVar5;
  **(int **)(iVar5 + 4) = iVar5;
  param_1 = 1;
  do {
    iVar7 = param_1;
    iVar5 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x1a4))(param_1);
    if (iVar5 == 0) break;
    for (iVar6 = *(int *)(iVar5 + 0x90); iVar6 != *(int *)(iVar5 + 0x94); iVar6 = iVar6 + 0x6c) {
      if (*(int *)(iVar6 + 0x10) == 0x17506391) {
        uStack_20 = 7;
        uStack_24 = 0;
        apppppppuStack_34[0] = (undefined4 *******)((uint)apppppppuStack_34[0] & 0xffff0000);
        FUN_00087940(auStack_38,0,0xffffffff);
        FUN_002eaa70(&DAT_0040cd74);
        FUN_0008ed00();
        if (*(uint *)(iVar5 + 0x54) < 8) {
          iVar7 = iVar5 + 0x40;
        }
        else {
          iVar7 = *(int *)(iVar5 + 0x40);
        }
        FUN_002eaa70(iVar7);
        FUN_0008ed00();
        if (uStack_20 < 8) {
          pppppppuVar13 = apppppppuStack_34;
LAB_000f1664:
          iVar7 = FUN_002eaa70(pppppppuVar13);
          if (((iVar7 != 0) && (iVar7 = FUN_00102b50(iVar5 + 0x58,auStack_3c), iVar7 != 0)) &&
             (iVar7 = FUN_001098f0(), iVar7 != 0)) {
            FUN_0010a7d0();
          }
        }
        else {
          pppppppuVar13 = apppppppuStack_34[0];
          if (apppppppuStack_34[0] != (undefined4 *******)0x0) goto LAB_000f1664;
        }
        iVar7 = *(int *)(iVar3 + 0x240);
        iVar5 = FUN_000f6790(iVar11,iVar7,*(undefined4 *)(iVar7 + 4),iVar5 + 0x58);
        FUN_000b2a50();
        *(int *)(iVar7 + 4) = iVar5;
        **(int **)(iVar5 + 4) = iVar5;
        if (7 < uStack_20) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00237ec0(apppppppuStack_34[0]);
        }
        uStack_20 = 7;
        uStack_24 = 0;
        apppppppuStack_34[0] = (undefined4 *******)((uint)apppppppuStack_34[0] & 0xffff0000);
        iVar7 = param_1;
        break;
      }
    }
    param_1 = iVar7 + 1;
  } while (param_1 < 0x20);
  piVar8 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x1e8))();
  piVar10 = (int *)param_2[0x1f];
  piVar1 = (int *)param_2[0x20];
  if (piVar10 != piVar1) {
    piVar9 = piVar10;
    do {
      iVar3 = *piVar9;
      if (*(int *)(iVar3 + 0x24) == *piVar8) {
        if ((iVar3 != 0) && (*(char *)(iVar3 + 0x74) == '\0')) goto joined_r0x000f174a;
        break;
      }
      piVar9 = piVar9 + 1;
    } while (piVar9 != piVar1);
  }
LAB_000f176e:
  FUN_00102e60();
LAB_000f1775:
  if (uStack_4 < 8) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(uStack_18);
joined_r0x000f174a:
  if (piVar10 == piVar1) goto LAB_000f176e;
  if (*(int *)(*piVar10 + 0x24) == *piVar8) {
    cVar2 = FUN_00102e60();
    if (cVar2 != '\0') goto LAB_000f1775;
    goto LAB_000f176e;
  }
  piVar10 = piVar10 + 1;
  goto joined_r0x000f174a;
}
