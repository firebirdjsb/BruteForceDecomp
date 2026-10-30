/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8D3D885135CD329A6DB276AB766DDB44500DAFF8C047BFB31B5BA02228F0C83F
 * Entry: 0x002716d0, Ghidra index: 8816, label: FUN_002716d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002716d0(int *param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  char *pcVar11;
  undefined4 *puVar12;
  int in_ECX;
  int iVar13;
  undefined1 auStack_dc [56];
  undefined4 uStack_a4;
  char *pcStack_a0;
  int iStack_9c;
  
  FUN_00271920(auStack_dc,param_1);
  FUN_00271060();
  pcVar2 = (char *)param_1[0xe];
  if (pcVar2 == (char *)0x0) {
    iVar13 = 0;
  }
  else {
    pcVar11 = pcVar2;
    do {
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar1 != '\0');
    iStack_9c = (int)pcVar11 - (int)(pcVar2 + 1);
    uStack_a4 = 0x271737;
    pcStack_a0 = pcVar2;
    FUN_0001fed0();
    if (*(uint *)(in_ECX + 0x28) < 0x10) {
      iVar13 = in_ECX + 0x14;
    }
    else {
      iVar13 = *(int *)(in_ECX + 0x14);
    }
  }
  *(int *)(in_ECX + 0xd0) = iVar13;
  pcVar2 = (char *)param_1[0xf];
  if (pcVar2 == (char *)0x0) {
    iVar13 = 0;
  }
  else {
    pcVar11 = pcVar2;
    do {
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar1 != '\0');
    iStack_9c = (int)pcVar11 - (int)(pcVar2 + 1);
    uStack_a4 = 0x271787;
    pcStack_a0 = pcVar2;
    FUN_0001fed0();
    if (*(uint *)(in_ECX + 0x44) < 0x10) {
      iVar13 = in_ECX + 0x30;
    }
    else {
      iVar13 = *(int *)(in_ECX + 0x30);
    }
  }
  *(int *)(in_ECX + 0xd4) = iVar13;
  if (*(int *)(in_ECX + 4) != 0) {
    iStack_9c = 0x2717c0;
    FUN_00061eb0();
    iStack_9c = 0x2717dc;
    puVar12 = (undefined4 *)FUN_00039510();
    uVar3 = puVar12[2];
    uVar4 = puVar12[1];
    *(undefined4 *)(in_ECX + 0xa0) = *puVar12;
    *(undefined4 *)(in_ECX + 0xa4) = uVar4;
    *(undefined4 *)(in_ECX + 0xa8) = uVar3;
    iStack_9c = 0x271819;
    puVar12 = (undefined4 *)FUN_002334b0();
    uVar4 = puVar12[1];
    uVar5 = puVar12[2];
    uVar6 = puVar12[3];
    uVar3 = puVar12[8];
    uVar7 = puVar12[4];
    uVar8 = puVar12[5];
    uVar9 = puVar12[6];
    uVar10 = puVar12[7];
    *(undefined4 *)(in_ECX + 0xac) = *puVar12;
    *(undefined4 *)(in_ECX + 0xb0) = uVar4;
    *(undefined4 *)(in_ECX + 0xb4) = uVar5;
    *(undefined4 *)(in_ECX + 0xb8) = uVar6;
    *(undefined4 *)(in_ECX + 0xcc) = uVar3;
    *(undefined4 *)(in_ECX + 0xbc) = uVar7;
    *(undefined4 *)(in_ECX + 0xc0) = uVar8;
    *(undefined4 *)(in_ECX + 0xc4) = uVar9;
    *(undefined4 *)(in_ECX + 200) = uVar10;
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
  if (((*(byte *)(param_1 + 1) & 1) == 0) && ((*param_1 == 2 || (*param_1 == 1)))) {
    *(int *)(in_ECX + 0xdc) = param_1[0x11];
    *(undefined4 *)(in_ECX + 0xe8) = *(undefined4 *)(in_ECX + 0xdc);
  }
  return;
}
