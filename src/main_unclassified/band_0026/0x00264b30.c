/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2B6CBBA3E2E62BE8FF5EB515FED9594F2C58F515EDC7DD0AEAB683D97FDB4A22
 * Entry: 0x00264b30, Ghidra index: 8711, label: FUN_00264b30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00264b30(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  code *pcVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 local_8;
  uint uStack_4;
  
  puVar2 = param_1;
  cVar3 = FUN_00264f10(&local_8);
  if (cVar3 == '\0') {
    pcVar5 = (code *)puVar2[0x10];
    *(undefined1 *)((int)puVar2 + 5) = 0;
    if (pcVar5 == (code *)0x0) {
      return 0;
    }
    iVar4 = puVar2[0xe];
  }
  else {
    iVar4 = (**(code **)(*(int *)puVar2[0x12] + 0x1c))((int *)puVar2[0x12],local_8,&param_1);
    if (iVar4 < 0) {
      return iVar4;
    }
    puVar7 = param_1;
    puVar8 = (undefined4 *)puVar2[9];
    for (uVar6 = uStack_4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    for (uVar6 = uStack_4 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    iVar4 = puVar2[0xe] + uStack_4;
    puVar2[9] = puVar2[9] + uStack_4;
    iVar1 = puVar2[8];
    puVar2[0xe] = iVar4;
    puVar2[7] = puVar2[7] + uStack_4;
    puVar2[8] = iVar1 - uStack_4;
    puVar2[3] = puVar2[3] + uStack_4;
    if ((iVar1 - uStack_4 != 0) && (uStack_4 != 0)) {
      return 0;
    }
    pcVar5 = (code *)puVar2[0x10];
    *(undefined1 *)((int)puVar2 + 5) = 0;
    if (pcVar5 == (code *)0x0) {
      return 0;
    }
  }
  puVar2[8] = 0;
  (*pcVar5)(0,iVar4,puVar2[0x11]);
  return 0;
}
