/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E74B6976DE2E880446C36BED41E40BB3FEAD3DF6E3CAAC5F31AF14856DD48ED5
 * Entry: 0x00314809, Ghidra index: 12067, label: DSound_CMemoryManager_PoolAlloc
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_0032fe90;
undefined4 * DSOUND__DSound_CMemoryManager_PoolAlloc(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int unaff_retaddr;
  
  puVar1 = (undefined4 *)ExAllocatePoolWithTag(param_2,param_1);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = ExQueryPoolBlockSize(puVar1);
    *DAT_0032fe90 = *DAT_0032fe90 + uVar2;
    if (unaff_retaddr != 0) {
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
