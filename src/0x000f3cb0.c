/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F8C81F457CA344988ED251CAA9133DB2B96B94A57AB2A9C781B654B305626BB0
 * Entry: 0x000f3cb0, Ghidra index: 3050, label: FUN_000f3cb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000f3cb0(void)

{
  byte bVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *in_EAX;
  int iVar4;
  int *piVar5;
  int in_ECX;
  undefined4 *puVar6;
  byte bVar7;
  
  if ((in_EAX != (int *)0x0) && (iVar4 = (**(code **)(*in_EAX + 4))(), iVar4 == 8)) {
    bVar7 = 1;
    piVar5 = (int *)FUN_00103000();
    puVar2 = *(undefined4 **)(in_ECX + 0x240);
    puVar6 = (undefined4 *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      puVar6 = (undefined4 *)*puVar2;
    }
    if (puVar6 != puVar2) {
      do {
        if (puVar6[2] == *piVar5) break;
        puVar6 = (undefined4 *)*puVar6;
      } while (puVar6 != puVar2);
      if (puVar6 != puVar2) {
        bVar7 = 0;
      }
    }
    for (piVar5 = *(int **)(in_EAX[1] + 0x74); piVar5 != *(int **)(in_EAX[1] + 0x78);
        piVar5 = piVar5 + 1) {
      piVar3 = (int *)*piVar5;
      if (piVar3[9] == 0x1b0d073a) {
        bVar1 = *(byte *)(piVar3 + 10);
        if ((bVar1 >> 1 & 1) == bVar7) {
          return;
        }
        *(byte *)(piVar3 + 10) = (bVar7 << 1 ^ bVar1) & 2 ^ bVar1;
                    /* WARNING: Could not recover jumptable at 0x000f3d38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*piVar3 + 0x24))();
        return;
      }
    }
  }
  return;
}
