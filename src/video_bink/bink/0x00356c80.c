/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B419A42B9B74F00E61002A85F9B56045C38099739BB845BAA18B30A019492A6E
 * Entry: 0x00356c80, Ghidra index: 13145, label: FUN_00356c80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_DAT_004b1640;
void FUN_00356c80(uint param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  char local_40 [31];
  undefined2 uStack_21;
  undefined1 auStack_1e [30];
  
  builtin_strncpy(local_40,"BINK",5);
  if ((param_1 & 0xf) != 0) {
    pcVar2 = (&PTR_DAT_004b1640)[param_1 & 0xf];
    iVar3 = 4 - (int)pcVar2;
    do {
      cVar1 = *pcVar2;
      pcVar2[(int)(local_40 + iVar3)] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    if (param_2 == 0) {
      FUN_002f7900(local_40);
    }
    else {
      FUN_002f78e5(local_40);
    }
    if ((param_1 & 0x100) != 0) {
      iVar3 = 0;
      do {
        cVar1 = local_40[iVar3];
        *(char *)((int)&uStack_21 + iVar3 + 1) = cVar1;
        iVar3 = iVar3 + 1;
      } while (cVar1 != '\0');
      puVar5 = &uStack_21;
      do {
        puVar6 = puVar5;
        puVar5 = (undefined2 *)((int)puVar6 + 1);
      } while (*(char *)((int)puVar6 + 1) != '\0');
      *(undefined2 *)((int)puVar6 + 1) = 0x3258;
      *(undefined1 *)((int)puVar6 + 3) = 0;
      if (param_2 == 0) {
        FUN_002f7900((int)&uStack_21 + 1);
      }
      else {
        FUN_002f78e5((int)&uStack_21 + 1);
      }
    }
    if ((param_1 & 0x40) != 0) {
      puVar5 = (undefined2 *)&stack0xffffffbf;
      do {
        pcVar2 = (char *)((int)puVar5 + 1);
        puVar5 = (undefined2 *)((int)puVar5 + 1);
      } while (*pcVar2 != '\0');
      *puVar5 = 0x4d;
      if (param_2 == 0) {
        FUN_002f7900(local_40);
      }
      else {
        FUN_002f78e5(local_40);
      }
    }
    if ((param_1 & 0x100) != 0) {
      puVar5 = (undefined2 *)&stack0xffffffbf;
      do {
        puVar6 = puVar5;
        puVar5 = (undefined2 *)((int)puVar6 + 1);
      } while (*(char *)((int)puVar6 + 1) != '\0');
      *(undefined2 *)((int)puVar6 + 1) = 0x3258;
      *(undefined1 *)((int)puVar6 + 3) = 0;
      if (param_2 == 0) {
        FUN_002f7900(local_40);
      }
      else {
        FUN_002f78e5(local_40);
      }
    }
  }
  if ((param_1 & 0x20) != 0) {
    uVar4 = 0;
    do {
      FUN_00356c80(param_1 & 0xffffffd0 | uVar4,param_2);
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < 0x10);
  }
  return;
}
