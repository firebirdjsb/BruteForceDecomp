/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1E4A411DD2E51A52DC1BD547D48AA112974BFBBA8F51CE0A360EADEC7FD220F3
 * Entry: 0x0034cca3, Ghidra index: 12988, label: FUN_0034cca3
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00356a90;
extern uint32_t UNK_00356ad8;
extern uint32_t UNK_00356b20;
undefined4 FUN_0034cca3(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  byte bVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  int in_ECX;
  int iVar7;
  int iVar8;
  byte bVar9;
  undefined4 *puVar10;
  byte *pbVar11;
  ushort uVar12;
  byte *pbVar13;
  byte *local_8;
  
  FUN_00352ebc(0x20);
  pbVar11 = (byte *)(in_ECX + 4);
  puVar10 = &DAT_00356a90;
  pbVar13 = pbVar11;
  for (iVar7 = 0x12; iVar7 != 0; iVar7 = iVar7 + -1) {
    *(undefined4 *)pbVar13 = *puVar10;
    puVar10 = puVar10 + 1;
    pbVar13 = pbVar13 + 4;
  }
  local_8 = (byte *)*param_1;
  if ((local_8 != (byte *)0x0) && ((bVar3 = *local_8, bVar3 == 0xc || (bVar3 == 0x48)))) {
    uVar4 = (uint)bVar3;
    if (-1 < (int)(uVar4 - 1)) {
      iVar7 = -(int)pbVar11;
      do {
        bVar3 = *local_8;
        if (bVar3 == 0) {
          bVar3 = pbVar11[(int)&DAT_00356a90 + iVar7];
LAB_0034cd15:
          *pbVar11 = bVar3;
        }
        else {
          bVar9 = pbVar11[(int)&UNK_00356ad8 + iVar7];
          if ((bVar9 <= bVar3) && (bVar9 = pbVar11[(int)&UNK_00356b20 + iVar7], bVar3 <= bVar9))
          goto LAB_0034cd15;
          *pbVar11 = bVar9;
        }
        local_8 = local_8 + 1;
        pbVar11 = pbVar11 + 1;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
  }
  FUN_0034c772(param_1);
  iVar7 = in_ECX + 0x1d0;
  *(int *)(in_ECX + 0x1d4) = iVar7;
  *(int *)iVar7 = iVar7;
  /* 0x34cd37: PUSH imm32; existing initializer ABI is unverified. */
  KeInitializeDpc(in_ECX + 0x188,UINT32_C(0x0034cc97));
  KeInitializeTimerEx(in_ECX + 0x1a8,0);
  /* 0x34cd58: MOV DWORD [EBX+0x1d8],0x69780, not a host pointer. */
  *(uint32_t *)(uintptr_t)((uint32_t)in_ECX + 0x1d8U) = UINT32_C(0x00069780);
  /* 0x34cd62/0x34cd67: load a DWORD guest address from import slot
   * 0x38648c, then load its DWORD value; 0x34cd6d stores at +0x1dc.
   * ABI_UNVERIFIED: import resolution and guest memory mapping remain open. */
  *(uint32_t *)(uintptr_t)((uint32_t)in_ECX + 0x1dcU) =
      *(uint32_t *)(uintptr_t)(*(uint32_t *)(uintptr_t)UINT32_C(0x0038648c));
  FUN_00352ebc(0x40);
  bVar3 = *(byte *)(in_ECX + 6);
  iVar7 = (uint)bVar3 * 0x1000;
  puVar5 = (undefined1 *)ExAllocatePoolWithTag(iVar7,0x6554454e);
  if (puVar5 == (undefined1 *)0x0) {
    uVar6 = 0x80072747;
  }
  else {
    *(undefined1 **)(in_ECX + 0x4c) = puVar5;
    *(undefined1 **)(in_ECX + 0x50) = puVar5 + iVar7;
    FUN_00352ebc(0x80);
    iVar7 = in_ECX + 0x54;
    iVar8 = 6;
    do {
      *(int *)(iVar7 + 4) = iVar7;
      *(int *)iVar7 = iVar7;
      iVar7 = iVar7 + 8;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    *(undefined2 *)(puVar5 + 6) = 0;
    puVar5[1] = 1;
    *(undefined2 *)(puVar5 + 2) = 0x6654;
    *puVar5 = 0x20;
    *(undefined2 *)(puVar5 + 4) = 1;
    puVar5[0x21] = 0;
    *(undefined2 *)(puVar5 + 0x22) = 0;
    uVar4 = (uint)bVar3 * 0x80 - 2;
    iVar7 = 5;
    uVar12 = (ushort)uVar4;
    *(undefined2 *)(puVar5 + 0x26) = 1;
    *(ushort *)(puVar5 + 0x24) = uVar12;
    if (uVar12 < 6) {
      iVar7 = (uVar4 & 0xffff) - 1;
    }
    piVar2 = (int *)(in_ECX + 0x54 + iVar7 * 8);
    iVar7 = *piVar2;
    *(int **)(puVar5 + 0x2c) = piVar2;
    piVar1 = (int *)(puVar5 + 0x28);
    *piVar1 = iVar7;
    *(int **)(iVar7 + 4) = piVar1;
    *piVar2 = (int)piVar1;
    puVar5 = puVar5 + (uint)*(ushort *)(puVar5 + 0x24) * 0x20 + 0x20;
    puVar5[1] = 1;
    *(undefined2 *)(puVar5 + 2) = 0x6754;
    *puVar5 = 0x20;
    *(ushort *)(puVar5 + 6) = uVar12;
    *(undefined2 *)(puVar5 + 4) = 1;
    uVar6 = 0;
  }
  return uVar6;
}
