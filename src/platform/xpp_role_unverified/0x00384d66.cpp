/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2D215F624AFAAB43D66F28F4EE7AA94078AB32622C9BC277C5F68F4F311C060F
 * Entry: 0x00384d66, Ghidra index: 13660, label: FUN_00384d66
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-draft declaration only; Xbox x86 guest ABI_UNVERIFIED. */
extern void FUN_00384b13(byte param_1);
void FUN_00384d66(void)

{
  int iVar1;
  byte bVar2;
  short sVar3;
  byte bVar4;
  int iVar5;
  byte bVar6;
  int in_ECX;
  int iVar7;
  byte bVar8;
  int in_EDX;
  undefined4 uVar9;
  short *psVar10;
  uint uVar11;
  uint local_8;
  
  sVar3 = *(short *)(in_EDX + 0x22);
  local_8 = 0;
  bVar2 = *(byte *)(in_EDX + 0x12);
  iVar1 = (uint)bVar2 * 0x10 + 0xc + in_ECX;
  iVar5 = *(int *)(iVar1 + 8);
  do {
    iVar7 = iVar5;
    iVar5 = iVar7;
    if (iVar7 == in_EDX) break;
    iVar5 = *(int *)(iVar7 + 0x18);
    local_8 = iVar7;
  } while (iVar5 != 0);
  iVar7 = *(int *)(iVar5 + 0x18);
  if (iVar7 == 0) {
    uVar9 = 0;
    *(uint *)(iVar1 + 0xc) = local_8;
    bVar6 = bVar2;
    if (bVar2 == 0) goto LAB_00384de4;
    do {
      bVar8 = bVar6 >> 1;
      if (*(int *)((uint)bVar8 * 0x10 + 0x14 + in_ECX) != 0) break;
      bVar4 = bVar6 >> 1;
      bVar6 = bVar8;
    } while (bVar4 != 0);
    iVar7 = *(int *)((uint)bVar8 * 0x10 + 0x14 + in_ECX);
    if (iVar7 == 0) {
      uVar9 = 0;
      goto LAB_00384de4;
    }
  }
  uVar9 = *(undefined4 *)(iVar7 + 0x14);
LAB_00384de4:
  if (local_8 == 0) {
    *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(iVar5 + 0x18);
    FUN_00384b13(bVar2);
  }
  else {
    *(undefined4 *)(local_8 + 0x18) = *(undefined4 *)(iVar5 + 0x18);
    *(undefined4 *)(local_8 + 0xc) = uVar9;
  }
  *(short *)(iVar1 + 2) = *(short *)(iVar1 + 2) - sVar3;
  bVar6 = bVar2;
  bVar8 = bVar2;
  if (bVar2 != 0) goto LAB_00384e43;
  bVar8 = 1;
  bVar6 = 1;
  do {
    if (bVar6 <= bVar8) {
      psVar10 = (short *)((uint)bVar6 * 0x10 + 0x12 + in_ECX);
      local_8 = (uint)(byte)((bVar8 - bVar6) + 1);
      do {
        *psVar10 = *psVar10 - *(short *)(in_EDX + 0x22);
        psVar10 = psVar10 + 8;
        local_8 = local_8 - 1;
      } while (local_8 != 0);
    }
LAB_00384e43:
    bVar6 = bVar6 << 1;
    bVar8 = bVar8 * '\x02' + 1;
  } while (bVar8 < 0x41);
  while (1 < bVar2) {
    iVar1 = (uint)(bVar2 ^ 1) * 0x10 + 0xc + in_ECX;
    uVar11 = (uint)*(ushort *)(iVar1 + 4) + (uint)*(ushort *)(iVar1 + 2);
    iVar1 = (uint)bVar2 * 0x10 + 0xc + in_ECX;
    bVar8 = bVar2 >> 1;
    bVar6 = bVar2;
    if (((uint)*(ushort *)(iVar1 + 4) + (uint)*(ushort *)(iVar1 + 2) <= uVar11) &&
       (bVar6 = bVar2 ^ 1, uVar11 == *(ushort *)((uint)bVar8 * 0x10 + 0x10 + in_ECX))) break;
    iVar1 = (uint)bVar6 * 0x10 + 0xc + in_ECX;
    *(short *)((uint)bVar8 * 0x10 + 0x10 + in_ECX) = *(short *)(iVar1 + 4) + *(short *)(iVar1 + 2);
    bVar2 = bVar8;
  }
  if (bVar2 == 1) {
    *(short *)(in_ECX + 0x10) = *(short *)(in_ECX + 0x20) + *(short *)(in_ECX + 0x1e);
  }
  return;
}
