/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5944C674EE7E828D77604555F5B7F3148BBA0DADF037E9D90DBE6320B1DDCDE5
 * Entry: 0x000e24d0, Ghidra index: 2793, label: FUN_000e24d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000e24d0(undefined4 param_1,char param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int *in_EAX;
  
  iVar1 = *in_EAX;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x3c);
    *(int *)(iVar1 + 0x3c) = iVar2 + 1;
    piVar6 = in_EAX + in_EAX[0x201] + 1;
    while (in_EAX = in_EAX + 1, in_EAX != piVar6) {
      for (puVar3 = *(undefined4 **)(*in_EAX + 0x1c); puVar3 != (undefined4 *)0x0;
          puVar3 = (undefined4 *)*puVar3) {
        piVar4 = *(int **)((uint)*(ushort *)(puVar3 + 2) * 0x10 + 0xc + *(int *)(iVar1 + 0x14));
        if (((piVar4 != (int *)0x0) && (iVar5 = piVar4[6], piVar4[6] = iVar2, iVar5 != iVar2)) &&
           ((**(code **)(*piVar4 + 0x68))(param_1), *(int *)(piVar4[3] + 4) == 4)) {
          *(byte *)(piVar4 + 0x25) = *(byte *)(piVar4 + 0x25) | 0x80;
          (**(code **)(*piVar4 + 0x68))(param_1);
          *(byte *)(piVar4 + 0x25) = *(byte *)(piVar4 + 0x25) & 0x7f;
        }
      }
    }
    if (param_2 != '\0') {
      for (puVar3 = *(undefined4 **)(iVar1 + 0x2c); puVar3 != (undefined4 *)0x0;
          puVar3 = (undefined4 *)*puVar3) {
        piVar6 = *(int **)((uint)*(ushort *)(puVar3 + 2) * 0x10 + 0xc + *(int *)(iVar1 + 0x14));
        if (((piVar6 != (int *)0x0) && (iVar5 = piVar6[6], piVar6[6] = iVar2, iVar5 != iVar2)) &&
           ((**(code **)(*piVar6 + 0x68))(param_1), *(int *)(piVar6[3] + 4) == 4)) {
          *(byte *)(piVar6 + 0x25) = *(byte *)(piVar6 + 0x25) | 0x80;
          (**(code **)(*piVar6 + 0x68))(param_1);
          *(byte *)(piVar6 + 0x25) = *(byte *)(piVar6 + 0x25) & 0x7f;
        }
      }
    }
  }
  return;
}
