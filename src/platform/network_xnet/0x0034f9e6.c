/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CB029CA3B31DA9E61F178737FEB5EC11538FA9FBE208399A11B4F9108B3B3BA9
 * Entry: 0x0034f9e6, Ghidra index: 13038, label: FUN_0034f9e6
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0034f9e6(undefined4 param_1,undefined4 param_2,undefined2 param_3,int param_4)

{
  int in_ECX;
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  bool bVar6;
  undefined4 uVar7;
  
  piVar3 = *(int **)(in_ECX + 0xa8c);
  if (piVar3 != (int *)0x0) {
    do {
      iVar1 = 2;
      bVar6 = true;
      piVar5 = (int *)(param_4 + 0x10);
      piVar4 = piVar3;
      do {
        piVar4 = piVar4 + 1;
        if (iVar1 == 0) break;
        iVar1 = iVar1 + -1;
        bVar6 = *piVar4 == *piVar5;
        piVar5 = piVar5 + 1;
      } while (bVar6);
    } while ((!bVar6) && (piVar3 = (int *)*piVar3, piVar3 != (int *)0x0));
    if ((piVar3 != (int *)0x0) &&
       (((*(uint *)(param_4 + 0x18) < (uint)piVar3[0x12] &&
         (iVar1 = *(uint *)(param_4 + 0x18) * 0xac + piVar3[0x13], *(char *)(iVar1 + 0xc) == '\x02')
         ) && (*(int *)(iVar1 + 0x14) == 0)))) {
      iVar2 = 2;
      bVar6 = true;
      piVar4 = (int *)(iVar1 + 0x18);
      piVar5 = (int *)(param_4 + 8);
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar6 = *piVar4 == *piVar5;
        piVar4 = piVar4 + 1;
        piVar5 = piVar5 + 1;
      } while (bVar6);
      if ((bVar6) &&
         (iVar2 = FUN_0034c4a1(iVar1 + 0x20,0x10,param_4,0x22,param_4 + 0x2e,
                               *(ushort *)(param_4 + 2) - 0x2e,param_4 + 0x22,0xc), iVar2 != 0)) {
        *(undefined4 *)(iVar1 + 0x10) = param_2;
        *(undefined2 *)(iVar1 + 0xe) = param_3;
        if (*(uint *)(iVar1 + 0xa0) < (uint)piVar3[0x15]) {
          uVar7 = 4;
        }
        else {
          uVar7 = 5;
        }
        FUN_0034f23b(piVar3,iVar1,uVar7);
        FUN_0034f4c3(piVar3);
      }
    }
  }
  return;
}
