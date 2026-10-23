/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1D50283D9F00786B6AD854ACF09388A2468D1CE077B9B12F846C11C7F445B9FB
 * Entry: 0x00251c30, Ghidra index: 8374, label: FUN_00251c30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
char * FUN_00251c30(void)

{
  char *pcVar1;
  uint uVar2;
  uint in_EAX;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  int unaff_ESI;
  char local_12;
  char local_11;
  uint local_10;
  char *local_c;
  uint local_8;
  
  local_10 = *(uint *)(unaff_ESI + 0x74);
  uVar2 = *(uint *)(unaff_ESI + 100);
  pcVar8 = *(char **)(unaff_ESI + 0x70);
  pcVar4 = (char *)(*(int *)(unaff_ESI + 0x30) + uVar2);
  if (*(int *)(unaff_ESI + 0x24) - 0x106U < uVar2) {
    local_8 = (uVar2 - *(int *)(unaff_ESI + 0x24)) + 0x106;
  }
  else {
    local_8 = 0;
  }
  local_12 = pcVar4[(int)(pcVar8 + -1)];
  local_11 = pcVar4[(int)pcVar8];
  pcVar1 = pcVar4 + 0x102;
  if (*(char **)(unaff_ESI + 0x84) <= pcVar8) {
    local_10 = local_10 >> 2;
  }
  pcVar3 = *(char **)(unaff_ESI + 0x6c);
  local_c = *(char **)(unaff_ESI + 0x88);
  if (pcVar3 < *(char **)(unaff_ESI + 0x88)) {
    local_c = pcVar3;
  }
  do {
    pcVar7 = (char *)(*(int *)(unaff_ESI + 0x30) + in_EAX);
    if ((((pcVar7[(int)pcVar8] == local_11) && (pcVar7[(int)(pcVar8 + -1)] == local_12)) &&
        (*pcVar7 == *pcVar4)) && (pcVar7[1] == pcVar4[1])) {
      pcVar7 = pcVar7 + 2;
      pcVar5 = pcVar4 + 2;
      while (((((pcVar6 = pcVar5 + 1, pcVar5[1] == pcVar7[1] &&
                (pcVar6 = pcVar5 + 2, pcVar5[2] == pcVar7[2])) &&
               ((pcVar6 = pcVar5 + 3, pcVar5[3] == pcVar7[3] &&
                ((pcVar6 = pcVar5 + 4, pcVar5[4] == pcVar7[4] &&
                 (pcVar6 = pcVar5 + 5, pcVar5[5] == pcVar7[5])))))) &&
              (pcVar6 = pcVar5 + 6, pcVar5[6] == pcVar7[6])) &&
             (pcVar6 = pcVar5 + 7, pcVar5[7] == pcVar7[7]))) {
        pcVar6 = pcVar5 + 8;
        pcVar7 = pcVar7 + 8;
        if ((pcVar5[8] != *pcVar7) || (pcVar5 = pcVar6, pcVar1 <= pcVar6)) break;
      }
      pcVar7 = pcVar6 + (0x102 - (int)pcVar1);
      if ((int)pcVar8 < (int)pcVar7) {
        *(uint *)(unaff_ESI + 0x68) = in_EAX;
        if ((int)local_c <= (int)pcVar7) break;
        local_12 = pcVar4[(int)(pcVar6 + (0x101 - (int)pcVar1))];
        local_11 = pcVar4[(int)pcVar7];
        pcVar8 = pcVar7;
      }
    }
    pcVar7 = pcVar8;
    in_EAX = (uint)*(ushort *)
                    (*(int *)(unaff_ESI + 0x38) + (*(uint *)(unaff_ESI + 0x2c) & in_EAX) * 2);
    if (in_EAX <= local_8) break;
    local_10 = local_10 - 1;
    pcVar8 = pcVar7;
  } while (local_10 != 0);
  if (pcVar7 <= pcVar3) {
    pcVar3 = pcVar7;
  }
  return pcVar3;
}
