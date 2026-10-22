/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 54C72548A39133EC16E735E473379CD49C3CF915D03B3EC05248401B1BDD3FF7
 * Entry: 0x0020b900, Ghidra index: 7339, label: FUN_0020b900
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
char FUN_0020b900(undefined4 param_1,int *param_2,byte *param_3)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  int in_ECX;
  char cVar5;
  
  cVar2 = FUN_001fedb0(param_1,param_2,param_3);
  if (cVar2 == '\0') {
    cVar5 = (char)param_1;
    if (*param_2 == -0x1fe5adc4) {
      if (cVar5 == '\0') {
        *(undefined4 *)(in_ECX + 0x40) = *(undefined4 *)param_3;
      }
      else {
        *(undefined4 *)param_3 = *(undefined4 *)(in_ECX + 0x40);
      }
      cVar2 = '\x01';
    }
    if ((cVar2 == '\0') && (*param_2 == 0x19ca8cf3)) {
      if (cVar5 == '\0') {
        *(undefined4 *)(in_ECX + 0x44) = *(undefined4 *)param_3;
      }
      else {
        *(undefined4 *)param_3 = *(undefined4 *)(in_ECX + 0x44);
      }
      cVar2 = '\x01';
    }
    bVar3 = *(byte *)(in_ECX + 0x48) & 1;
    if ((cVar2 == '\0') && (*param_2 == 0x1747360f)) {
      if (cVar5 == '\0') {
        bVar3 = *param_3;
      }
      else {
        *param_3 = bVar3;
      }
      cVar2 = '\x01';
    }
    bVar1 = *(byte *)(in_ECX + 0x48);
    *(byte *)(in_ECX + 0x48) = bVar1 ^ (*(byte *)(in_ECX + 0x48) ^ bVar3) & 1;
    bVar3 = bVar1 >> 1 & 1;
    if ((cVar2 == '\0') && (*param_2 == 0x11819686)) {
      if (cVar5 == '\0') {
        bVar3 = *param_3;
      }
      else {
        *param_3 = bVar3;
      }
      cVar2 = '\x01';
    }
    bVar1 = *(byte *)(in_ECX + 0x48);
    bVar4 = bVar1 >> 2 & 1;
    *(byte *)(in_ECX + 0x48) = bVar1 ^ (bVar3 << 1 ^ bVar1) & 2;
    if ((cVar2 == '\0') && (*param_2 == 0x8f457d8)) {
      if (cVar5 == '\0') {
        bVar4 = *param_3;
      }
      else {
        *param_3 = bVar4;
      }
      cVar2 = '\x01';
    }
    *(byte *)(in_ECX + 0x48) =
         *(byte *)(in_ECX + 0x48) ^ (bVar4 << 2 ^ *(byte *)(in_ECX + 0x48)) & 4;
  }
  return cVar2;
}
