/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C10813FD9F41E45764B9CFD33593AD61F8CA111D949E6248ABC4F4D83B8C7488
 * Entry: 0x00272b80, Ghidra index: 8845, label: FUN_00272b80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00272b80(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  char *pcVar11;
  int in_ECX;
  int iVar12;
  undefined1 auStack_dc [56];
  undefined4 uStack_a4;
  char *pcStack_a0;
  int iStack_9c;
  
  FUN_00271920(auStack_dc,param_1);
  FUN_00271060();
  if (*(int *)(in_ECX + 4) != 0) {
    iStack_9c = 0x272bcb;
    FUN_00061eb0();
    iStack_9c = 0x272be7;
    puVar10 = (undefined4 *)FUN_00039510();
    uVar2 = puVar10[2];
    uVar3 = puVar10[1];
    *(undefined4 *)(in_ECX + 0xa0) = *puVar10;
    *(undefined4 *)(in_ECX + 0xa4) = uVar3;
    *(undefined4 *)(in_ECX + 0xa8) = uVar2;
    iStack_9c = 0x272c24;
    puVar10 = (undefined4 *)FUN_002334b0();
    uVar3 = puVar10[1];
    uVar4 = puVar10[2];
    uVar5 = puVar10[3];
    uVar2 = puVar10[8];
    uVar6 = puVar10[4];
    uVar7 = puVar10[5];
    uVar8 = puVar10[6];
    uVar9 = puVar10[7];
    *(undefined4 *)(in_ECX + 0xac) = *puVar10;
    *(undefined4 *)(in_ECX + 0xb0) = uVar3;
    *(undefined4 *)(in_ECX + 0xb4) = uVar4;
    *(undefined4 *)(in_ECX + 0xb8) = uVar5;
    *(undefined4 *)(in_ECX + 0xcc) = uVar2;
    *(undefined4 *)(in_ECX + 0xbc) = uVar6;
    *(undefined4 *)(in_ECX + 0xc0) = uVar7;
    *(undefined4 *)(in_ECX + 0xc4) = uVar8;
    *(undefined4 *)(in_ECX + 200) = uVar9;
  }
  *(undefined4 *)(in_ECX + 0x48) = *(undefined4 *)(in_ECX + 0xa0);
  *(undefined4 *)(in_ECX + 0x50) = *(undefined4 *)(in_ECX + 0xa8);
  *(undefined4 *)(in_ECX + 0x4c) = *(undefined4 *)(in_ECX + 0xa4);
  *(undefined4 *)(in_ECX + 0x54) = *(undefined4 *)(in_ECX + 0xac);
  *(undefined4 *)(in_ECX + 0x58) = *(undefined4 *)(in_ECX + 0xb0);
  *(undefined4 *)(in_ECX + 0x5c) = *(undefined4 *)(in_ECX + 0xb4);
  *(undefined4 *)(in_ECX + 0x60) = *(undefined4 *)(in_ECX + 0xb8);
  *(undefined4 *)(in_ECX + 0x74) = *(undefined4 *)(in_ECX + 0xcc);
  *(undefined4 *)(in_ECX + 100) = *(undefined4 *)(in_ECX + 0xbc);
  *(undefined4 *)(in_ECX + 0x68) = *(undefined4 *)(in_ECX + 0xc0);
  *(undefined4 *)(in_ECX + 0x6c) = *(undefined4 *)(in_ECX + 0xc4);
  *(undefined4 *)(in_ECX + 0x70) = *(undefined4 *)(in_ECX + 200);
  pcStack_a0 = *(char **)(param_1 + 0x38);
  if (pcStack_a0 == (char *)0x0) {
    iVar12 = 0;
  }
  else {
    pcVar11 = pcStack_a0;
    do {
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar1 != '\0');
    iStack_9c = (int)pcVar11 - (int)(pcStack_a0 + 1);
    uStack_a4 = 0x272d0d;
    FUN_0001fed0();
    if (*(uint *)(in_ECX + 0x28) < 0x10) {
      iVar12 = in_ECX + 0x14;
    }
    else {
      iVar12 = *(int *)(in_ECX + 0x14);
    }
  }
  *(int *)(in_ECX + 0xd0) = iVar12;
  pcStack_a0 = *(char **)(param_1 + 0x3c);
  if (pcStack_a0 != (char *)0x0) {
    pcVar11 = pcStack_a0;
    do {
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar1 != '\0');
    iStack_9c = (int)pcVar11 - (int)(pcStack_a0 + 1);
    uStack_a4 = 0x272d57;
    FUN_0001fed0();
    if (0xf < *(uint *)(in_ECX + 0x44)) {
      *(undefined4 *)(in_ECX + 0xd4) = *(undefined4 *)(in_ECX + 0x30);
      return;
    }
    *(int *)(in_ECX + 0xd4) = in_ECX + 0x30;
    return;
  }
  *(undefined4 *)(in_ECX + 0xd4) = 0;
  return;
}
