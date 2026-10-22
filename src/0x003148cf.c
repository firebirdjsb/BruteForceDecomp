/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3CD3E33851606861887A3C87EB7324E48EBAFAFFB33F1D6BCEEF697AC3A51B0A
 * Entry: 0x003148cf, Ghidra index: 12071, label: FUN_003148cf
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0032fdec;
undefined4 * FUN_003148cf(undefined4 param_1,uint param_2,int param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  if (DAT_0032fdec == 0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = (undefined4 *)FUN_0031adbb(param_2);
    if (puVar1 == (undefined4 *)0x0) goto LAB_00314911;
    if (param_3 != 0) {
      puVar3 = puVar1;
      for (uVar2 = param_2 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
      for (uVar2 = param_2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined1 *)puVar3 = 0;
        puVar3 = (undefined4 *)((int)puVar3 + 1);
      }
    }
  }
  if (puVar1 != (undefined4 *)0x0) {
    return puVar1;
  }
LAB_00314911:
  puVar1 = (undefined4 *)DSOUND__DSound_CMemoryManager_PoolAlloc(param_1,param_2 + 4,param_3);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0x6c6f6f70;
    puVar1 = puVar1 + 1;
  }
  return puVar1;
}
