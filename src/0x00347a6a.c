/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AD26886866728FB36E2C2BA0BC9F0A4EDAB88B076D949B6575FBFEA9F155EDC1
 * Entry: 0x00347a6a, Ghidra index: 12871, label: FUN_00347a6a
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040f5b4;
void FUN_00347a6a(void)

{
  int iVar1;
  undefined1 local_1f0 [492];
  
  if (*(char *)(DAT_0040f5b4 + 0x8c0) == '\0') {
    iVar1 = FUN_00347918(local_1f0);
    if (iVar1 != 0) {
      FUN_00344fd9(local_1f0,0);
    }
  }
  return;
}
