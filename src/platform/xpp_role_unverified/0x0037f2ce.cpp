/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9F4E445731A7ECDEC6E22BEC668FA60D1DC51CC7DE39B8AEE614E41981797034
 * Entry: 0x0037f2ce, Ghidra index: 13498, label: FUN_0037f2ce
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0037f2ce(char *param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *in_ECX;
  char *pcVar4;
  char *pcVar5;
  byte *pbVar6;
  uint local_c;
  uint local_8;
  
  pcVar2 = param_1;
  local_c = (uint)(byte)param_1[1];
  cVar1 = *param_1;
  pcVar5 = in_ECX;
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      pcVar5 = in_ECX + 0x32;
    }
    else {
      pcVar5 = param_1;
      if (cVar1 == '\x02') {
        if ((byte)in_ECX[0x34] < (byte)param_1[2]) {
          in_ECX[0x34] = param_1[2];
        }
        pcVar5 = in_ECX + 100;
        if (4 < (byte)param_1[1]) {
          param_1[1] = param_1[1] - 4;
          *param_1 = '\x01';
          FUN_0037f2ce(param_1);
          param_1[1] = param_1[1] + '\x04';
          local_c = local_c - 4;
          *param_1 = '\x02';
        }
      }
    }
  }
  if ((byte)pcVar5[2] < (byte)param_1[2]) {
    pcVar5[2] = param_1[2];
  }
  param_1 = (char *)0x0;
  local_8 = local_c;
  if (local_c != 0) {
    pbVar6 = (byte *)(pcVar5 + 3);
    do {
      if (3 < param_1) break;
      if (*pbVar6 <= (byte)pcVar2[3]) {
        if (param_1 < 4) {
          iVar3 = 4 - (int)param_1;
          pcVar4 = pcVar5 + 0x2b;
          do {
            *pcVar4 = pcVar4[-10];
            pcVar4 = pcVar4 + -10;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
        *pbVar6 = pcVar2[3];
        local_8 = local_8 - 1;
      }
      param_1 = (char *)((int)param_1 + 1);
      pbVar6 = pbVar6 + 10;
    } while (local_8 != 0);
  }
  param_1 = (char *)0x0;
  local_8 = local_c;
  if (local_c != 0) {
    pbVar6 = (byte *)(pcVar5 + 4);
    do {
      if (3 < param_1) break;
      if (*pbVar6 <= (byte)pcVar2[4]) {
        if (param_1 < 4) {
          iVar3 = 4 - (int)param_1;
          pcVar4 = pcVar5 + 0x2c;
          do {
            *pcVar4 = pcVar4[-10];
            pcVar4 = pcVar4 + -10;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
        *pbVar6 = pcVar2[4];
        local_8 = local_8 - 1;
      }
      param_1 = (char *)((int)param_1 + 1);
      pbVar6 = pbVar6 + 10;
    } while (local_8 != 0);
  }
  param_1 = (char *)0x0;
  local_8 = local_c;
  if (local_c != 0) {
    pbVar6 = (byte *)(pcVar5 + 5);
    do {
      if (3 < param_1) break;
      if (*pbVar6 <= (byte)pcVar2[5]) {
        if (param_1 < 4) {
          iVar3 = 4 - (int)param_1;
          pcVar4 = pcVar5 + 0x2d;
          do {
            *pcVar4 = pcVar4[-10];
            pcVar4 = pcVar4 + -10;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
        *pbVar6 = pcVar2[5];
        local_8 = local_8 - 1;
      }
      param_1 = (char *)((int)param_1 + 1);
      pbVar6 = pbVar6 + 10;
    } while (local_8 != 0);
  }
  param_1 = (char *)0x0;
  local_8 = local_c;
  if (local_c != 0) {
    pbVar6 = (byte *)(pcVar5 + 8);
    do {
      if (3 < param_1) break;
      if (*pbVar6 <= (byte)pcVar2[8]) {
        if (param_1 < 4) {
          iVar3 = 4 - (int)param_1;
          pcVar4 = pcVar5 + 0x30;
          do {
            *pcVar4 = pcVar4[-10];
            pcVar4 = pcVar4 + -10;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
        *pbVar6 = pcVar2[8];
        local_8 = local_8 - 1;
      }
      param_1 = (char *)((int)param_1 + 1);
      pbVar6 = pbVar6 + 10;
    } while (local_8 != 0);
  }
  if ((byte)in_ECX[0xb0] < (byte)pcVar2[3]) {
    in_ECX[0xb0] = pcVar2[3];
  }
  if ((byte)in_ECX[0xb1] < (byte)pcVar2[7]) {
    in_ECX[0xb1] = pcVar2[7];
  }
  if ((byte)in_ECX[0xb2] < (byte)pcVar2[9]) {
    in_ECX[0xb2] = pcVar2[9];
  }
  return;
}
