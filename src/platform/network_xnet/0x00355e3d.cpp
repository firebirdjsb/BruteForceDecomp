/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FD5F81CFAA63B5A639B8959A8BD14DEC9114787F4CB323951F6964FCD506F55B
 * Entry: 0x00355e3d, Ghidra index: 13134, label: FUN_00355e3d
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00355e3d(undefined4 *param_1)

{
  int *piVar1;
  byte *pbVar2;
  int *piVar3;
  short *psVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int in_ECX;
  byte *pbVar8;
  short *psVar9;
  bool bVar10;
  
  FUN_0034c841();
  psVar4 = (short *)*param_1;
  if (((((0x1b < *(ushort *)(param_1 + 1)) &&
        (((*psVar4 == 0x100 || (*psVar4 == 0x600)) && (psVar4[1] == 8)))) &&
       (((char)psVar4[2] == '\x06' && (*(char *)((int)psVar4 + 5) == '\x04')))) &&
      ((psVar4[3] == 0x100 || (psVar4[3] == 0x200)))) &&
     ((((piVar1 = (int *)(psVar4 + 7), *piVar1 == 0 || (iVar6 = FUN_0034cc6e(), iVar6 != 0)) &&
       ((pbVar2 = (byte *)(psVar4 + 4), *(int *)pbVar2 != 0 || (psVar4[6] != 0)))) &&
      ((*pbVar2 & 1) == 0)))) {
    iVar6 = 3;
    bVar10 = true;
    pbVar8 = pbVar2;
    psVar9 = (short *)(in_ECX + 0x1e0);
    do {
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      bVar10 = *(short *)pbVar8 == *psVar9;
      pbVar8 = pbVar8 + 2;
      psVar9 = psVar9 + 1;
    } while (bVar10);
    if ((!bVar10) &&
       ((piVar3 = (int *)(psVar4 + 0xc), *piVar3 == 0 || (iVar6 = FUN_0034cc6e(), iVar6 != 0)))) {
      iVar6 = *piVar1;
      iVar5 = *(int *)(in_ECX + 0x294);
      if ((iVar6 == iVar5) && (iVar5 != 0)) {
        *(int *)(in_ECX + 0x294) = 0;
        FUN_00351173(pbVar2);
      }
      else {
        iVar5 = *(int *)(in_ECX + 0x268);
        if ((iVar5 != 0) && (*(int *)(in_ECX + 0x26c) != 0)) {
          if ((iVar6 != 0) &&
             (((iVar6 != iVar5 && (iVar6 != *piVar3)) &&
              (iVar6 = FUN_00355ca1(*piVar1,*piVar3 == iVar5), iVar6 != 0)))) {
            *(undefined2 *)(iVar6 + 0x16) = 1;
            uVar7 = FUN_0034c3bf(in_ECX + 0x89c,(uint)*(byte *)(in_ECX + 0x13) * 300);
            *(undefined4 *)(iVar6 + 4) = uVar7;
            *(undefined4 *)(iVar6 + 0x10) = *(undefined4 *)pbVar2;
            *(short *)(iVar6 + 0x14) = psVar4[6];
            if (*(int *)(iVar6 + 8) != 0) {
              FUN_0034c9a6((int *)(iVar6 + 8));
              FUN_00355b5a();
            }
          }
          if ((psVar4[3] == 0x100) && (*piVar3 == *(int *)(in_ECX + 0x268))) {
            FUN_00355bea(0x200,*(undefined4 *)(in_ECX + 0x268),*piVar1,pbVar2);
          }
        }
      }
    }
  }
  return;
}
