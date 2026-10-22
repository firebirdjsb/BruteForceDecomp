/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2222655244B094D21DFBF268665489B84097622FCE9F31FBE6F59A0B7542F75C
 * Entry: 0x001e8830, Ghidra index: 6838, label: FUN_001e8830
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001e8830(int param_1)

{
  char cVar1;
  int in_EAX;
  char *pcVar2;
  int in_ECX;
  char *pcVar3;
  uint uVar4;
  char *unaff_EBX;
  char *pcVar5;
  char *pcVar6;
  
  pcVar2 = unaff_EBX;
  if (*(uint *)(in_EAX + 0x18) < 0x10) {
    pcVar3 = (char *)(in_EAX + 4);
  }
  else {
    pcVar3 = *(char **)(in_EAX + 4);
  }
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    *pcVar2 = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_001e8a90();
  if (*(uint *)(in_ECX + 0x18) < 0x10) {
    pcVar2 = (char *)(in_ECX + 4);
    pcVar3 = pcVar2;
  }
  else {
    pcVar2 = *(char **)(in_ECX + 4);
    pcVar3 = pcVar2;
  }
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar6 = unaff_EBX + -1;
  do {
    pcVar5 = pcVar6 + 1;
    pcVar6 = pcVar6 + 1;
  } while (*pcVar5 != '\0');
  pcVar5 = pcVar3;
  for (uVar4 = (uint)((int)pcVar2 - (int)pcVar3) >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar4 = (int)pcVar2 - (int)pcVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar6 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar6 = pcVar6 + 1;
  }
  if (*(uint *)(param_1 + 0x18) < 0x10) {
    pcVar2 = (char *)(param_1 + 4);
    pcVar3 = pcVar2;
  }
  else {
    pcVar2 = *(char **)(param_1 + 4);
    pcVar3 = pcVar2;
  }
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar6 = unaff_EBX + -1;
  do {
    pcVar5 = pcVar6 + 1;
    pcVar6 = pcVar6 + 1;
  } while (*pcVar5 != '\0');
  pcVar5 = pcVar3;
  for (uVar4 = (uint)((int)pcVar2 - (int)pcVar3) >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar4 = (int)pcVar2 - (int)pcVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar6 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar6 = pcVar6 + 1;
  }
  return;
}
