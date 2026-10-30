/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B388A6B947EFE824C6EB2B633105B29C261A3FC483F6CC077DA4092DABB5D1CC
 * Entry: 0x000c1280, Ghidra index: 2353, label: FUN_000c1280
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t switchD_000c1317_default[];
undefined4 FUN_000c1280(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int *piVar6;
  char cVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  cVar7 = '\0';
  if (*(int *)(param_1 + 0x78) == 0) {
    return 0;
  }
  if ((((param_2 != -1) && (piVar6 = *(int **)(param_1 + 0x68), piVar6 != (int *)0x0)) &&
      ((int)*(int **)(param_1 + 0x6c) - (int)piVar6 >> 2 != 0)) &&
     (bVar2 = true, piVar6 != *(int **)(param_1 + 0x6c))) {
    do {
      piVar1 = (int *)*piVar6;
      if ((piVar1 == (int *)0x0) || (iVar3 = (**(code **)(*piVar1 + 0xf4))(), iVar3 == 0))
      goto switchD_000c1317_default;
      switch(param_2) {
      case 0:
        FUN_0005bda0();
        if (*(int *)(iVar3 + 0x58) != 3) {
          FUN_0004e8f0();
          *(undefined4 *)(iVar3 + 0x58) = 3;
          FUN_00018000();
          FUN_00039f00(iVar3);
          FUN_00055b50();
          FUN_00015fe0();
          FUN_0001a4e0();
          iVar3 = FUN_000120f0();
          if ((iVar3 == 0) || (iVar3 = FUN_000120f0(), *(int *)(iVar3 + 0x59c) == 0)) break;
          FUN_000120f0();
LAB_000c155a:
          uVar8 = 1;
          uVar4 = FUN_000120f0(1);
          FUN_0005e8b0(uVar4,uVar8);
        }
        break;
      case 1:
        FUN_0005bda0();
        if (*(int *)(iVar3 + 0x58) != 4) {
          *(undefined4 *)(iVar3 + 0x474) = 0;
          *(undefined4 *)(iVar3 + 0x46c) = 0;
          *(byte *)(iVar3 + 0x470) = *(byte *)(iVar3 + 0x470) & 0xfa | 2;
          FUN_0004e8f0();
          *(uint *)(iVar3 + 0x3c4) = *(uint *)(iVar3 + 0x3c4) & 0xfffffffe;
          *(undefined4 *)(iVar3 + 0x58) = 4;
          FUN_00018000();
          FUN_00039f00(iVar3);
          FUN_00055b50();
          FUN_00015fe0();
          FUN_0001a4e0();
          iVar3 = FUN_000120f0();
          if ((iVar3 != 0) && (iVar3 = FUN_000120f0(), *(int *)(iVar3 + 0x59c) != 0)) {
            FUN_000120f0();
            goto LAB_000c155a;
          }
        }
        break;
      case 2:
        FUN_0005bda0();
        if (*(int *)(iVar3 + 0x58) != 1) {
          FUN_0004e8f0();
          *(undefined4 *)(iVar3 + 0x58) = 1;
          goto LAB_000c1504;
        }
        break;
      case 3:
        FUN_0005bda0();
        *(undefined4 *)(iVar3 + 0x8ac) = param_4;
        FUN_0004e8f0();
        *(undefined4 *)(iVar3 + 0x58) = 5;
LAB_000c1504:
        FUN_00018000();
        FUN_00039f00(iVar3);
        FUN_00055b50();
        FUN_00015fe0();
        FUN_0001a4e0();
        iVar3 = FUN_000120f0();
        if ((iVar3 != 0) && (iVar3 = FUN_000120f0(), *(int *)(iVar3 + 0x59c) != 0)) {
          FUN_000120f0();
          goto LAB_000c155a;
        }
        break;
      case 4:
        uVar13 = 0;
        uVar12 = 0xbf800000;
        uVar11 = 0;
        uVar10 = 0;
        uVar9 = 2;
        uVar8 = 0x14;
        uVar4 = (**(code **)(*piVar1 + 0xf4))(0x14,2,0,0,0xbf800000,0);
        goto LAB_000c15b1;
      case 5:
        uVar13 = 0;
        uVar12 = 0xbf800000;
        uVar11 = 0;
        uVar10 = 0;
        uVar9 = 2;
        uVar8 = 0x7f;
        uVar4 = (**(code **)(*piVar1 + 0xf4))(0x7f,2,0,0,0xbf800000,0);
LAB_000c15b1:
        bVar2 = false;
        cVar7 = '\x01';
        FUN_00024540(uVar4,uVar8,uVar9,uVar10,uVar11,uVar12,uVar13);
      default:
        goto switchD_000c1317_default;
      }
      cVar7 = '\x01';
switchD_000c1317_default:
      piVar6 = piVar6 + 1;
    } while (piVar6 != *(int **)(param_1 + 0x6c));
    if ((bVar2) && (cVar7 != '\0')) {
      FUN_000c1630(param_1,param_2,param_1 + 100);
    }
  }
  iVar3 = *(int *)(param_1 + 0x78);
  puVar5 = (undefined4 *)(iVar3 + 0x58);
  *puVar5 = 0;
  *(undefined1 *)(iVar3 + 0x5c) = 0;
  return CONCAT31((int3)((uint)puVar5 >> 8),cVar7);
}
