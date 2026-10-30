/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C0A3FF6DBD40C2E652D6CD18FDF3785AE45B3BD529AE12B9EEA24348ACDCC054
 * Entry: 0x002bf300, Ghidra index: 9995, label: FUN_002bf300
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0038e6d4;
void FUN_002bf300(void)

{
  undefined4 *puVar1;
  int unaff_ESI;
  
  puVar1 = (undefined4 *)FUN_002bf2b0();
  *puVar1 = &PTR_FUN_0038e6d4;
  puVar1[0x1c] = 0;
  *(int *)(unaff_ESI + 0x74) = *(int *)(unaff_ESI + 0x74) + 1;
  *(int *)(unaff_ESI + 0x78) = *(int *)(unaff_ESI + 0x78) + 1;
  return;
}
