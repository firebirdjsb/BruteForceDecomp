/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F895D1C0C138D121D5321434422426B5A836409DF83FF29A99EBE5C69EAD5020
 * Entry: 0x000edc40, Ghidra index: 2953, label: FUN_000edc40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
char FUN_000edc40(undefined4 param_1,int *param_2,byte *param_3)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int in_ECX;
  char cVar5;
  
  cVar1 = FUN_000ed030(param_1,param_2,param_3);
  if (cVar1 == '\0') {
    bVar2 = *(byte *)(in_ECX + 100) & 1;
    cVar5 = (char)param_1;
    if (*param_2 == -0xced431) {
      if (cVar5 == '\0') {
        bVar2 = *param_3;
      }
      else {
        *param_3 = bVar2;
      }
      cVar1 = '\x01';
    }
    bVar4 = *(byte *)(in_ECX + 100);
    *(byte *)(in_ECX + 100) = bVar4 ^ (*(byte *)(in_ECX + 100) ^ bVar2) & 1;
    bVar2 = bVar4 >> 1 & 1;
    if ((cVar1 == '\0') && (*param_2 == 0x28fe724)) {
      if (cVar5 == '\0') {
        bVar2 = *param_3;
      }
      else {
        *param_3 = bVar2;
      }
      cVar1 = '\x01';
    }
    bVar4 = *(byte *)(in_ECX + 100);
    bVar3 = bVar4 >> 2 & 1;
    *(byte *)(in_ECX + 100) = bVar4 ^ (bVar2 << 1 ^ bVar4) & 2;
    if ((cVar1 == '\0') && (*param_2 == 0x18ed19af)) {
      if (cVar5 == '\0') {
        bVar3 = *param_3;
      }
      else {
        *param_3 = bVar3;
      }
      cVar1 = '\x01';
    }
    bVar2 = *(byte *)(in_ECX + 100);
    bVar4 = bVar2 >> 3 & 1;
    *(byte *)(in_ECX + 100) = bVar2 ^ (bVar3 << 2 ^ bVar2) & 4;
    if ((cVar1 == '\0') && (*param_2 == -0x60ca9e1)) {
      if (cVar5 == '\0') {
        bVar4 = *param_3;
      }
      else {
        *param_3 = bVar4;
      }
      cVar1 = '\x01';
    }
    bVar2 = *(byte *)(in_ECX + 100);
    bVar3 = bVar2 >> 4 & 1;
    *(byte *)(in_ECX + 100) = bVar2 ^ (bVar4 << 3 ^ bVar2) & 8;
    if ((cVar1 == '\0') && (*param_2 == -0x1b6cbf3b)) {
      if (cVar5 == '\0') {
        bVar3 = *param_3;
      }
      else {
        *param_3 = bVar3;
      }
      cVar1 = '\x01';
    }
    *(byte *)(in_ECX + 100) =
         *(byte *)(in_ECX + 100) ^ (bVar3 << 4 ^ *(byte *)(in_ECX + 100)) & 0x10;
  }
  return cVar1;
}
