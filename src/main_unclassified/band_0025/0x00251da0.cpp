/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0597FC4E34FB8E6612B840F0E3033423DA4BDD277EFC654E9DFF7993A27C9537
 * Entry: 0x00251da0, Ghidra index: 8375, label: FUN_00251da0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00251da0(void)

{
  ushort *puVar1;
  uint uVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  short *psVar6;
  uint uVar7;
  int *unaff_EBX;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  uVar2 = unaff_EBX[9];
  do {
    uVar7 = unaff_EBX[0x19];
    iVar4 = unaff_EBX[0x1b];
    if (unaff_EBX[0xd] - uVar7 == iVar4) {
      if ((uVar7 != 0) || (iVar4 != 0)) {
LAB_00251dd0:
        if (unaff_EBX[9] + -0x106 + uVar2 <= uVar7) {
          puVar8 = (undefined4 *)(unaff_EBX[0xc] + uVar2);
          puVar9 = (undefined4 *)unaff_EBX[0xc];
          for (uVar7 = uVar2 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            *puVar9 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar9 = puVar9 + 1;
          }
          for (uVar7 = uVar2 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
            *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
            puVar8 = (undefined4 *)((int)puVar8 + 1);
            puVar9 = (undefined4 *)((int)puVar9 + 1);
          }
          unaff_EBX[0x19] = unaff_EBX[0x19] - uVar2;
          unaff_EBX[0x1a] = unaff_EBX[0x1a] - uVar2;
          iVar4 = unaff_EBX[0x11];
          unaff_EBX[0x15] = unaff_EBX[0x15] - uVar2;
          psVar6 = (short *)(unaff_EBX[0xf] + iVar4 * 2);
          do {
            puVar1 = (ushort *)(psVar6 + -1);
            psVar6 = psVar6 + -1;
            if (*puVar1 < uVar2) {
              sVar3 = 0;
            }
            else {
              sVar3 = *puVar1 - (short)uVar2;
            }
            iVar4 = iVar4 + -1;
            *psVar6 = sVar3;
          } while (iVar4 != 0);
          psVar6 = (short *)(unaff_EBX[0xe] + uVar2 * 2);
          uVar7 = uVar2;
          do {
            puVar1 = (ushort *)(psVar6 + -1);
            psVar6 = psVar6 + -1;
            if (*puVar1 < uVar2) {
              sVar3 = 0;
            }
            else {
              sVar3 = *puVar1 - (short)uVar2;
            }
            uVar7 = uVar7 - 1;
            *psVar6 = sVar3;
          } while (uVar7 != 0);
        }
      }
    }
    else if ((unaff_EBX[0xd] - uVar7) - iVar4 != -1) goto LAB_00251dd0;
    if (*(int *)(*unaff_EBX + 4) == 0) {
      return;
    }
    iVar4 = FUN_00251b30(*unaff_EBX,unaff_EBX[0x1b] + unaff_EBX[0x19] + unaff_EBX[0xc]);
    uVar7 = unaff_EBX[0x1b] + iVar4;
    unaff_EBX[0x1b] = uVar7;
    if (2 < uVar7) {
      uVar5 = (uint)*(byte *)(unaff_EBX[0x19] + unaff_EBX[0xc]);
      unaff_EBX[0x10] = uVar5;
      unaff_EBX[0x10] =
           (uVar5 << ((byte)unaff_EBX[0x14] & 0x1f) ^
           (uint)((byte *)(unaff_EBX[0x19] + unaff_EBX[0xc]))[1]) & unaff_EBX[0x13];
    }
    if (0x105 < uVar7) {
      return;
    }
    if (*(int *)(*unaff_EBX + 4) == 0) {
      return;
    }
  } while( true );
}
