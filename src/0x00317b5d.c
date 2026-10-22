/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D5860F2402F9B5FDEB0A31AC044663F30AF848D244A2E700BCDFF0C88E7B6555
 * Entry: 0x00317b5d, Ghidra index: 12186, label: FUN_00317b5d
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0032f644;
extern uint32_t DAT_0032f648;
extern uint32_t DAT_0032f64c;
extern uint32_t DAT_0032ff48;
void FUN_00317b5d(int param_1)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  int in_ECX;
  uint uVar11;
  uint uVar12;
  int local_14;
  uint local_10;
  ushort *local_c;
  uint local_8;
  
  iVar9 = (uint)*(byte *)(in_ECX + 0x65) * 0xc;
  local_8 = *(uint *)(*(int *)(&DAT_0032f644 + iVar9) + -0x1800000);
  uVar12 = *(uint *)(*(int *)(&DAT_0032f648 + iVar9) + -0x1800000);
  uVar4 = *(uint *)(*(int *)(&DAT_0032f64c + iVar9) + -0x1800000);
  iVar3 = *(int *)(in_ECX + 8) + 0x6c0 + (uint)*(byte *)(in_ECX + 0x65) * 8;
  iVar5 = *(int *)(in_ECX + 0x50);
  if (iVar3 == iVar5) {
    local_10 = 0;
    uVar10 = 0xffff;
  }
  else {
    local_10 = iVar5 + -0x4c;
    uVar10 = (uint)*(ushort *)(iVar5 + -0x42 + (uint)*(byte *)(iVar5 + 0x18) * 2);
  }
  iVar5 = *(int *)(in_ECX + 0x4c);
  if (iVar3 == iVar5) {
    local_14 = 0;
    uVar11 = 0xffff;
  }
  else {
    local_14 = iVar5 + -0x4c;
    uVar11 = (uint)*(ushort *)(iVar5 + -0x40);
  }
  if (local_10 == 0) {
    *(uint *)(*(int *)(&DAT_0032f644 + iVar9) + -0x1800000) = uVar11;
    local_8 = uVar11;
  }
  else {
    puVar2 = (uint *)(uVar10 * 0x80 + 0x7c + DAT_0032ff48);
    *puVar2 = *puVar2 & 0xffff0000 | uVar11;
  }
  local_10 = 0;
  bVar7 = false;
  bVar8 = false;
  if (*(char *)(in_ECX + 100) == '\0') goto LAB_00317cd7;
  local_c = (ushort *)(in_ECX + 0xc);
  do {
    uVar10 = (uint)*local_c;
    if (uVar12 == uVar10) {
      bVar7 = true;
    }
    if (uVar4 == uVar10) {
      bVar8 = true;
    }
    local_c = local_c + 1;
    puVar2 = (uint *)(uVar10 * 0x80 + 0x7c + DAT_0032ff48);
    local_10 = local_10 + 1;
    *puVar2 = *puVar2 & 0xffff0000 | uVar10;
  } while (local_10 < *(byte *)(in_ECX + 100));
  if (bVar7) {
    if (local_14 == 0) {
      uVar11 = 0xffff;
LAB_00317c9c:
      uVar12 = local_8;
    }
    else {
      uVar12 = *(uint *)(uVar11 * 0x80 + 0x7c + DAT_0032ff48) & 0xffff;
      if (uVar12 == 0xffff) goto LAB_00317c9c;
    }
    *(uint *)(*(int *)(&DAT_0032f648 + (uint)*(byte *)(in_ECX + 0x65) * 0xc) + -0x1800000) = uVar11;
    uVar11 = uVar12;
  }
  else {
    if (!bVar8) goto LAB_00317cd7;
    if (local_14 == 0) {
      uVar11 = local_8;
    }
  }
  *(uint *)(*(int *)(&DAT_0032f64c + (uint)*(byte *)(in_ECX + 0x65) * 0xc) + -0x1800000) = uVar11;
LAB_00317cd7:
  FUN_003118c0(in_ECX + 0x4c);
  *(undefined1 *)(in_ECX + 0x65) = 0xff;
  if ((*(ushort *)(in_ECX + 0x12) & 0x8000) == 0) {
    *(undefined1 *)(*(int *)(in_ECX + 0x68) + 0x3f) = 1;
    if (param_1 != 0) {
      piVar1 = (int *)(in_ECX + 0x54);
      *piVar1 = *(int *)(in_ECX + 8) + 0x6d8;
      piVar6 = *(int **)(*(int *)(in_ECX + 8) + 0x6dc);
      *(int **)(in_ECX + 0x58) = piVar6;
      *piVar6 = (int)piVar1;
      *(int **)(*piVar1 + 4) = piVar1;
      puVar2 = (uint *)(*(int *)(in_ECX + 8) + 0x6f0);
      *puVar2 = *puVar2 | 0x40;
      KeInsertQueueDpc(*(int *)(in_ECX + 8) + 0x700,0,0);
    }
  }
  else {
    FUN_003174e3();
  }
  return;
}
