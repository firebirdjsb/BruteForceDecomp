/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DDCAD9AADFBB174B58A5790D246486C28C378E1D884350AF0D746158197B6F72
 * Entry: 0x000e2600, Ghidra index: 2794, label: FUN_000e2600
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000e2600(int param_1,int *param_2,int param_3,char param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  int *in_ECX;
  int local_28;
  
  iVar2 = *(int *)(*(int *)(*in_ECX + 0x1c) + 0x204);
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + 0x3c);
    *(int *)(iVar2 + 0x3c) = iVar3 + 1;
    FUN_000d1420(in_ECX[4]);
joined_r0x000e263f:
    if (local_28 != 0) {
      for (puVar4 = *(undefined4 **)(local_28 + 0x1c); puVar4 != (undefined4 *)0x0;
          puVar4 = (undefined4 *)*puVar4) {
        iVar5 = *(int *)((uint)*(ushort *)(puVar4 + 2) * 0x10 + 0xc + *(int *)(iVar2 + 0x14));
        if (((((iVar5 != 0) &&
              (iVar6 = *(int *)(iVar5 + 0x18), *(int *)(iVar5 + 0x18) = iVar3, iVar6 != iVar3)) &&
             (*(int *)(*(int *)(iVar5 + 0xc) + 4) == 4)) &&
            ((bVar1 = *(byte *)(iVar5 + 0x94), (bVar1 & 0x40) != 0 && ((bVar1 & 8) == 0)))) &&
           (((bVar1 & 0x10) != 0 &&
            ((*(int *)(*(int *)(iVar5 + 0xc) + 0x2c) == 1 && (*param_2 < param_3)))))) {
          *(int *)(param_1 + *param_2 * 4) = iVar5;
          *param_2 = *param_2 + 1;
        }
      }
      do {
        cVar7 = FUN_000d14d0();
        if (cVar7 == '\0') {
          local_28 = 0;
          break;
        }
      } while (local_28 == 0);
      goto joined_r0x000e263f;
    }
    if (param_4 != '\0') {
      for (puVar4 = *(undefined4 **)(iVar2 + 0x2c); puVar4 != (undefined4 *)0x0;
          puVar4 = (undefined4 *)*puVar4) {
        iVar5 = *(int *)((uint)*(ushort *)(puVar4 + 2) * 0x10 + 0xc + *(int *)(iVar2 + 0x14));
        if ((((iVar5 != 0) &&
             (iVar6 = *(int *)(iVar5 + 0x18), *(int *)(iVar5 + 0x18) = iVar3, iVar6 != iVar3)) &&
            (*(int *)(*(int *)(iVar5 + 0xc) + 4) == 4)) &&
           (((bVar1 = *(byte *)(iVar5 + 0x94), (bVar1 & 0x40) != 0 && ((bVar1 & 8) == 0)) &&
            (((bVar1 & 0x10) != 0 &&
             ((*(int *)(*(int *)(iVar5 + 0xc) + 0x2c) == 1 && (*param_2 < param_3)))))))) {
          *(int *)(param_1 + *param_2 * 4) = iVar5;
          *param_2 = *param_2 + 1;
        }
      }
    }
  }
  return;
}
