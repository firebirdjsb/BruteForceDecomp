/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7335CE5E34150D0E58B204DD68E77E792359B1B84C11404DBC1C09E82186F8FC
 * Entry: 0x00289980, Ghidra index: 9136, label: FUN_00289980
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469888;
undefined4 FUN_00289980(void)

{
  int in_EAX;
  
  if ((in_EAX != 0) && (*(int *)(*(int *)(DAT_00469888 + 4) + -0x10 + in_EAX * 0x10) == -3)) {
    return 1;
  }
  return 0;
}
