/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F9FF796F73D2A709A424556922136229BD50B78157D8517EDF30EF8F0E58C739
 * Entry: 0x0034c58a, Ghidra index: 12964, label: FUN_0034c58a
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int * FUN_0034c58a(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined2 uVar2;
  int *piVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  int in_ECX;
  uint uVar7;
  ushort uVar8;
  uint uVar9;
  int *piVar10;
  int *piVar11;
  char local_c;
  
  uVar9 = param_1 + 0x27U >> 5;
  KeRaiseIrqlToDpcLevel();
  uVar8 = (ushort)uVar9;
  if (uVar9 < 6) {
    uVar5 = uVar9 - 1;
    if (uVar5 < 6) {
      piVar10 = (int *)(in_ECX + 0x54 + uVar5 * 8);
      do {
        if ((int *)*piVar10 != piVar10) {
          piVar10 = *(int **)(in_ECX + 0x54 + uVar5 * 8);
LAB_0034c5e3:
          piVar11 = piVar10 + -2;
          piVar3 = (int *)piVar10[1];
          iVar6 = *piVar10;
          *piVar3 = iVar6;
          *(int **)(iVar6 + 4) = piVar3;
          if (uVar9 < *(ushort *)(piVar10 + -1)) {
            uVar7 = uVar9 & 0xffff;
            uVar5 = *(ushort *)(piVar10 + -1) - uVar9;
            *(ushort *)(piVar10 + -1) = uVar8;
            uVar4 = (ushort)uVar5;
            *(ushort *)(piVar11 + uVar7 * 8 + 1) = uVar4;
            *(ushort *)((int)piVar11 + uVar7 * 0x20 + 6) = uVar8;
            uVar2 = *(undefined2 *)((int)piVar10 + -6);
            *(undefined1 *)((int)piVar11 + uVar7 * 0x20 + 1) = 0;
            *(undefined2 *)((int)piVar11 + uVar7 * 0x20 + 2) = uVar2;
            if (uVar4 < 6) {
              iVar6 = (uVar5 & 0xffff) - 1;
            }
            else {
              iVar6 = 5;
            }
            piVar1 = (int *)(in_ECX + 0x54 + iVar6 * 8);
            iVar6 = *piVar1;
            piVar3 = piVar11 + uVar7 * 8 + 2;
            *piVar3 = iVar6;
            piVar11[uVar7 * 8 + 3] = (int)piVar1;
            *(int **)(iVar6 + 4) = piVar3;
            *piVar1 = (int)piVar3;
            *(ushort *)
             ((int)piVar11 + (uint)*(ushort *)(piVar11 + uVar7 * 8 + 1) * 0x20 + 6 + uVar7 * 0x20) =
                 uVar4;
          }
          local_c = (char)param_1;
          *(undefined1 *)((int)piVar10 + -7) = 1;
          *(short *)((int)piVar10 + -6) = (short)((uint)param_2 >> 0x10);
          *(char *)piVar11 = (char)uVar9 * ' ' - local_c;
          goto LAB_0034c5ca;
        }
        uVar5 = uVar5 + 1;
        piVar10 = piVar10 + 2;
      } while (uVar5 < 6);
    }
  }
  else {
    for (piVar10 = *(int **)(in_ECX + 0x7c); piVar10 != (int *)(in_ECX + 0x7c);
        piVar10 = (int *)*piVar10) {
      if (uVar8 <= *(ushort *)(piVar10 + -1)) goto LAB_0034c5e3;
    }
  }
  piVar10 = (int *)0x0;
LAB_0034c5ca:
  KfLowerIrql();
  return piVar10;
}
