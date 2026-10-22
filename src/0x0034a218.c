/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 21C1FDE5B20B4E68CE686926869C49ECAC5CC5183E695C8F2A7B2CAB265E9523
 * Entry: 0x0034a218, Ghidra index: 12928, label: FUN_0034a218
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0034a218(undefined4 param_1,undefined4 param_2,undefined4 param_3,short *param_4,
                 undefined4 param_5)

{
  undefined4 *puVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  byte *pbVar6;
  int in_ECX;
  uint uVar7;
  byte *pbVar8;
  undefined4 *puVar9;
  bool bVar10;
  
  uVar2 = param_4[1];
  if (0x2d < uVar2) {
    if ((*param_4 == 0x5805) && ((*(byte *)(param_4 + 3) & 2) != 0)) {
      FUN_0034f9e6(param_1,param_2,param_3,param_4,param_5);
    }
    else {
      iVar3 = FUN_00347b83(param_4 + 4);
      if (iVar3 != 0) {
        iVar4 = FUN_0034c4a1(iVar3 + 8,0x10,param_4,0x22,param_4 + 0x17,uVar2 - 0x2e,param_4 + 0x11,
                             0xc);
        if (iVar4 != 0) {
          if (*param_4 == 0x5804) {
            piVar5 = (int *)FUN_0034cb5a(0x7154454e,0x40003,(ushort)param_4[1] + 4,0,0,0);
            if (piVar5 != (int *)0x0) {
              FUN_0034c841();
              iVar4 = *piVar5;
              puVar1 = (undefined4 *)(iVar4 + 0x20);
              FUN_00347fe3(piVar5,*(undefined4 *)(param_4 + 0xe),0x11);
              *(undefined4 *)(iVar4 + 0xc) = *(undefined4 *)(in_ECX + 0x268);
              *(undefined4 *)(iVar4 + 0x1c) = 0;
              FUN_0034c865(*(undefined2 *)(in_ECX + 0x8c6),param_4[0x10]);
              uVar2 = param_4[1];
              puVar9 = puVar1;
              for (uVar7 = (uint)(uVar2 >> 2); uVar7 != 0; uVar7 = uVar7 - 1) {
                *puVar9 = *(undefined4 *)param_4;
                param_4 = param_4 + 2;
                puVar9 = puVar9 + 1;
              }
              for (uVar7 = uVar2 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
                *(char *)puVar9 = (char)*param_4;
                param_4 = (short *)((int)param_4 + 1);
                puVar9 = (undefined4 *)((int)puVar9 + 1);
              }
              *(undefined2 *)(iVar4 + 0x24) = 0;
              *(undefined2 *)puVar1 = 0x5805;
              FUN_0034c461(iVar3 + 8,0x10,puVar1,0x22,iVar4 + 0x4e,*(ushort *)(iVar4 + 0x22) - 0x2e,
                           iVar4 + 0x42,0xc);
              FUN_00348b9a(piVar5,0);
            }
          }
          else if ((*param_4 == 0x5805) && ((*(byte *)(param_4 + 3) & 1) != 0)) {
            pbVar6 = (byte *)FUN_00348472(*(undefined4 *)(param_4 + 0xc));
            if ((pbVar6 != (byte *)0x0) && ((pbVar6[2] == 3 && ((*pbVar6 & 2) != 0)))) {
              iVar3 = 2;
              bVar10 = true;
              pbVar8 = pbVar6 + 0x44;
              piVar5 = (int *)(param_4 + 8);
              do {
                if (iVar3 == 0) break;
                iVar3 = iVar3 + -1;
                bVar10 = *(int *)pbVar8 == *piVar5;
                pbVar8 = pbVar8 + 4;
                piVar5 = piVar5 + 1;
              } while (bVar10);
              if (bVar10) {
                *(undefined4 *)(pbVar6 + 0xb8) = param_2;
                *(undefined2 *)(pbVar6 + 0xbc) = (undefined2)param_3;
                FUN_00349cfc(pbVar6,1);
              }
            }
          }
        }
      }
    }
  }
  return;
}
