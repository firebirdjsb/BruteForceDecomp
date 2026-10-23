/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 354CCAAF545A1CCF4FC076F3A4D45F65304A08DEE4C3E165F0B4FA89957F42CA
 * Entry: 0x0008b8c0, Ghidra index: 1683, label: FUN_0008b8c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469ab4;
extern uint32_t DAT_00469b58;
void FUN_0008b8c0(void)

{
  byte *pbVar1;
  char cVar2;
  int in_EAX;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 local_1c [5];
  int local_8;
  byte local_4;
  
  if (*(int *)(in_EAX + 0x60) == 0) {
    iVar4 = *(int *)(in_EAX + 0x38);
    iVar5 = *(int *)(iVar4 + 0xbf0);
    if ((*(char *)(iVar5 + 0x84) != '\0') || (*(int *)(iVar5 + 0x8c) == 0)) {
      local_1c[3] = 0;
      puVar3 = local_1c;
      for (iVar5 = 7; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
      local_1c[0] = 0xfdcf2801;
      local_1c[1] = *(undefined4 *)(*(int *)(in_EAX + 0x24) + 0x24);
      local_4 = local_4 | 3;
      local_8 = iVar4;
      puVar3 = (undefined4 *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
      iVar4 = (**(code **)*puVar3)(local_1c);
      if (*(int *)(in_EAX + 0x60) != iVar4) {
        FUN_0008f6a0(iVar4);
      }
      iVar4 = *(int *)(in_EAX + 0x60);
      if (iVar4 != 0) {
        cVar2 = FUN_0008b880();
        cVar2 = '\x01' - (cVar2 != '\0');
        *(byte *)(iVar4 + 0x28) =
             *(byte *)(iVar4 + 0x28) ^ (cVar2 * ' ' ^ *(byte *)(iVar4 + 0x28)) & 0x20;
        if (cVar2 != '\0') {
          pbVar1 = (byte *)(*(int *)(in_EAX + 0x60) + 0x66);
          *pbVar1 = *pbVar1 & 0xfe;
        }
        (**(code **)(*DAT_00469ab4 + 0x90))();
      }
    }
  }
  return;
}
