/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DB14E2F9ADD166C724DAEB5C6733C9E80D817C3677116AF7F88C9687DB060806
 * Entry: 0x001e88e0, Ghidra index: 6839, label: FUN_001e88e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004000a0;
extern uint32_t DAT_004000b4;
void FUN_001e88e0(int param_1,int param_2,int param_3)

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
  pcVar4 = DAT_004000a0;
  if (DAT_004000b4 < 0x10) {
    pcVar4 = (char *)&DAT_004000a0;
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
  FUN_001e8a90();
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
  if (*(uint *)(param_3 + 0x18) < 0x10) {
    pcVar2 = (char *)(param_3 + 4);
    pcVar4 = pcVar2;
  }
  else {
    pcVar2 = *(char **)(param_3 + 4);
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
