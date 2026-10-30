/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 918F1187F09D0CEBB575A019E41F9F92CE2F2325B9BD5E0C8F668AA6BA2476C6
 * Entry: 0x000fbea0, Ghidra index: 3146, label: FUN_000fbea0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
void FUN_000fbea0(undefined4 param_1)

{
  int iVar1;
  int unaff_ESI;
  
  iVar1 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x88))(param_1);
  if ((iVar1 != 0) && (unaff_ESI != 0)) {
    FUN_000fbe60();
    if (*(undefined4 **)(iVar1 + 0x14) != (undefined4 *)0x0) {
      *(undefined4 *)(unaff_ESI + 100) = **(undefined4 **)(iVar1 + 0x14);
    }
    if (*(undefined4 **)(iVar1 + 0x18) != (undefined4 *)0x0) {
      *(undefined4 *)(unaff_ESI + 0x68) = **(undefined4 **)(iVar1 + 0x18);
    }
  }
  return;
}
