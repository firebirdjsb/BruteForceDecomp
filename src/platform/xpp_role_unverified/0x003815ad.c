/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8405406663DAB472BD4A46ABB3E06AFF2510F4ECA5FE5AAF48655A8B6AFB52F1
 * Entry: 0x003815ad, Ghidra index: 13568, label: FUN_003815ad
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_0040f664;
void FUN_003815ad(void)

{
  int iVar1;
  
  if ((undefined4 **)DAT_0040f664 != &DAT_0040f664) {
    iVar1 = *(int *)(*(int *)(DAT_0040f664[2] + 0x14) + 0x18);
    (**(code **)(iVar1 + 0x30))(iVar1,0);
  }
  return;
}
