/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CA038E60CD360338C7D5D42DFFE84EEA0B422661B15B6AFC3DE0D520959F1A6A
 * Entry: 0x000b88a0, Ghidra index: 2228, label: FUN_000b88a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004a5c78;
extern uint32_t DAT_004a5c7c;
undefined4 * FUN_000b88a0(void)

{
  if ((DAT_004a5c7c & 1) == 0) {
    DAT_004a5c7c = DAT_004a5c7c | 1;
    DAT_004a5c78._0_1_ = 0xff;
    DAT_004a5c78._1_1_ = 0xff;
    DAT_004a5c78._2_1_ = 0xff;
    DAT_004a5c78._3_1_ = 0xff;
  }
  return &DAT_004a5c78;
}
