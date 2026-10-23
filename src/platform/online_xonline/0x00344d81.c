/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E95708AA65DBF649879E42C87E22171F7FB07BA431C765543A6F6055E48C1823
 * Entry: 0x00344d81, Ghidra index: 12752, label: FUN_00344d81
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t UNK_004b13fc;
undefined4 FUN_00344d81(int param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  uVar4 = param_3 + 7U >> 3;
  iVar2 = FUN_0034470a(param_1,param_2);
  if ((iVar2 != 0) && (iVar2 = FUN_003447d5(param_1,uVar4 + 1), iVar2 != 0)) {
    iVar2 = 7 - (param_3 - 1U & 7);
    **(undefined1 **)(param_1 + 0x24) = (char)iVar2;
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
    puVar5 = *(undefined4 **)(param_1 + 0x24);
    for (uVar3 = param_3 + 7U >> 5; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar5 = *param_4;
      param_4 = param_4 + 1;
      puVar5 = puVar5 + 1;
    }
    for (uVar3 = uVar4 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar5 = *(undefined1 *)param_4;
      param_4 = (undefined4 *)((int)param_4 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + uVar4;
    if (iVar2 != 0) {
      pbVar1 = (byte *)(*(int *)(param_1 + 0x24) + -1);
      *pbVar1 = *pbVar1 & (&UNK_004b13fc)[-iVar2];
    }
    return 1;
  }
  return 0;
}
