/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 63EF90AD7AB812BE9711EE2B8F913E4115351F3D846BAED6DC5301755D4EB4E0
 * Entry: 0x00348127, Ghidra index: 12890, label: FUN_00348127
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00348127(uint param_1,uint param_2,int param_3,ushort param_4,ushort param_5)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int in_ECX;
  int *piVar6;
  
  iVar3 = FUN_0034cc6e();
  if ((((iVar3 != 0) || ((param_4 & 4) != 0)) && (iVar3 = FUN_0034cc6e(), iVar3 != 0)) &&
     (uVar4 = ~((param_2 & 0xff0000 | param_2 >> 0x10) >> 8 |
               (param_2 & 0xff00 | param_2 << 0x10) << 8), (uVar4 & uVar4 + 1) == 0)) {
    piVar1 = (int *)(in_ECX + 0xa78);
    piVar2 = (int *)*piVar1;
    do {
      piVar5 = piVar2;
      if (piVar5 == piVar1) {
        piVar5 = (int *)FUN_0034c68a(0x1c,0x3754454e);
        if (piVar5 == (int *)0x0) {
          return;
        }
        piVar5[2] = 1;
        goto LAB_003481d3;
      }
      piVar2 = (int *)*piVar5;
    } while (((piVar5[4] != (param_1 & param_2)) || (piVar5[5] != param_2)) ||
            ((param_2 == 0 && (piVar5[6] != param_3))));
    iVar3 = *piVar5;
    piVar2 = (int *)piVar5[1];
    *piVar2 = iVar3;
    *(int **)(iVar3 + 4) = piVar2;
LAB_003481d3:
    *(undefined4 *)(in_ECX + 0xa80) = 0;
    *(undefined4 *)(in_ECX + 0xa84) = 0;
    *(ushort *)(piVar5 + 3) = param_4;
    *(ushort *)((int)piVar5 + 0xe) = param_5;
    piVar5[4] = param_1 & param_2;
    piVar5[5] = param_2;
    piVar5[6] = param_3;
    piVar2 = (int *)*piVar1;
    while (piVar6 = piVar2, piVar6 != piVar1) {
      if (((uint)piVar6[5] < param_2) ||
         ((piVar2 = (int *)*piVar6, param_2 == piVar6[5] &&
          (param_5 < *(ushort *)((int)piVar6 + 0xe))))) break;
    }
    *piVar5 = (int)piVar6;
    piVar5[1] = piVar6[1];
    *(int **)piVar6[1] = piVar5;
    piVar6[1] = (int)piVar5;
  }
  return;
}
