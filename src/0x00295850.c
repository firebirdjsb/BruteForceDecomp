/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F22907FB623A1F5672E7D462BB47187FAD01785AE9D867561EB31C497853631A
 * Entry: 0x00295850, Ghidra index: 9323, label: FUN_00295850
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469888;
extern uint32_t PTR_DAT_003b9580;
void FUN_00295850(void)

{
  int iVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  uVar7 = 0;
  do {
    pbVar3 = (&PTR_DAT_003b9580)[uVar7];
    pbVar4 = pbVar3;
    do {
      bVar2 = *pbVar4;
      pbVar4 = pbVar4 + 1;
    } while (bVar2 != 0);
    iVar5 = (int)pbVar4 - (int)(pbVar3 + 1);
    if (iVar5 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = (int)((uint)*pbVar3 * iVar5) % 0x1f;
    }
    iVar1 = uVar7 + 0x104;
    iVar5 = FUN_00294640(pbVar3,iVar5,*(int *)(DAT_00469888 + 0x60) + iVar6 * 0xc);
    uVar7 = uVar7 + 1;
    *(int *)(iVar5 + 4) = iVar1;
  } while (uVar7 < 0x10);
  return;
}
