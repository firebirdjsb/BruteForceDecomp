/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EDDCF6E0A6A7484B494F1750A38FC727EDECFA88D5E64E397C61E0ED39A01AAD
 * Entry: 0x002925d0, Ghidra index: 9252, label: FUN_002925d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469888;
void FUN_002925d0(int param_1)

{
  uint uVar1;
  int iVar2;
  int in_EAX;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  
  uVar5 = *(uint *)(param_1 + 0x20);
  uVar1 = *(uint *)(in_EAX + 0x20);
  iVar3 = uVar5 + uVar1;
  if (*(int *)(DAT_00469888 + 0x24) < *(int *)(DAT_00469888 + 0x28) + iVar3) {
    FUN_0029d540(iVar3);
  }
  iVar2 = DAT_00469888;
  pbVar7 = (byte *)(*(int *)(DAT_00469888 + 0x28) + *(int *)(DAT_00469888 + 0x1c));
  pbVar8 = (byte *)(in_EAX + 0x28);
  pbVar9 = pbVar7;
  for (uVar4 = uVar1 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pbVar9 = *(undefined4 *)pbVar8;
    pbVar8 = pbVar8 + 4;
    pbVar9 = pbVar9 + 4;
  }
  for (uVar4 = uVar1 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pbVar9 = *pbVar8;
    pbVar8 = pbVar8 + 1;
    pbVar9 = pbVar9 + 1;
  }
  pbVar8 = (byte *)(param_1 + 0x28);
  pbVar9 = pbVar7 + uVar1;
  for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pbVar9 = *(undefined4 *)pbVar8;
    pbVar8 = pbVar8 + 4;
    pbVar9 = pbVar9 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pbVar9 = *pbVar8;
    pbVar8 = pbVar8 + 1;
    pbVar9 = pbVar9 + 1;
  }
  if (iVar3 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = (int)((uint)*pbVar7 * iVar3) % 0x1f;
  }
  FUN_00294640(pbVar7,iVar3,*(int *)(iVar2 + 0x60) + iVar6 * 0xc);
  return;
}
