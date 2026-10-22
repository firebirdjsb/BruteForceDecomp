/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E907226C46075587A137C96B162AD08FB4A1AF4DCC1E0AF47D283936BF613D8C
 * Entry: 0x0003b580, Ghidra index: 418, label: FUN_0003b580
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0003b580(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  char cVar3;
  int *piVar4;
  undefined4 uVar5;
  char local_a9;
  uint local_a8;
  undefined1 local_a4 [4];
  undefined1 auStack_a0 [24];
  undefined1 uStack_88;
  undefined1 uStack_87;
  undefined1 auStack_84 [60];
  int iStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint uStack_18;
  
  piVar4 = (int *)FUN_0001ba10();
  puVar1 = (undefined1 *)*piVar4;
  iVar2 = *(int *)(*(int *)(param_1 + 0x3f8) + 4 + *(int *)(param_1 + 0x58) * 0xc);
  piVar4 = (int *)FUN_00023010(local_a4,*(undefined4 *)(puVar1 + 4));
  if ((*piVar4 == *(int *)(iVar2 + 0xc)) ||
     (local_a8 = *piVar4 - *(int *)(iVar2 + 8) >> 2, (int)local_a8 < 0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_00054c40(*(int *)(param_1 + 0x3f8) + *(int *)(param_1 + 0x58) * 0xc,local_a8,puVar1,
                         0);
    iVar2 = *(int *)(*(int *)(param_1 + 0x3f8) + 8 + *(int *)(param_1 + 0x58) * 0xc);
    if ((*(int *)(iVar2 + 4) == 0) ||
       ((uint)(*(int *)(iVar2 + 8) - *(int *)(iVar2 + 4) >> 2) <= local_a8)) {
      FUN_0015b7c0(iVar2);
    }
    iVar2 = *(int *)(*(int *)(iVar2 + 4) + local_a8 * 4);
    FUN_0003a8c0(param_1,iVar2 + 0x70,uVar5);
    FUN_0003a200(param_1,puVar1,iVar2,uVar5);
  }
  cVar3 = FUN_0003aa10(puVar1,&local_a9);
  if (cVar3 == '\0') {
    FUN_00022dc0();
    iVar2 = *(int *)(puVar1 + 0xc);
    uStack_44 = uVar5;
    if (iStack_48 != iVar2) {
      FUN_0008f6a0(iVar2);
    }
    uStack_18 = uStack_18 ^ ((uint)(iVar2 != 0) << 0xb ^ uStack_18) & 0x800;
    uStack_40 = *(undefined4 *)(puVar1 + 0x28);
    uStack_3c = *(undefined4 *)(puVar1 + 0x2c);
    uStack_87 = 1;
    if (auStack_84 != puVar1) {
      FUN_00055650();
    }
    uStack_88 = *(int *)(puVar1 + 0x20) != 0;
    FUN_00058b60();
    cVar3 = FUN_0003b750(auStack_a0);
    if (cVar3 != '\0') {
      (**(code **)(*(int *)(param_1 + 0x40) + 4))();
      FUN_00055c00();
    }
    FUN_0001d470();
    return;
  }
  if ((local_a9 == '\0') &&
     (iVar2 = *(int *)(puVar1 + 4), piVar4 = (int *)FUN_0001ba10(), iVar2 == *(int *)(*piVar4 + 4)))
  {
    return;
  }
  FUN_0003abe0(0);
  return;
}
