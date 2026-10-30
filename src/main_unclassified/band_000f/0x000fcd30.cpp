/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 10BAA1ADD17CF905C19A5CAA40D2F2B62BA014CDDCA9D7AB132069ADC0D165EF
 * Entry: 0x000fcd30, Ghidra index: 3156, label: FUN_000fcd30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
void FUN_000fcd30(undefined4 param_1)

{
  int in_EAX;
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x88))(param_1);
  if ((iVar1 != 0) && (in_EAX != 0)) {
    FUN_000fbe60();
    if (*(int *)(iVar1 + 0x24) != 0) {
      FUN_0010c9e0();
    }
    if (*(int *)(iVar1 + 0x2c) != 0) {
      FUN_0010cb70();
    }
    if (*(undefined4 **)(iVar1 + 0x14) != (undefined4 *)0x0) {
      *(undefined4 *)(in_EAX + 0x9c) = **(undefined4 **)(iVar1 + 0x14);
    }
    if (*(int *)(iVar1 + 0x18) != 0) {
      FUN_0010cbb0();
    }
    if (*(undefined4 **)(iVar1 + 0x1c) != (undefined4 *)0x0) {
      *(undefined4 *)(in_EAX + 0xa0) = **(undefined4 **)(iVar1 + 0x1c);
    }
  }
  return;
}
