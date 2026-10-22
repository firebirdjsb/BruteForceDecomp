/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B1A80CA23865EEE64974842292DB7A6794DF6D7628768D9C1C0742F36525D13A
 * Entry: 0x0031ab3b, Ghidra index: 12273, label: FUN_0031ab3b
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int * FUN_0031ab3b(int param_1,ushort param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int in_ECX;
  int *piVar5;
  
  piVar5 = (int *)0x0;
  if ((*(int *)(in_ECX + 0x18) != 0) && (param_2 <= *(ushort *)(*(int *)(in_ECX + 0x18) + 10))) {
    piVar1 = (int *)(in_ECX + 4);
    piVar2 = (int *)*piVar1;
    if (piVar2 != piVar1) {
      do {
        if (((piVar2[3] == 0) && (param_2 <= *(ushort *)((int)piVar2 + 10))) &&
           ((piVar5 == (int *)0x0 || (*(ushort *)((int)piVar2 + 10) < *(ushort *)((int)piVar5 + 10))
            ))) {
          piVar5 = piVar2;
        }
        piVar2 = (int *)*piVar2;
      } while (piVar2 != piVar1);
      if (piVar5 != (int *)0x0) {
        if (param_2 < *(ushort *)((int)piVar5 + 10)) {
          uVar3 = FUN_003118c0(*(undefined4 *)(in_ECX + 0xc));
          FUN_0031aa11(uVar3,(short)piVar5[2] + param_2,*(short *)((int)piVar5 + 10) - param_2,
                       piVar5);
          *(ushort *)((int)piVar5 + 10) = param_2;
        }
        piVar5[3] = 1;
        piVar5[4] = param_1;
        **(int **)(in_ECX + 0x1c) = **(int **)(in_ECX + 0x1c) - (uint)*(ushort *)((int)piVar5 + 10);
        if (piVar5 == *(int **)(in_ECX + 0x18)) {
          *(undefined4 *)(in_ECX + 0x18) = 0;
          for (puVar4 = *(undefined4 **)(in_ECX + 4); puVar4 != (undefined4 *)(in_ECX + 4);
              puVar4 = (undefined4 *)*puVar4) {
            if ((puVar4[3] == 0) &&
               ((*(int *)(in_ECX + 0x18) == 0 ||
                (*(ushort *)(*(int *)(in_ECX + 0x18) + 10) < *(ushort *)((int)puVar4 + 10))))) {
              *(undefined4 **)(in_ECX + 0x18) = puVar4;
            }
          }
        }
      }
    }
  }
  return piVar5;
}
