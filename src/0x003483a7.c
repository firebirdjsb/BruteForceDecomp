/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 677D89D405527E2D2EBCA4B8B67A9DA5355CA5F9C5DB73004D540FD9831F7CE7
 * Entry: 0x003483a7, Ghidra index: 12893, label: FUN_003483a7
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
byte * FUN_003483a7(int param_1,int *param_2)

{
  byte *pbVar1;
  int in_ECX;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  int *piVar5;
  short *psVar6;
  int *piVar7;
  bool bVar8;
  
  uVar3 = (uint)*(byte *)(in_ECX + 0xe);
  pbVar1 = *(byte **)(in_ECX + 0xac4);
  do {
    if (uVar3 == 0) {
      return (byte *)0x0;
    }
    if ((pbVar1[2] != 0) && ((*pbVar1 & 4) == 0)) {
      iVar2 = 3;
      bVar8 = true;
      pbVar4 = pbVar1 + 0xce;
      psVar6 = (short *)(param_1 + 10);
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar8 = *(short *)pbVar4 == *psVar6;
        pbVar4 = pbVar4 + 2;
        psVar6 = psVar6 + 1;
      } while (bVar8);
      if (bVar8) {
        iVar2 = 2;
        bVar8 = true;
        piVar5 = *(int **)(pbVar1 + 0xc0);
        piVar7 = param_2;
        do {
          if (iVar2 == 0) break;
          iVar2 = iVar2 + -1;
          bVar8 = *piVar5 == *piVar7;
          piVar5 = piVar5 + 1;
          piVar7 = piVar7 + 1;
        } while (bVar8);
        if (bVar8) {
          return pbVar1;
        }
      }
    }
    pbVar1 = pbVar1 + 0x130;
    uVar3 = uVar3 - 1;
  } while( true );
}
