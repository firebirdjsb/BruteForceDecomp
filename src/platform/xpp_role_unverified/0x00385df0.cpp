/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 866706ADF039FC7298905B2E57BABFB407FB92131C8B39967C305CAF423EDD4D
 * Entry: 0x00385df0, Ghidra index: 13686, label: FUN_00385df0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004a8fc0;
void FUN_00385df0(uint param_1)

{
  char cVar1;
  byte bVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  char cVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  int *in_ECX;
  uint uVar10;
  uint in_EDX;
  uint *puVar11;
  uint *local_20;
  uint local_18;
  int local_14;
  uint local_10;
  uint *local_c;
  uint *local_8;
  
  uVar5 = param_1;
  cVar1 = (char)in_ECX[0x117];
  uVar7 = *(ushort *)(in_EDX + 2) & 0x7ff;
  local_14 = *(int *)(param_1 + 0x14);
  param_1 = 0;
  *(char *)(in_EDX + 0x26) = *(char *)(in_EDX + 0x26) + -1;
  *(char *)(in_EDX + 0x27) = *(char *)(in_EDX + 0x27) + '\x01';
  *(ushort *)(uVar5 + 0x22) = *(ushort *)(uVar5 + 0x22) & 0xfffd | 4;
  local_18 = 0;
  local_20 = (uint *)0x0;
  local_10 = 0;
  local_c = (uint *)0x0;
  if (*(int *)(in_EDX + 4) == 0) {
    puVar11 = (uint *)FUN_00385d25(cVar1);
    *(uint *)(in_EDX + 8) = (puVar11[4] ^ *(uint *)(in_EDX + 8)) & 0xf ^ puVar11[4];
  }
  else {
    puVar11 = (uint *)(*(int *)(in_EDX + 4) + DAT_004a8fc0);
  }
  local_8 = puVar11;
  if (*(char *)(in_EDX + 0x11) == '\0') {
    puVar8 = (undefined4 *)FUN_00385d25(-2 - cVar1);
    *puVar8 = *(undefined4 *)(uVar5 + 0x28);
    puVar8[1] = *(undefined4 *)(uVar5 + 0x2c);
    puVar11 = (uint *)FUN_00385d25(cVar1);
    *local_8 = *local_8 & 0x3ffff | 0xe2e00000;
    local_8[1] = puVar8[4];
    local_8[2] = puVar11[4];
    iVar4 = puVar8[4];
    *(undefined1 *)(local_8 + 7) = 0;
    *(undefined1 *)((int)local_8 + 0x1d) = 0;
    param_1 = 0x2000000;
    local_8[3] = iVar4 + 7;
    local_8[5] = in_EDX;
    *(undefined1 *)((int)local_8 + 0x1e) = 1;
    local_8[6] = uVar5;
  }
  if (local_14 == 0) {
    *(undefined1 *)(uVar5 + 0x1c) = 1;
  }
  else {
    MmLockUnlockBufferPages(*(undefined4 *)(uVar5 + 0x18),local_14,0);
  }
  if (local_14 != 0) {
    do {
      local_8 = (uint *)FUN_00385db6(&local_18);
      while( true ) {
        uVar9 = local_18;
        if ((local_10 + local_18 < uVar7) && ((local_18 == 0 || (local_14 != 0)))) break;
        if (local_10 == 0) {
          puVar11[1] = (uint)local_8;
          if (uVar7 <= local_18) {
            *(char *)((int)puVar11 + 0x1d) = (char)uVar7;
            uVar9 = uVar7;
            goto LAB_00385f81;
          }
          local_18 = 0;
          *(char *)((int)puVar11 + 0x1d) = (char)uVar9;
        }
        else {
          puVar11[1] = (uint)local_20;
          uVar9 = uVar7 - local_10;
          if (local_18 < uVar7 - local_10) {
            uVar9 = local_18;
          }
          cVar6 = (char)local_10 + (char)uVar9;
          local_10 = 0;
          *(char *)((int)puVar11 + 0x1d) = cVar6;
LAB_00385f81:
          local_18 = local_18 - uVar9;
        }
        local_8 = (uint *)((int)local_8 + uVar9);
        param_1 = param_1 ^ 0x1000000;
        *(undefined1 *)(puVar11 + 7) = 0;
        *(undefined1 *)((int)puVar11 + 0x1e) = 0;
        puVar11[3] = (int)local_8 - 1;
        uVar10 = *puVar11 & 0xffbffff | 0xe0000000;
        uVar9 = (param_1 ^ uVar10) & 0x3000000 ^ uVar10;
        *puVar11 = uVar10;
        *puVar11 = uVar9 | 0xe00000;
        puVar11[5] = in_EDX;
        bVar2 = *(byte *)(uVar5 + 0x1c);
        puVar11[6] = uVar5;
        *puVar11 = (bVar2 & 3) << 0x13 | uVar9 & 0xf3e7ffff | 0xe00000;
        local_c = puVar11;
        puVar11 = (uint *)FUN_00385d25(cVar1);
        local_c[2] = puVar11[4];
      }
      local_20 = local_8;
      local_10 = local_18;
    } while (local_14 != 0);
    if ((local_c != (uint *)0x0) && (*(char *)(uVar5 + 0x1d) != '\0')) {
      *(byte *)((int)local_c + 2) = *(byte *)((int)local_c + 2) | 4;
    }
  }
  if (*(char *)(in_EDX + 0x11) == '\0') {
    *(byte *)((int)puVar11 + 2) = *(byte *)((int)puVar11 + 2) & 0xfb;
    uVar7 = (((*(char *)(uVar5 + 0x1c) != '\x02') + 1) * 0x80000 ^ *puVar11) & 0x180000 ^ *puVar11;
    *puVar11 = uVar7;
    bVar2 = *(byte *)(uVar5 + 0x1e);
    puVar11[1] = 0;
    puVar11[3] = 0;
    *(undefined1 *)((int)puVar11 + 0x1d) = 0;
    puVar11[5] = in_EDX;
    *(undefined1 *)(puVar11 + 7) = 2;
    *puVar11 = (bVar2 & 7 | 0xffffff18) << 0x15 | uVar7 & 0x1fffff;
    *(undefined1 *)((int)puVar11 + 0x1e) = 2;
    puVar11[6] = uVar5;
    local_c = puVar11;
    puVar11 = (uint *)FUN_00385d25(cVar1);
    local_c[2] = puVar11[4];
  }
  else {
    bVar2 = *(byte *)(uVar5 + 0x1e);
    *(undefined1 *)(local_c + 7) = 2;
    *local_c = *local_c ^ ((uint)bVar2 << 0x15 ^ *local_c) & 0xe00000;
  }
  *(undefined1 *)((int)puVar11 + 0x1e) = 3;
  uVar3 = *(undefined2 *)(uVar5 + 0x14);
  *(undefined4 *)(uVar5 + 0x14) = 0;
  *(undefined2 *)(uVar5 + 0x20) = uVar3;
  *(uint *)(in_EDX + 4) = puVar11[4];
  if (*(char *)(in_EDX + 0x20) == '\0') {
    *(byte *)(in_EDX + 1) = *(byte *)(in_EDX + 1) & 0xbf;
  }
  if (*(char *)(in_EDX + 0x11) == '\0') {
    *(undefined4 *)(*in_ECX + 8) = 2;
  }
  else if (*(char *)(in_EDX + 0x11) == '\x02') {
    *(undefined4 *)(*in_ECX + 8) = 4;
  }
  return;
}
