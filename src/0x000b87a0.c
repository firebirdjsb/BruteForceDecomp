/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9178406DA84EDB7001CDF5060328346653D6B35F7BBD5BC0203A7B60C84A2D72
 * Entry: 0x000b87a0, Ghidra index: 2224, label: FUN_000b87a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004a5ca0;
extern uint32_t _DAT_004a5ca4;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_000b87a0(void)

{
  if ((_DAT_004a5ca4 & 1) == 0) {
    _DAT_004a5ca4 = _DAT_004a5ca4 | 1;
    DAT_004a5ca0._0_1_ = 0xc0;
    DAT_004a5ca0._1_1_ = 0xd7;
    DAT_004a5ca0._2_1_ = 0xff;
    DAT_004a5ca0._3_1_ = 0xff;
  }
  return &DAT_004a5ca0;
}
