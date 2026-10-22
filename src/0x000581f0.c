/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C9634143256F4122F3EDD99B7984E20683D356B6417FE7A505CA0C9F5BC2EB66
 * Entry: 0x000581f0, Ghidra index: 864, label: FUN_000581f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046d064;
void FUN_000581f0(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  bool bVar7;
  
  iVar6 = (param_3 - param_2) / 0x1c;
  if (0 < iVar6) {
    do {
      iVar2 = iVar6 / 2;
      iVar1 = *(int *)(iVar2 * 0x1c + 8 + param_2);
      iVar3 = iVar2 * 0x1c + param_2;
      if (iVar1 == 0) {
        puVar4 = &DAT_0046d064;
      }
      else {
        puVar4 = (uint *)(iVar1 + 4);
      }
      puVar5 = (uint *)(*(int *)(param_4 + 8) + 4);
      if (*(int *)(param_4 + 8) == 0) {
        puVar5 = &DAT_0046d064;
      }
      bVar7 = *puVar4 < *puVar5;
      if (*puVar4 == *puVar5) {
        iVar1 = *(int *)(iVar3 + 0x10);
        puVar4 = (uint *)(iVar1 + 4);
        if (iVar1 == 0) {
          puVar4 = &DAT_0046d064;
        }
        if (*(int *)(param_4 + 0x10) == 0) {
          puVar5 = &DAT_0046d064;
        }
        else {
          puVar5 = (uint *)(*(int *)(param_4 + 0x10) + 4);
        }
        bVar7 = *puVar4 < *puVar5;
      }
      if (bVar7) {
        param_2 = iVar3 + 0x1c;
        iVar2 = iVar6 + (-1 - iVar2);
      }
      iVar6 = iVar2;
    } while (0 < iVar2);
  }
  *param_1 = param_2;
  return;
}
