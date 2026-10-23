/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E7345610A04E9B1D2CACF683B41D649D88D32DEA3339CB6C43CB9A990B7B003D
 * Entry: 0x00282720, Ghidra index: 9063, label: FUN_00282720
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_0046990c;
void FUN_00282720(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  undefined1 uVar5;
  char cVar6;
  int in_EAX;
  int iVar7;
  int iVar8;
  int *unaff_EBX;
  int *unaff_EDI;
  int **ppiVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  int *piVar15;
  undefined4 uVar16;
  int *piVar17;
  undefined4 uVar18;
  int *piVar19;
  int *piStack_238;
  int *piStack_22c;
  int *piStack_228;
  int *piStack_224;
  int *piStack_220;
  int *piStack_21c;
  int *piStack_218;
  undefined4 uStack_214;
  int *piStack_210;
  undefined1 auStack_200 [4];
  int *piStack_1fc;
  int *piStack_1f8;
  int iStack_1e8;
  
  (**(code **)(*DAT_0046990c + 0x20))();
  (**(code **)(*DAT_0046990c + 0x20))();
  (**(code **)(*DAT_0046990c + 0x20))();
  (**(code **)(*DAT_0046990c + 0x20))();
  (**(code **)(*DAT_0046990c + 0x20))();
  (**(code **)(*DAT_0046990c + 0x20))();
  (**(code **)(*DAT_0046990c + 0x20))();
  (**(code **)(*DAT_0046990c + 0x20))();
  (**(code **)(*DAT_0046990c + 0x20))();
  piVar1 = DAT_0046990c;
  (**(code **)(*DAT_0046990c + 0x20))();
  (**(code **)(*DAT_0046990c + 0x20))();
  (**(code **)(*DAT_0046990c + 0x20))();
  (**(code **)(*DAT_0046990c + 0x20))();
  (**(code **)(*DAT_0046990c + 0x20))();
  (**(code **)(*DAT_0046990c + 0x20))();
  (**(code **)(*DAT_0046990c + 0x20))();
  (**(code **)(*DAT_0046990c + 0x20))();
  if (*(int **)(in_EAX + 8) != (int *)0x0) {
    (**(code **)(**(int **)(in_EAX + 8) + 0x2c))();
  }
  (**(code **)(**(int **)(in_EAX + 8) + 0x2c))();
  (**(code **)(*unaff_EBX + 0x2c))();
  FUN_001e1000();
  (**(code **)(**(int **)(in_EAX + 8) + 0x30))();
  (**(code **)(**(int **)(in_EAX + 8) + 0x2c))();
  piStack_1f8 = (int *)0x2829a2;
  (**(code **)(*unaff_EBX + 0x30))();
  piStack_1f8 = (int *)0x2829ab;
  FUN_001e1000();
  piStack_1fc = *(int **)(in_EAX + 8);
  piStack_1f8 = (int *)0xffd9396e;
  auStack_200 = (undefined1  [4])0x2829b9;
  (**(code **)(*piStack_1fc + 0x30))();
  piVar19 = *(int **)(in_EAX + 8);
  auStack_200 = (undefined1  [4])0x1;
  (**(code **)(*piVar19 + 0x2c))();
  piStack_210 = (int *)0x2829cf;
  uVar5 = (**(code **)(*unaff_EBX + 0x38))();
  piStack_210 = (int *)0x1;
  uStack_214 = 1;
  piStack_218 = (int *)(auStack_200 + 3);
  auStack_200[3] = uVar5;
  piStack_220 = *(int **)(in_EAX + 8);
  piStack_224 = (int *)0x2829ea;
  piStack_21c = unaff_EDI;
  (**(code **)(*piStack_220 + 0x34))();
  piStack_228 = *(int **)(in_EAX + 8);
  piStack_224 = piVar1;
  piStack_22c = (int *)0x2829f8;
  (**(code **)(*piStack_228 + 0x30))();
  piVar3 = piStack_210;
  piVar1 = *(int **)(in_EAX + 8);
  piStack_22c = (int *)0x1;
  (**(code **)(*piVar1 + 0x2c))();
  piVar4 = piStack_1f8;
  piVar2 = *(int **)(in_EAX + 8);
  piStack_238 = (int *)0x1;
  (**(code **)(*piVar2 + 0x2c))();
  iVar7 = (**(code **)(*unaff_EBX + 0x40))();
  iStack_1e8 = 0;
  if (0 < iVar7) {
    do {
      cVar6 = (**(code **)(*unaff_EBX + 0x4c))();
      if (cVar6 == '\0') {
        (**(code **)(*unaff_EBX + 0x48))();
        iVar8 = (**(code **)(*unaff_EBX + 0x50))();
        if (iVar8 != 0) {
          uVar18 = 1;
          (**(code **)(**(int **)(in_EAX + 8) + 0x2c))(*(int **)(in_EAX + 8),piVar1,1);
          uVar16 = 1;
          (**(code **)(**(int **)(in_EAX + 8) + 0x2c))(*(int **)(in_EAX + 8),piStack_218,1);
          FUN_001e1000();
          piVar14 = piStack_224;
          (**(code **)(**(int **)(in_EAX + 8) + 0x30))(*(int **)(in_EAX + 8),piStack_224);
          piVar13 = piVar3;
          (**(code **)(**(int **)(in_EAX + 8) + 0x2c))(*(int **)(in_EAX + 8),piVar3,1);
          FUN_001e1000();
          (**(code **)(**(int **)(in_EAX + 8) + 0x30))(*(int **)(in_EAX + 8),piVar4);
          (**(code **)(**(int **)(in_EAX + 8) + 0x2c))(*(int **)(in_EAX + 8),uVar18,1);
          switch(*(byte *)(piStack_22c + 2) & 0xf) {
          default:
            break;
          case 1:
            break;
          case 2:
            break;
          case 3:
            break;
          case 4:
          }
          FUN_001e1000();
          (**(code **)(**(int **)(in_EAX + 8) + 0x30))(*(int **)(in_EAX + 8),uVar16);
          uVar16 = 1;
          (**(code **)(**(int **)(in_EAX + 8) + 0x2c))(*(int **)(in_EAX + 8),piVar14,1);
          switch(*(byte *)(piVar2 + 2) >> 4) {
          default:
            break;
          case 1:
            break;
          case 2:
            break;
          case 3:
            break;
          case 4:
          }
          FUN_001e1000();
          (**(code **)(**(int **)(in_EAX + 8) + 0x30))(*(int **)(in_EAX + 8),piVar13);
          (**(code **)(**(int **)(in_EAX + 8) + 0x30))(*(int **)(in_EAX + 8),uVar16);
        }
      }
      iStack_1e8 = iStack_1e8 + 1;
    } while (iStack_1e8 < iVar7);
  }
  piVar13 = *(int **)(in_EAX + 8);
  (**(code **)(*piVar13 + 0x30))();
  piVar14 = *(int **)(in_EAX + 8);
  piVar17 = piStack_224;
  (**(code **)(*piVar14 + 0x2c))(piVar14,piStack_224,1);
  piVar15 = unaff_EBX;
  piStack_1f8 = (int *)(**(code **)(*unaff_EBX + 0x5c))();
  iVar7 = 0;
  piVar11 = piVar14;
  piVar12 = piVar13;
  if (0 < (int)piStack_1f8) {
    do {
      cVar6 = (**(code **)(*unaff_EBX + 0x68))();
      piVar14 = piVar11;
      piVar13 = piVar12;
      if (cVar6 == '\0') {
        iVar7 = (**(code **)(*unaff_EBX + 100))();
        (**(code **)(**(int **)(in_EAX + 8) + 0x2c))(*(int **)(in_EAX + 8),uStack_214,1);
        uVar16 = 1;
        piVar13 = piVar12;
        (**(code **)(**(int **)(in_EAX + 8) + 0x2c))(*(int **)(in_EAX + 8),piVar12,1);
        FUN_001e1000();
        piVar14 = piVar11;
        (**(code **)(**(int **)(in_EAX + 8) + 0x30))(*(int **)(in_EAX + 8),piVar11);
        piStack_224 = (int *)0x1d3e389e;
        piVar10 = unaff_EBX;
        cVar6 = (**(code **)(*unaff_EBX + 0x6c))();
        if ((cVar6 != '\0') && (0 < (int)piVar12)) {
          ppiVar9 = &piStack_22c;
          piStack_238 = piVar12;
          do {
            (**(code **)(**(int **)(in_EAX + 8) + 0x2c))(*(int **)(in_EAX + 8),uVar16,1);
            (**(code **)(**(int **)(in_EAX + 8) + 0x34))(*(int **)(in_EAX + 8),piVar11,ppiVar9,4,1);
            (**(code **)(**(int **)(in_EAX + 8) + 0x30))(*(int **)(in_EAX + 8),piVar10);
            ppiVar9 = ppiVar9 + 1;
            piStack_238 = (int *)((int)piStack_238 + -1);
          } while (piStack_238 != (int *)0x0);
        }
        (**(code **)(**(int **)(in_EAX + 8) + 0x30))(*(int **)(in_EAX + 8),unaff_EBX);
      }
      iVar7 = iVar7 + 1;
      piVar11 = piVar14;
      piVar12 = piVar13;
    } while (iVar7 < (int)piStack_1f8);
  }
  (**(code **)(**(int **)(in_EAX + 8) + 0x30))(*(int **)(in_EAX + 8),piVar1);
  (**(code **)(**(int **)(in_EAX + 8) + 0x30))(*(int **)(in_EAX + 8),piVar13);
  piVar11 = *(int **)(in_EAX + 8);
  if (piVar11 != (int *)0x0) {
    (**(code **)(*piVar11 + 0x30))(piVar11,piVar14);
  }
  if (piVar13 != (int *)0x0) {
    (**(code **)(*piVar13 + 8))(piVar13);
  }
  if (piVar19 != (int *)0x0) {
    (**(code **)(*piVar19 + 8))(piVar19);
  }
  if (piStack_220 != (int *)0x0) {
    (**(code **)(*piStack_220 + 8))(piStack_220);
    piStack_220 = (int *)0x0;
  }
  if (piStack_21c != (int *)0x0) {
    (**(code **)(*piStack_21c + 8))(piStack_21c);
    piStack_21c = (int *)0x0;
  }
  if (unaff_EBX != (int *)0x0) {
    (**(code **)(*unaff_EBX + 8))(unaff_EBX);
  }
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4);
  }
  if (piStack_238 != (int *)0x0) {
    (**(code **)(*piStack_238 + 8))(piStack_238);
  }
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  if (piVar15 != (int *)0x0) {
    (**(code **)(*piVar15 + 8))(piVar15);
  }
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  if (piVar17 != (int *)0x0) {
    (**(code **)(*piVar17 + 8))(piVar17);
  }
  if (piStack_22c != (int *)0x0) {
    (**(code **)(*piStack_22c + 8))(piStack_22c);
    piStack_22c = (int *)0x0;
  }
  if (piStack_228 != (int *)0x0) {
    (**(code **)(*piStack_228 + 8))(piStack_228);
    piStack_228 = (int *)0x0;
  }
  if (piStack_224 != (int *)0x0) {
    (**(code **)(*piStack_224 + 8))(piStack_224);
    piStack_224 = (int *)0x0;
  }
  if (piVar14 != (int *)0x0) {
    (**(code **)(*piVar14 + 8))(piVar14);
  }
  if (piStack_218 != (int *)0x0) {
    (**(code **)(*piStack_218 + 8))(piStack_218);
  }
  return;
}
