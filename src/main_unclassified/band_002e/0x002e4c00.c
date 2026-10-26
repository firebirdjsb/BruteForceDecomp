/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7DC1254CBD3D7761BDC0FE2341EE1A75B4119552DD80D8849A5BE7BEC20B062E
 * Entry: 0x002e4c00, Ghidra index: 10460, label: FUN_002e4c00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int * FUN_002e4c00(int *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int *in_ECX;
  int iVar6;
  undefined4 unaff_EBX;
  uint *unaff_EBP;
  int *piVar7;
  uint *puVar8;
  int *piVar9;
  uint uVar10;
  bool bVar11;
  uint *puStack_18;
  int *piStack_14;
  int iStack_10;
  int iStack_c;
  uint uStack_4;
  
  piVar2 = param_1;
  if (in_ECX != param_1) {
    if (in_ECX[0x95] != param_1[0x95]) {
      *(undefined1 *)(in_ECX + 0x92) = 1;
      in_ECX[0x95] = param_1[0x95];
    }
    if ((param_1[0x97] != -1) && (in_ECX[0x97] != param_1[0x97])) {
      *(undefined1 *)(in_ECX + 0x92) = 1;
      in_ECX[0x97] = param_1[0x97];
    }
    if ((param_1[0x98] != -1) && (in_ECX[0x98] != param_1[0x98])) {
      *(undefined1 *)(in_ECX + 0x92) = 1;
      in_ECX[0x98] = param_1[0x98];
    }
    if ((param_1[0x99] != -1) && (in_ECX[0x99] != param_1[0x99])) {
      *(undefined1 *)(in_ECX + 0x92) = 1;
      in_ECX[0x99] = param_1[0x99];
    }
    piVar5 = param_1 + 2;
    piVar7 = in_ECX + 2;
    for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
      *piVar7 = *piVar5;
      piVar5 = piVar5 + 1;
      piVar7 = piVar7 + 1;
    }
    in_ECX[0xb] = param_1[0xb];
    in_ECX[0xc] = param_1[0xc];
    in_ECX[0xd] = param_1[0xd];
    in_ECX[0xe] = param_1[0xe];
    in_ECX[0xf] = param_1[0xf];
    in_ECX[0x10] = param_1[0x10];
    iVar6 = (**(code **)(*param_1 + 8))();
    iVar3 = (**(code **)(*in_ECX + 8))();
    if (iVar3 == iVar6) {
      param_1 = (int *)0x0;
      iVar6 = (**(code **)(*in_ECX + 8))();
      if (iVar6 != 0) {
        puStack_18 = (uint *)((int)piVar2 - (int)in_ECX);
        piVar5 = in_ECX + 0x12;
        do {
          iVar6 = 4;
          bVar11 = true;
          piVar7 = piVar5;
          piVar9 = (int *)((int)puStack_18 + (int)piVar5);
          do {
            if (iVar6 == 0) break;
            iVar6 = iVar6 + -1;
            bVar11 = *piVar7 == *piVar9;
            piVar7 = piVar7 + 1;
            piVar9 = piVar9 + 1;
          } while (bVar11);
          if (!bVar11) goto LAB_002e4d4d;
          piStack_14 = piVar5 + 4;
          param_1 = (int *)((int)param_1 + 1);
          uVar4 = (**(code **)(*in_ECX + 8))();
          piVar5 = piStack_14;
        } while (param_1 < uVar4);
      }
    }
    else {
LAB_002e4d4d:
      FUN_002e45a0();
      *(undefined1 *)(in_ECX + 0x92) = 1;
    }
    iVar6 = (**(code **)(*piVar2 + 8))();
    if (iVar6 != 0) {
      puVar8 = (uint *)(piVar2 + 0x12);
      puStack_18 = puVar8;
      do {
        iVar6 = (**(code **)(*piVar2 + 4))((*puVar8 & 0xffff) - 1);
        uVar1 = *(undefined4 *)(iVar6 + 4);
        piVar5 = (int *)(**(code **)(*piVar2 + 4))((*puVar8 & 0xffff) - 1);
        iVar6 = *piVar5;
        if (iVar6 == 0) {
          iVar6 = FUN_002e4550(uVar1);
          if (iVar6 != 0) {
            iVar3 = (**(code **)*piVar2)();
            iVar6 = (iVar6 - iVar3 >> 4) + 5;
            iStack_10 = piVar2[iVar6 * 4];
            iStack_c = piVar2[iVar6 * 4 + 1];
          }
          iVar6 = FUN_002e4550(uVar1);
          if (iVar6 != 0) {
            iVar3 = (**(code **)*in_ECX)();
            FUN_002e4640(iVar6 - iVar3 >> 4,iStack_10,iStack_c);
          }
        }
        else if (iVar6 == 0x100000) {
          iVar6 = FUN_002e4550(uVar1);
          if (iVar6 != 0) {
            iVar3 = (**(code **)*piVar2)();
            piStack_14 = (int *)piVar2[((iVar6 - iVar3 >> 4) + 5) * 4];
          }
          iVar6 = FUN_002e4550(uVar1);
          if (iVar6 != 0) {
            iVar3 = (**(code **)*in_ECX)();
            FUN_002e46b0(iVar6 - iVar3 >> 4,piStack_14);
          }
        }
        else if (iVar6 == 0x200000) {
          /* XBE 0x002E4DC2 LEA ECX,[ESP+0x14]: guest first
           * output word (entry ESP-0x14) = piStack_14.
           * 0x002E4DC7 LEA EDX,[ESP+0x1C] after PUSH ECX:
           * second output (entry ESP-0x10) = iStack_10.
           * 0x002E49F2/FF writes through both pointers; original
           * register ECX=EBP supplies the callee object. */
          FUN_002e49c0(uVar1,&iStack_10,&piStack_14);
          iVar6 = FUN_002e4550(uVar1);
          if (iVar6 != 0) {
            iVar3 = (**(code **)*in_ECX)();
            /* XBE 0x002E4DEC/DF0 reloads precisely the two
             * DWORDs written by 0x002E49C0, then pushes the record
             * pointer before count into 0x002E4770.
             * Original ECX=EBX method ABI still unverified. */
            FUN_002e4770(iVar6 - iVar3 >> 4,iStack_10,piStack_14);
          }
        }
        uVar10 = uStack_4 + 1;
        puVar8 = unaff_EBP + 4;
        uStack_4 = uVar10;
        uVar4 = (**(code **)(*piVar2 + 8))();
        unaff_EBP = puVar8;
      } while (uVar10 < uVar4);
    }
  }
  return in_ECX;
}
