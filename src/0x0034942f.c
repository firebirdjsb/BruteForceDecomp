/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4FB745443109349082B1DDB25C714EA5817CDE67951EC4D339F0FE3D65D456F0
 * Entry: 0x0034942f, Ghidra index: 12915, label: FUN_0034942f
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0034942f(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  int in_ECX;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined1 local_90 [4];
  undefined4 local_8c;
  byte local_88 [120];
  uint local_10;
  int local_c;
  byte *local_8;
  
  local_10 = *(uint *)(param_1 + 0x14);
  pbVar2 = local_88;
  if (param_1 == *(int *)(in_ECX + 0xae8)) {
    local_8c = *(undefined4 *)(in_ECX + 3000);
    pbVar5 = (byte *)(in_ECX + 0xbb0);
    if (*(int *)pbVar5 != 0) {
      local_c = in_ECX;
      local_8 = pbVar5;
      for (pbVar6 = (byte *)(in_ECX + 0xaf0); pbVar6 < pbVar5; pbVar6 = pbVar6 + 0x30) {
        bVar1 = *local_8;
        if (bVar1 != 0) {
          *pbVar2 = bVar1;
          *(undefined4 *)(pbVar2 + 1) = *(undefined4 *)pbVar6;
          *(undefined4 *)(pbVar2 + 5) = *(undefined4 *)(pbVar6 + 4);
          pbVar5 = pbVar2 + 9;
          if ((bVar1 & 1) != 0) {
            *(undefined4 *)(pbVar2 + 9) = *(undefined4 *)(pbVar6 + 0x14);
            pbVar5 = pbVar2 + 0xd;
          }
          pbVar2 = pbVar5;
          if ((bVar1 & 2) != 0) {
            *(undefined4 *)pbVar2 = *(undefined4 *)(pbVar6 + 0x1c);
            *(undefined4 *)(pbVar2 + 4) = *(undefined4 *)(pbVar6 + 0x20);
            pbVar2 = pbVar2 + 8;
          }
          if ((bVar1 & 4) != 0) {
            *pbVar2 = pbVar6[0x24];
            uVar4 = *(uint *)(pbVar6 + 0x24);
            pbVar2 = pbVar2 + 1;
            if (uVar4 != 0) {
              pbVar5 = pbVar6 + 0x28;
              pbVar7 = pbVar2;
              for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
                *(undefined4 *)pbVar7 = *(undefined4 *)pbVar5;
                pbVar5 = pbVar5 + 4;
                pbVar7 = pbVar7 + 4;
              }
              for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
                *pbVar7 = *pbVar5;
                pbVar5 = pbVar5 + 1;
                pbVar7 = pbVar7 + 1;
              }
              pbVar2 = pbVar2 + *(int *)(pbVar6 + 0x24);
              in_ECX = local_c;
            }
          }
        }
        local_8 = local_8 + 1;
        pbVar5 = (byte *)(in_ECX + 0xbb0);
      }
    }
  }
  else {
    local_8c = 0;
  }
  FUN_00349366(param_1,0x5302,&local_8c,pbVar2 + (-4 - (int)local_90),0,0);
  if (((local_10 < *(uint *)(param_1 + 0x14)) &&
      (*(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(in_ECX + 0x1d8),
      param_1 == *(int *)(in_ECX + 0xae8))) &&
     (*(undefined4 *)(in_ECX + 3000) = 0, *(int *)(in_ECX + 0xbb0) != 0)) {
    *(undefined4 *)(in_ECX + 0xbb4) = *(undefined4 *)(param_1 + 0x14);
  }
  return;
}
