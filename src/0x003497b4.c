/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D89773C88C284AA42247F6E87542393F61641AA0CD3307482085243483DD7B0B
 * Entry: 0x003497b4, Ghidra index: 12920, label: FUN_003497b4
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_003497b4(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int in_ECX;
  byte *pbVar7;
  
  bVar1 = *(byte *)(in_ECX + 0xe);
  *(int *)(in_ECX + 0xad0) = *(int *)(in_ECX + 0xad0) + (uint)bVar1;
  uVar6 = *(uint *)(in_ECX + 0xad0);
  uVar2 = *(uint *)(in_ECX + 0xad4);
  if (uVar2 <= uVar6) {
    iVar3 = *(int *)(in_ECX + 0x1d8);
    uVar5 = uVar6 / uVar2;
    pbVar7 = *(byte **)(in_ECX + 0xac8);
    *(uint *)(in_ECX + 0xad0) = uVar6 - uVar2 * uVar5;
    if (pbVar7 == (byte *)0x0) {
      pbVar7 = *(byte **)(in_ECX + 0xac4);
    }
    iVar4 = *(int *)(in_ECX + 0xac4);
    for (; uVar5 != 0; uVar5 = uVar5 - 1) {
      if (pbVar7 == (byte *)((uint)bVar1 * 0x130 + iVar4)) {
        pbVar7 = *(byte **)(in_ECX + 0xac4);
      }
      if ((pbVar7[2] != 0) && (5 < pbVar7[2])) {
        if ((uint)(iVar3 - *(int *)(pbVar7 + 0x28)) < *(uint *)(pbVar7 + 0x18)) {
          uVar6 = iVar3 - *(int *)(pbVar7 + 0x24);
          if (*(uint *)(pbVar7 + 0x20) <= uVar6) {
            if ((*pbVar7 & 4) == 0) {
              if (*(uint *)(pbVar7 + 0x1c) <= uVar6) {
                FUN_00349366(pbVar7,0x5301,0,0,0,0);
                *(int *)(pbVar7 + 0x20) = iVar3;
              }
            }
            else if ((*(uint *)(pbVar7 + 0x1c) <= uVar6) ||
                    ((pbVar7 == *(byte **)(in_ECX + 0xae8) &&
                     ((*(int *)(in_ECX + 3000) != 0 || (*(int *)(in_ECX + 0xbb0) != 0)))))) {
              FUN_0034942f(pbVar7);
            }
          }
        }
        else {
          FUN_0034964a(pbVar7,0);
        }
      }
      pbVar7 = pbVar7 + 0x130;
    }
    *(byte **)(in_ECX + 0xac8) = pbVar7;
  }
  return;
}
