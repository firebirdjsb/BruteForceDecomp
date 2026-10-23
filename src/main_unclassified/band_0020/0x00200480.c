/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3590E2E9F94C492261E6956C6F54441FEA615CA368182CB6540BDA5555B2080F
 * Entry: 0x00200480, Ghidra index: 7252, label: FUN_00200480
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined1 FUN_00200480(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined1 local_55;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  local_55 = 0;
  if (*(int *)(param_1 + 0x44) != 0) {
    if (*(undefined4 **)(param_1 + 0x24) == (undefined4 *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)**(undefined4 **)(param_1 + 0x24);
    }
    if (piVar2 != *(int **)(param_1 + 0x24)) {
      do {
        piVar4 = (int *)piVar2[3];
        if (piVar4 == (int *)0x0) {
LAB_0020061f:
          local_55 = 1;
        }
        else {
          iVar3 = (**(code **)(*piVar4 + 4))();
          if (iVar3 == 0) {
            if ((int *)piVar2[3] != (int *)0x0) {
              piVar4 = (int *)(**(code **)(*(int *)piVar2[3] + 0xc))();
              if (((piVar4 != (int *)0x0) && (iVar3 = (**(code **)(*piVar4 + 0x20))(), iVar3 == 7))
                 && (piVar4 = (int *)piVar4[0x31], piVar4 != (int *)0x0)) goto LAB_0020050e;
            }
            goto LAB_0020061f;
          }
LAB_0020050e:
          if (piVar4 == (int *)0x0) goto LAB_0020061f;
          iVar3 = *(int *)(param_1 + 0x44);
          if (*(int *)(piVar4[3] + 4) != 3) {
LAB_00200565:
            puVar5 = (undefined4 *)(**(code **)(*(int *)(iVar3 + 8) + 4))();
            uStack_34 = puVar5[2];
            uStack_38 = puVar5[1];
            uStack_3c = *puVar5;
            piVar6 = (int *)(iVar3 + 0xc);
            iVar3 = (**(code **)(*piVar6 + 4))();
            if (iVar3 == 0) {
              (**(code **)(*piVar4 + 0x48))(&uStack_3c);
            }
            else {
              uStack_c = uStack_3c;
              uStack_8 = uStack_38;
              uStack_4 = uStack_34;
              piVar6 = (int *)(**(code **)(*piVar6 + 4))();
              puVar5 = (undefined4 *)(**(code **)(*piVar6 + 8))();
              uStack_30 = *puVar5;
              uStack_2c = puVar5[1];
              uStack_28 = puVar5[2];
              uStack_24 = puVar5[3];
              uStack_10 = puVar5[8];
              uStack_20 = puVar5[4];
              uStack_1c = puVar5[5];
              uStack_18 = puVar5[6];
              uStack_14 = puVar5[7];
              (**(code **)(*piVar4 + 0x50))(&uStack_30);
            }
            FUN_0004c5e0();
            goto LAB_0020061f;
          }
          if ((*(byte *)(piVar4 + 0x1c) & 1) == 0) {
            piVar4[0x1cd] = 3;
            piVar4[0x1cf] = 0;
            piVar4[0x99] = 0x40a00000;
            piVar4[0x1ce] = 0;
            iVar1 = *(int *)(param_1 + 0x48);
            piVar4[0x1cd] = 0;
            piVar4[0x1cf] = iVar1;
            goto LAB_00200565;
          }
        }
        piVar2 = (int *)*piVar2;
        if (piVar2 == (int *)*(int *)(param_1 + 0x24)) {
          return local_55;
        }
      } while( true );
    }
  }
  return 0;
}
