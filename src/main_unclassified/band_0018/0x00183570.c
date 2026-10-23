/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FE0419115193DDEA5540483511A16DD430F1B11597EC5A33209A05063A7D8CC5
 * Entry: 0x00183570, Ghidra index: 5199, label: FUN_00183570
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
/* WARNING: Removing unreachable block (ram,0x00183617) */

undefined1 FUN_00183570(int param_1)

{
  char *pcVar1;
  char cVar2;
  int in_EAX;
  int iVar3;
  char *pcVar4;
  undefined1 uVar5;
  
  iVar3 = FUN_0017be00(in_EAX + 0x6c);
  uVar5 = 0;
  if (iVar3 != 0) {
    pcVar1 = (char *)(*(int *)(in_EAX + 4) * 0x104 + 0x164 + iVar3);
    pcVar4 = pcVar1;
    do {
      cVar2 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar2 != '\0');
    FUN_0001fed0(pcVar1,(int)pcVar4 - (int)(pcVar1 + 1));
    iVar3 = FUN_00183530();
    *(int *)(param_1 + 0x6c) = iVar3;
    if ((iVar3 == 0) || (iVar3 == -1)) {
      (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x26c))();
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
    }
  }
  return uVar5;
}
