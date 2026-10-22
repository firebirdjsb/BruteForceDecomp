/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9584AEDA117605DF10CA0FC8F6D2A4B502A2747BAB8812E4E73EE41D53AC28DB
 * Entry: 0x002f2614, Ghidra index: 10802, label: FUN_002f2614
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00387480;
undefined4
FUN_002f2614(int param_1,undefined1 *param_2,int param_3,int param_4,undefined4 param_5,
            undefined4 *param_6)

{
  char *pcVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 *puVar7;
  
  if (*(int *)LaunchDataPage_exref == 0) {
    uVar4 = MmAllocateContiguousMemory(0x1000);
    *(undefined4 *)LaunchDataPage_exref = uVar4;
  }
  if (*(int *)LaunchDataPage_exref == 0) {
    uVar4 = 0xc0000017;
  }
  else {
    MmPersistContiguousMemory(*(int *)LaunchDataPage_exref,0x1000,1);
    if (param_2 == (undefined1 *)0x0) {
      param_2 = &DAT_00387480;
    }
    puVar3 = *(undefined4 **)LaunchDataPage_exref;
    pcVar1 = (char *)(puVar3 + 2);
    puVar7 = puVar3;
    for (iVar6 = 0x400; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    **(int **)LaunchDataPage_exref = param_4;
    *(undefined4 *)(*(int *)LaunchDataPage_exref + 4) = param_5;
    if (param_4 != -1) {
      puVar7 = (undefined4 *)(*(int *)LaunchDataPage_exref + 0x400);
      for (iVar6 = 0x300; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar7 = *param_6;
        param_6 = param_6 + 1;
        puVar7 = puVar7 + 1;
      }
    }
    iVar6 = 0;
    if (param_1 != 0) {
      if ((param_2 != (undefined1 *)0x0) && (param_3 != 0)) {
        XAPILIB__lstrcpynA(pcVar1,param_2,0x207);
        pcVar5 = pcVar1;
        do {
          cVar2 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar2 != '\0');
        iVar6 = (int)pcVar5 - ((int)puVar3 + 9);
        pcVar1[iVar6] = ';';
        iVar6 = iVar6 + 1;
      }
      XAPILIB__lstrcpynA(pcVar1 + iVar6,param_1,0x208 - iVar6);
    }
    uVar4 = 0;
  }
  return uVar4;
}
