/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4AB7B8DA63554A244854BFDACDDC888EC0C2C93BA1A7FE88B90631988C6EF964
 * Entry: 0x00350307, Ghidra index: 13049, label: FUN_00350307
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00350307(void)

{
  char cVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  char *pcVar5;
  char *pcVar6;
  undefined4 uVar7;
  int in_ECX;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  uint uVar11;
  char *pcVar12;
  
  iVar2 = FUN_0034cb5a(0x6a54454e,0x10040003,0x1ec,0,0,0);
  if (iVar2 != 0) {
    puVar3 = (undefined2 *)FUN_0034c855();
    puVar10 = (undefined4 *)(puVar3 + 4);
    for (iVar8 = 0x7b; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar10 = 0;
      puVar10 = puVar10 + 1;
    }
    *(undefined1 *)(puVar3 + 4) = 1;
    *(undefined1 *)((int)puVar3 + 9) = 1;
    *(undefined1 *)(puVar3 + 5) = 6;
    uVar9 = *(uint *)(in_ECX + 0xa74);
    *(uint *)(puVar3 + 6) =
         (uVar9 & 0xff0000 | uVar9 >> 0x10) >> 8 | (uVar9 << 0x10 | uVar9 & 0xff00) << 8;
    *(undefined4 *)(puVar3 + 0x12) = *(undefined4 *)(in_ECX + 0x1e0);
    puVar3[0x14] = *(undefined2 *)(in_ECX + 0x1e4);
    *(undefined4 *)(puVar3 + 0x7a) = 0x63538263;
    cVar1 = *(char *)(in_ECX + 0x8c0);
    if (((cVar1 == '\x04') || (cVar1 == '\r')) || (cVar1 == '\x0e')) {
      *(undefined4 *)(puVar3 + 10) = *(undefined4 *)(in_ECX + 0x8e8);
    }
    *(undefined1 *)(puVar3 + 0x7c) = 0x35;
    *(undefined1 *)((int)puVar3 + 0xf9) = 1;
    cVar1 = *(char *)(in_ECX + 0x8c0);
    puVar4 = puVar3 + 0x7d;
    if (cVar1 == '\x04') {
      *(byte *)(in_ECX + 0xa72) = *(byte *)(in_ECX + 0xa72) | 1;
      *(undefined1 *)puVar4 = 8;
      pcVar5 = (char *)((int)puVar3 + 0xfb);
    }
    else {
      if (cVar1 == '\t') {
        *(byte *)(in_ECX + 0xa71) = *(byte *)(in_ECX + 0xa71) | 0x10;
        *(undefined1 *)puVar4 = 1;
      }
      else if (cVar1 == '\x0f') {
        *(byte *)(in_ECX + 0xa72) = *(byte *)(in_ECX + 0xa72) | 4;
        *(undefined1 *)puVar4 = 4;
      }
      else {
        *(byte *)(in_ECX + 0xa71) = *(byte *)(in_ECX + 0xa71) | 0x40;
        *(undefined1 *)puVar4 = 3;
      }
      pcVar6 = (char *)(in_ECX + 0x932);
      pcVar5 = (char *)((int)puVar3 + 0xfb);
      if (*pcVar6 != '\0') {
        *pcVar5 = '\f';
        pcVar5 = pcVar6;
        do {
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        uVar11 = (int)pcVar5 - (in_ECX + 0x933);
        *(char *)(puVar3 + 0x7e) = (char)uVar11;
        pcVar12 = (char *)((int)puVar3 + 0xfd);
        for (uVar9 = uVar11 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pcVar12 = *(undefined4 *)pcVar6;
          pcVar6 = pcVar6 + 4;
          pcVar12 = pcVar12 + 4;
        }
        pcVar5 = (char *)((int)puVar3 + 0xfd) + uVar11;
        for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
          *pcVar12 = *pcVar6;
          pcVar6 = pcVar6 + 1;
          pcVar12 = pcVar12 + 1;
        }
      }
    }
    *pcVar5 = '=';
    pcVar5[1] = '\a';
    pcVar5[2] = '\x01';
    *(undefined4 *)(pcVar5 + 3) = *(undefined4 *)(in_ECX + 0x1e0);
    *(undefined2 *)(pcVar5 + 7) = *(undefined2 *)(in_ECX + 0x1e4);
    pcVar6 = pcVar5 + 9;
    if (*(char *)(in_ECX + 0x8c0) != '\x0f') {
      builtin_strncpy(pcVar5 + 9,"<\bXBOX 1.07",0xb);
      pcVar6 = pcVar5 + 0x14;
      if (*(char *)(in_ECX + 0x8c0) == '\x04') {
        *pcVar6 = '\x01';
      }
      else {
        *pcVar6 = '\x03';
        pcVar5[0x15] = '\x01';
        pcVar6 = pcVar5 + 0x16;
        *pcVar6 = '\x03';
      }
      pcVar6[1] = '\x06';
      pcVar6 = pcVar6 + 2;
    }
    if ((*(int *)(in_ECX + 0x8e8) != 0) &&
       (((cVar1 = *(char *)(in_ECX + 0x8c0), cVar1 == '\b' || (cVar1 == '\t')) ||
        ((cVar1 == '\n' || (cVar1 == '\x0f')))))) {
      *pcVar6 = '2';
      pcVar6[1] = '\x04';
      *(undefined4 *)(pcVar6 + 2) = *(undefined4 *)(in_ECX + 0x8e8);
      pcVar6 = pcVar6 + 6;
    }
    if ((*(int *)(in_ECX + 0x928) != 0) &&
       ((*(char *)(in_ECX + 0x8c0) == '\n' || (*(char *)(in_ECX + 0x8c0) == '\x0f')))) {
      *pcVar6 = '6';
      pcVar6[1] = '\x04';
      *(undefined4 *)(pcVar6 + 2) = *(undefined4 *)(in_ECX + 0x928);
      pcVar6 = pcVar6 + 6;
    }
    *pcVar6 = -1;
    pcVar5 = pcVar6 + 1;
    if (pcVar6 + 1 < puVar3 + 0x9a) {
      pcVar5 = (char *)(puVar3 + 0x9a);
    }
    *(short *)(iVar2 + 4) = ((short)pcVar5 - (short)(puVar3 + 0x7c)) + 0x10c;
    *puVar3 = 0x4400;
    puVar3[1] = 0x4300;
    if (*(char *)(in_ECX + 0x8c0) == '\r') {
      uVar7 = *(undefined4 *)(in_ECX + 0x928);
    }
    else {
      uVar7 = 0xffffffff;
    }
    FUN_0034a7ce(iVar2,uVar7,0x11,0);
  }
  return;
}
