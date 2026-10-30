/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 176E94873B22923D1381A90649F2E488505C50DA404E3356A10B029D5252CB00
 * Entry: 0x000f8050, Ghidra index: 3113, label: FUN_000f8050
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
void FUN_000f8050(void)

{
  int *piVar1;
  int unaff_ESI;
  
  if ((unaff_ESI != 0) && (*(int *)(unaff_ESI + 0xa8) != 0)) {
    (**(code **)(**(int **)(*(int *)(unaff_ESI + 0xa8) + 0xbec) + 0x6c))();
    piVar1 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
    (**(code **)(*piVar1 + 0x14))();
  }
  return;
}
