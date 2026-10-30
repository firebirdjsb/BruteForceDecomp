/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 90EACA14A2FBE058F390EFAE9BE58C552ECDE45874CB49261C46D2E504097FC8
 * Entry: 0x000f1fb0, Ghidra index: 3014, label: FUN_000f1fb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469b54;
undefined4 FUN_000f1fb0(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uStack_4;
  
  iVar2 = (**(code **)(*DAT_00469b54 + 0x48))();
  iVar1 = *(int *)(iVar2 + 0xe4);
  for (iVar2 = *(int *)(iVar2 + 0xe0); iVar2 != iVar1; iVar2 = iVar2 + 0x3c) {
    uStack_4 = *(undefined4 *)(iVar2 + 0x20);
    puVar3 = &uStack_4;
    FUN_001e97c0(puVar3);
    FUN_0010c660(puVar3);
  }
  return 1;
}
