/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 178836B6E14BEB759C6D650825B47C775E0B5632A73C256883750F5C0BA2B76F
 * Entry: 0x001f7920, Ghidra index: 7051, label: FUN_001f7920
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001f7920(undefined4 param_1,char param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  int *in_EAX;
  int *piVar6;
  int *piVar7;
  
  iVar1 = *in_EAX;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x3c);
    *(int *)(iVar1 + 0x3c) = iVar2 + 1;
    piVar7 = in_EAX + in_EAX[0x201] + 1;
    while (in_EAX = in_EAX + 1, in_EAX != piVar7) {
      for (puVar3 = *(undefined4 **)(*in_EAX + 0x1c); puVar3 != (undefined4 *)0x0;
          puVar3 = (undefined4 *)*puVar3) {
        uVar4 = *(uint *)((uint)*(ushort *)(puVar3 + 2) * 0x10 + 0xc + *(int *)(iVar1 + 0x14));
        if ((((uVar4 != 0) &&
             (iVar5 = *(int *)(uVar4 + 0x18), *(int *)(uVar4 + 0x18) = iVar2, iVar5 != iVar2)) &&
            (*(int *)(*(int *)(uVar4 + 0xc) + 4) == 2)) &&
           ((piVar6 = (int *)(-(uint)((*(byte *)(uVar4 + 0x26) & 0x40) != 0) & uVar4),
            piVar6 != (int *)0x0 && ((*(byte *)((int)piVar6 + 0x71) & 4) != 0)))) {
          (**(code **)(*piVar6 + 0x120))(param_1);
        }
      }
    }
    if (param_2 != '\0') {
      for (puVar3 = *(undefined4 **)(iVar1 + 0x2c); puVar3 != (undefined4 *)0x0;
          puVar3 = (undefined4 *)*puVar3) {
        uVar4 = *(uint *)((uint)*(ushort *)(puVar3 + 2) * 0x10 + 0xc + *(int *)(iVar1 + 0x14));
        if (((uVar4 != 0) &&
            (iVar5 = *(int *)(uVar4 + 0x18), *(int *)(uVar4 + 0x18) = iVar2, iVar5 != iVar2)) &&
           ((*(int *)(*(int *)(uVar4 + 0xc) + 4) == 2 &&
            ((piVar7 = (int *)(-(uint)((*(byte *)(uVar4 + 0x26) & 0x40) != 0) & uVar4),
             piVar7 != (int *)0x0 && ((*(byte *)((int)piVar7 + 0x71) & 4) != 0)))))) {
          (**(code **)(*piVar7 + 0x120))(param_1);
        }
      }
    }
  }
  return;
}
