/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 409311AB1FE13A4C754CD9F19BA8D42FA9A73C053691CF466DD9A9EC4A010512
 * Entry: 0x000b8820, Ghidra index: 2226, label: FUN_000b8820
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004a5c88;
extern uint32_t DAT_004a5c8c;
undefined4 * FUN_000b8820(void)

{
  if ((DAT_004a5c8c & 1) == 0) {
    DAT_004a5c8c = DAT_004a5c8c | 1;
    DAT_004a5c88._0_1_ = 0xa0;
    DAT_004a5c88._1_1_ = 0x20;
    DAT_004a5c88._2_1_ = 0x20;
    DAT_004a5c88._3_1_ = 0xff;
  }
  return &DAT_004a5c88;
}
