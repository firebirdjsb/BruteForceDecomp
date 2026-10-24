/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 47D2D5603BD398D50820F11581264DB1933B3B241006EE96DA0D1854EEBD5FC1
 * Entry: 0x0030f830, Ghidra index: 11505, label: FUN_0030f830
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
/* Original 0x0030F830: C7 05 B8 13 40 00 A0 E3 39 00; RET.
 * Guest virtual address 0x004013B8 receives guest32 word 0x0039E3A0.
 * A native guest-data mapping/relocation is still required. */
extern uint32_t DAT_004013b8;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0030f830(void)

{
  DAT_004013b8 = UINT32_C(0x0039e3a0);
  return;
}
