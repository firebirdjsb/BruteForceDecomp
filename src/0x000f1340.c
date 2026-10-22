/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C0BF35CDB07F4821E2FCC4B510488325E15497EDB02D7E4986D698BC53D8EEF9
 * Entry: 0x000f1340, Ghidra index: 3007, label: FUN_000f1340
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469b58;
undefined4 FUN_000f1340(void)

{
  int iVar1;
  int iVar2;
  undefined4 uStack_4;
  
  iVar1 = (**(code **)(*DAT_00469b58 + 0x48))();
  iVar2 = (**(code **)(*(int *)DAT_00469b58[2] + 0x1c4))();
  if ((iVar1 != 0) && (iVar2 != 0)) {
    if (*(int *)(iVar2 + 0x50) == *(int *)(iVar1 + 0x54)) {
      uStack_4 = 0xe4969005;
      FUN_000ffa50(&uStack_4);
      return 1;
    }
    if (*(int *)(iVar2 + 0x50) == *(int *)(iVar1 + 0x58)) {
      uStack_4 = 0x10839388;
      FUN_000ffa50(&uStack_4);
      return 1;
    }
    uStack_4 = 0x87c40bb;
    FUN_000ffa50(&uStack_4);
  }
  return 1;
}
