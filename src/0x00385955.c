/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B884C84CEBFC4BC0C1001FF6CBCB34BDF545E149BA4FD34318C7BD5F9C2F686E
 * Entry: 0x00385955, Ghidra index: 13677, label: FUN_00385955
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00385955(void)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  int in_EDX;
  uint *puVar9;
  undefined4 local_18;
  uint local_10;
  uint *local_c;
  
  local_18 = 0;
  uVar1 = *(uint *)(in_EDX + 0x10);
  KeRaiseIrqlToDpcLevel();
  if (*(byte *)(uVar1 + 0x24) == *(byte *)(uVar1 + 0x25)) {
    local_18 = 0xc0000d00;
  }
  else {
    puVar9 = (uint *)((uint)*(byte *)(uVar1 + 0x26) * 0x40 + *(int *)(uVar1 + 0x2c));
    puVar2 = *(uint **)(in_EDX + 0x18);
    local_10 = 0;
    *(char *)(uVar1 + 0x26) =
         (char)((ulonglong)(*(byte *)(uVar1 + 0x26) + 1) %
               (ulonglong)(longlong)(int)(uint)*(byte *)(uVar1 + 0x24));
    puVar9[9] = puVar2[6];
    puVar9[10] = puVar2[7];
    puVar9[8] = uVar1;
    *puVar9 = *puVar9 ^ ((uint)*(byte *)(in_EDX + 0x14) << 0x15 ^ *puVar9) & 0xe00000;
    *puVar9 = ((*puVar2 - 1) * 0x1000000 ^ *puVar9) & 0x7000000 ^ *puVar9;
    uVar4 = puVar2[1] & 0xfff;
    uVar5 = uVar4;
    if (*puVar2 != 0) {
      local_c = puVar2 + 2;
      puVar8 = puVar9 + 4;
      do {
        *(ushort *)puVar8 = (ushort)uVar5 | 0xe000;
        uVar6 = *local_c;
        local_c = (uint *)((int)local_c + 2);
        uVar5 = uVar5 + (ushort)uVar6;
        local_10 = local_10 + 1;
        puVar8 = (uint *)((int)puVar8 + 2);
      } while (local_10 < *puVar2);
    }
    MmLockUnlockBufferPages(puVar2[1],uVar5 - uVar4,0);
    uVar6 = MmGetPhysicalAddress(puVar2[1]);
    puVar9[1] = uVar6;
    uVar5 = MmGetPhysicalAddress((puVar2[1] - 1) + (uVar5 - uVar4));
    puVar9[3] = uVar5;
    if ((*(byte *)(uVar1 + 0x10) & 1) != 0) {
      puVar9[0xc] = puVar9[4];
      puVar9[0xd] = puVar9[5];
      puVar9[0xe] = puVar9[6];
      puVar9[0xf] = puVar9[7];
    }
    if ((*(byte *)(uVar1 + 0x10) & 2) != 0) {
      iVar7 = FUN_00384f75();
      iVar3 = *(int *)(uVar1 + 0x28);
      iVar7 = iVar7 + 1;
      if (iVar3 != iVar7 && -1 < iVar3 - iVar7) {
        iVar7 = iVar3;
      }
      *(short *)puVar9 = (short)iVar7;
      *(uint *)(uVar1 + 0x28) = *puVar2 + iVar7;
    }
    *(char *)(uVar1 + 0x25) = *(char *)(uVar1 + 0x25) + '\x01';
    if (*(char *)(uVar1 + 0x25) != *(char *)(uVar1 + 0x24)) {
      *(uint *)(uVar1 + 4) = puVar9[2];
    }
  }
  KfLowerIrql();
  *(undefined4 *)(in_EDX + 4) = local_18;
  FUN_00380eda(in_EDX);
  return local_18;
}
