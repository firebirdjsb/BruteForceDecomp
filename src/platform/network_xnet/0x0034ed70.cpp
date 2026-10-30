/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 01E938D51C537842F29EED81B0B37EE7743DD68C15E1C8BEE42AAE4940753058
 * Entry: 0x0034ed70, Ghidra index: 13028, label: FUN_0034ed70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0034ed70(int param_1,int param_2)

{
  byte *pbVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int in_ECX;
  int *piVar7;
  
  iVar2 = param_1;
  pbVar1 = (byte *)(param_1 + 0x68 + ((param_2 - *(int *)(param_1 + 0x4c)) / 0xac) * 0x18);
  if ((*pbVar1 & 1) == 0) {
    pbVar1[0xc] = 0xff;
    pbVar1[0xd] = 0xff;
    pbVar1[0xe] = 0xff;
    pbVar1[0xf] = 0xff;
    if (*(int *)(param_2 + 0xa4) != 0) {
      piVar3 = *(int **)(param_1 + 0x58);
      if (*(int *)(param_1 + 0x54) != 0) {
        piVar7 = (int *)(*(int *)(param_2 + 0xa8) + 0x1c);
        param_1 = *(int *)(param_1 + 0x54);
        do {
          if (piVar7[-1] != 0) {
            *piVar3 = piVar7[-1];
            piVar3 = piVar3 + 1;
          }
          if (*piVar7 != 0) {
            *piVar3 = *piVar7;
            piVar3 = piVar3 + 1;
          }
          piVar7 = piVar7 + 10;
          param_1 = param_1 + -1;
        } while (param_1 != 0);
      }
      uVar4 = (int)piVar3 - *(int *)(iVar2 + 0x58) >> 2;
      if (uVar4 != 0) {
        if (1 < uVar4) {
          FUN_0034e2e0(*(int *)(iVar2 + 0x58),uVar4);
        }
        iVar5 = FUN_0034e2be(*(undefined4 *)(iVar2 + 0x58),uVar4);
        uVar4 = (iVar5 + 500U) / 1000;
        if (0xfffe < uVar4) {
          uVar4 = 0xffff;
        }
        *(short *)(pbVar1 + 0xe) = (short)uVar4;
        uVar4 = (**(int **)(iVar2 + 0x58) + 500U) / 1000;
        if (0xfffe < uVar4) {
          uVar4 = 0xffff;
        }
        *(short *)(pbVar1 + 0xc) = (short)uVar4;
      }
      uVar6 = FUN_0034e35f(iVar2,param_2,0);
      *(undefined4 *)(pbVar1 + 0x10) = uVar6;
      uVar6 = FUN_0034e35f(iVar2,param_2,1);
      *(undefined4 *)(pbVar1 + 0x14) = uVar6;
      uVar4 = *(uint *)(in_ECX + 0xbc0);
      if ((uVar4 < *(uint *)(pbVar1 + 0x10)) && (uVar4 != 0)) {
        *(uint *)(pbVar1 + 0x10) = uVar4;
      }
    }
    *pbVar1 = *pbVar1 | 1;
  }
  *(int *)(iVar2 + 100) = *(int *)(iVar2 + 100) + -1;
  if (*(int *)(iVar2 + 0xc) != 0) {
    KeSetEvent(*(int *)(iVar2 + 0xc),1,0);
  }
  return;
}
