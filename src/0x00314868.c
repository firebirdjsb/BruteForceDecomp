/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4B79E420FEED7B1EA7B0632B247AD3B849ED6BA7E529C4E29524C9C08E06C63C
 * Entry: 0x00314868, Ghidra index: 12069, label: FUN_00314868
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_0032fe8c;
undefined4 * FUN_00314868(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  puVar1 = (undefined4 *)MmAllocateContiguousMemoryEx(param_1,0,0xffffffff,param_2);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = MmQueryAllocationSize(puVar1);
    *DAT_0032fe8c = *DAT_0032fe8c + uVar2;
    if (param_3 != 0) {
      puVar4 = puVar1;
      for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
      for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined1 *)puVar4 = 0;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
      }
    }
  }
  return puVar1;
}
