/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 17D0784F9D7AA10B30FB5F1C08858FEADD2F57450F8B814536EFA4D23C11FEE8
 * Entry: 0x000b0670, Ghidra index: 2096, label: FUN_000b0670
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_000b0670(float *param_1)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  uint in_EAX;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  
  iVar2 = *(int *)(*(int *)(*(int *)(in_EAX + 0x84) + 0x34) + 0x30);
  if (iVar2 != 0) {
    in_EAX = 0;
    if (*(int *)(iVar2 + 4) != 0) {
      if (*(int *)(iVar2 + 4) == 0) {
        in_EAX = 0;
      }
      else {
        in_EAX = **(uint **)(iVar2 + 8);
      }
      piVar7 = *(int **)(in_EAX + 4);
      if (piVar7 != (int *)0x0) {
        iVar6 = 0;
        uVar8 = 1;
        do {
          if ((*(byte *)(piVar7 + 0x1c) & 1) == 0) {
            iVar5 = (**(code **)(*piVar7 + 0x40))();
            fVar3 = *(float *)(iVar5 + 0x2c) - param_1[2];
            fVar4 = *(float *)(iVar5 + 0x24) - *param_1;
            fVar1 = *(float *)(piVar7[3] + 0x2a0);
            fVar1 = fVar1 - (1.0 - (1.0 - (float)piVar7[0x15f]) * (1.0 - (float)piVar7[0x15f])) *
                            (fVar1 - *(float *)(piVar7[3] + 0x2a4));
            fVar4 = fVar4 * fVar4 + fVar3 * fVar3;
            fVar1 = fVar1 * fVar1;
            if (fVar1 < fVar4 == 0) {
              return CONCAT31((int3)(CONCAT22((short)((uint)fVar3 >> 0x10),
                                              (ushort)(fVar1 < fVar4) << 8 |
                                              (ushort)(isnan(fVar1) || isnan(fVar4)) << 10 |
                                              (ushort)(fVar1 == fVar4) << 0xe) >> 8),1);
            }
          }
          in_EAX = *(uint *)(iVar2 + 4);
          if (in_EAX <= uVar8) break;
          iVar6 = iVar6 + 4;
          if (uVar8 < in_EAX) {
            in_EAX = *(uint *)(iVar6 + *(int *)(iVar2 + 8));
          }
          else {
            in_EAX = 0;
          }
          piVar7 = *(int **)(in_EAX + 4);
          uVar8 = uVar8 + 1;
        } while (piVar7 != (int *)0x0);
      }
    }
  }
  return in_EAX & 0xffffff00;
}
