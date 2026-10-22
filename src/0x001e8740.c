/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9C548BFE7E99F24009D8D9A3D89571FFED14C5DE549A0DBD2D23143041ACC3E0
 * Entry: 0x001e8740, Ghidra index: 6837, label: FUN_001e8740
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004000bc;
extern uint32_t DAT_004000d0;
void FUN_001e8740(int param_1,int param_2)

{
  char cVar1;
  int in_EAX;
  char *pcVar2;
  uint uVar3;
  char *pcVar4;
  char *unaff_EBX;
  char *pcVar5;
  char *pcVar6;
  
  pcVar2 = unaff_EBX;
  pcVar4 = DAT_004000bc;
  if (DAT_004000d0 < 0x10) {
    pcVar4 = (char *)&DAT_004000bc;
  }
  do {
    cVar1 = *pcVar4;
    *pcVar2 = cVar1;
    pcVar2 = pcVar2 + 1;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_001e8a90();
  if (*(uint *)(in_EAX + 0x18) < 0x10) {
    pcVar2 = (char *)(in_EAX + 4);
    pcVar4 = pcVar2;
  }
  else {
    pcVar2 = *(char **)(in_EAX + 4);
    pcVar4 = pcVar2;
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
  pcVar5 = pcVar4;
  for (uVar3 = (uint)((int)pcVar2 - (int)pcVar4) >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar3 = (int)pcVar2 - (int)pcVar4 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar6 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar6 = pcVar6 + 1;
  }
  FUN_001e8a90();
  if (*(uint *)(param_1 + 0x18) < 0x10) {
    pcVar2 = (char *)(param_1 + 4);
    pcVar4 = pcVar2;
  }
  else {
    pcVar2 = *(char **)(param_1 + 4);
    pcVar4 = pcVar2;
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
  pcVar5 = pcVar4;
  for (uVar3 = (uint)((int)pcVar2 - (int)pcVar4) >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar3 = (int)pcVar2 - (int)pcVar4 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar6 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar6 = pcVar6 + 1;
  }
  if (*(uint *)(param_2 + 0x18) < 0x10) {
    pcVar2 = (char *)(param_2 + 4);
    pcVar4 = pcVar2;
  }
  else {
    pcVar2 = *(char **)(param_2 + 4);
    pcVar4 = pcVar2;
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
  pcVar5 = pcVar4;
  for (uVar3 = (uint)((int)pcVar2 - (int)pcVar4) >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar3 = (int)pcVar2 - (int)pcVar4 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar6 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar6 = pcVar6 + 1;
  }
  return;
}
