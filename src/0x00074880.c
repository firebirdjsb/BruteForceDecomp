/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7BC16ED7AE1270C6AE02BCA00D5D3481F24F0AC00507C74AA0D7165FAB534660
 * Entry: 0x00074880, Ghidra index: 1328, label: FUN_00074880
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_00074880(uint *param_1)

{
  float fVar1;
  float fVar2;
  char cVar3;
  undefined4 *puVar4;
  undefined4 **ppuVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int unaff_EDI;
  undefined4 *local_4;
  
  if (((*(int *)(unaff_EDI + 4) == 0) || (*(int *)(unaff_EDI + 8) == 0)) ||
     (puVar6 = *(undefined4 **)(*(int *)(unaff_EDI + 8) + 4), (int)puVar6 < (int)param_1[1])) {
    local_4 = *(undefined4 **)(unaff_EDI + 0x14);
    cVar3 = *(char *)((int)local_4[1] + 0x19);
    puVar6 = local_4;
    puVar7 = (undefined4 *)local_4[1];
    while (cVar3 == '\0') {
      if ((uint)puVar7[3] < *param_1) {
        puVar4 = (undefined4 *)puVar7[2];
        puVar7 = puVar6;
      }
      else {
        puVar4 = (undefined4 *)*puVar7;
      }
      puVar6 = puVar7;
      puVar7 = puVar4;
      cVar3 = *(char *)((int)puVar4 + 0x19);
    }
    if ((puVar6 == local_4) || (*param_1 < (uint)puVar6[3])) {
      ppuVar5 = &local_4;
    }
    else {
      ppuVar5 = &param_1;
    }
    puVar6 = *ppuVar5;
    if (puVar6 == *(undefined4 **)(unaff_EDI + 0x14)) {
LAB_0007490b:
      return CONCAT31((int3)((uint)puVar6 >> 8),1);
    }
    if ((puVar6[4] == 0) || ((char)param_1[7] == '\0')) {
      fVar1 = (float)puVar6[5];
      fVar2 = *(float *)(unaff_EDI + 0x1c);
      puVar6 = (undefined4 *)
               CONCAT22((short)((uint)puVar6 >> 0x10),
                        (ushort)(fVar1 < fVar2) << 8 | (ushort)(isnan(fVar1) || isnan(fVar2)) << 10 |
                        (ushort)(fVar1 == fVar2) << 0xe);
      if (fVar1 < fVar2 || (fVar1 == fVar2) != 0) goto LAB_0007490b;
    }
  }
  return (uint)puVar6 & 0xffffff00;
}
