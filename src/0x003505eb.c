/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7E76FD27ADF92B4BB295AFCE4F6F3D369C9AB108A970079FF5823A6EC558B899
 * Entry: 0x003505eb, Ghidra index: 13051, label: FUN_003505eb
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_003505eb(void)

{
  uint *puVar1;
  char cVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined2 uVar8;
  int in_ECX;
  uint uVar9;
  uint uVar10;
  undefined2 *puVar11;
  undefined4 *puVar12;
  uint *puVar13;
  undefined4 *puVar14;
  uint *puVar15;
  bool bVar16;
  undefined1 local_10;
  undefined1 uStack_f;
  int local_c;
  
  bVar16 = *(char *)(in_ECX + 0x8c0) == '\x11';
  pcVar3 = (char *)(in_ECX + 0xa02);
  do {
    cVar2 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar2 != '\0');
  uVar4 = (int)pcVar3 - (in_ECX + 0xa03);
  if (bVar16) {
    iVar5 = uVar4 + 4;
  }
  else {
    iVar5 = **(int **)(in_ECX + 0xa2c);
  }
  if ((!bVar16) || (local_c = 2, *(char *)(in_ECX + 0x8c1) == '\0')) {
    local_c = 1;
  }
  do {
    iVar6 = FUN_0034cb5a(0x4954454e,0x4040000,iVar5 + 0xe,0,0,0);
    if (iVar6 == 0) {
      return;
    }
    puVar7 = (undefined4 *)FUN_0034c841();
    puVar1 = puVar7 + 5;
    if (bVar16) {
      *puVar7 = 0xffffffff;
      *(undefined2 *)(puVar7 + 1) = 0xffff;
    }
    else {
      *puVar7 = *(undefined4 *)(in_ECX + 0xa4c);
      *(undefined2 *)(puVar7 + 1) = *(undefined2 *)(in_ECX + 0xa50);
    }
    *(undefined4 *)((int)puVar7 + 6) = *(undefined4 *)(in_ECX + 0x1e0);
    *(undefined2 *)((int)puVar7 + 10) = *(undefined2 *)(in_ECX + 0x1e4);
    if (((*(byte *)(in_ECX + 0x8c4) & 0x80) != 0) || (uVar8 = 0x6388, local_c == 2)) {
      uVar8 = 0x123c;
    }
    *(undefined2 *)(puVar7 + 3) = uVar8;
    *(undefined2 *)(puVar7 + 4) = 0;
    *(byte *)((int)puVar7 + 0xf) = (!bVar16 - 1U & 0xf0) + 0x19;
    *(undefined1 *)((int)puVar7 + 0xe) = 0x11;
    uStack_f = (undefined1)((uint)(iVar5 + 8) >> 8);
    local_10 = (undefined1)(iVar5 + 8);
    *(ushort *)((int)puVar7 + 0x12) = CONCAT11(local_10,uStack_f);
    if (bVar16) {
      *(undefined2 *)puVar1 = 0x101;
      *(ushort *)((int)puVar7 + 0x16) = CONCAT11((char)uVar4,(char)(uVar4 >> 8));
      puVar12 = (undefined4 *)(in_ECX + 0xa02);
      puVar14 = puVar7 + 6;
      for (uVar9 = uVar4 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *puVar14 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar14 = puVar14 + 1;
      }
      for (uVar9 = uVar4 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined1 *)puVar14 = *(undefined1 *)puVar12;
        puVar12 = (undefined4 *)((int)puVar12 + 1);
        puVar14 = (undefined4 *)((int)puVar14 + 1);
      }
      puVar11 = (undefined2 *)((int)puVar7 + uVar4 + 0x18);
    }
    else {
      puVar13 = *(uint **)(in_ECX + 0xa2c);
      uVar9 = *puVar13;
      puVar15 = puVar1;
      for (uVar10 = uVar9 >> 2; puVar13 = puVar13 + 1, uVar10 != 0; uVar10 = uVar10 - 1) {
        *puVar15 = *puVar13;
        puVar15 = puVar15 + 1;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(char *)puVar15 = (char)*puVar13;
        puVar13 = (uint *)((int)puVar13 + 1);
        puVar15 = (uint *)((int)puVar15 + 1);
      }
      puVar11 = (undefined2 *)((int)puVar1 + **(int **)(in_ECX + 0xa2c));
    }
    *puVar11 = 0x301;
    puVar11[1] = 0x400;
    *(undefined4 *)(puVar11 + 2) = *(undefined4 *)(in_ECX + 0xa74);
    FUN_00355bae(iVar6,0);
    *(uint *)(in_ECX + 0xa70) = *(uint *)(in_ECX + 0xa70) | (-(uint)bVar16 & 0xffff4000) + 0x10000;
    local_c = local_c + -1;
  } while (local_c != 0);
  return;
}
