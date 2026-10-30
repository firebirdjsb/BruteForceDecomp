/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F68D7F1A4BBC4AAD1D6805AA707E62B2B3146487427538A9791059C331C66A77
 * Entry: 0x0025cf70, Ghidra index: 8561, label: FUN_0025cf70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_00393008;
void FUN_0025cf70(void)

{
  undefined4 *puVar1;
  undefined4 local_4;
  
  local_4 = 0;
  puVar1 = (undefined4 *)FUN_002ea01d(0xc);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[2] = 0;
    puVar1[1] = 1;
    puVar1[2] = 0xf23526a;
    *puVar1 = &PTR_LAB_00393008;
  }
  local_4 = 0xf23526a;
  FUN_00237ff0(&local_4);
  return;
}
