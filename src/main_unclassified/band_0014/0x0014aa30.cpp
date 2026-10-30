/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E6DD2745010E544B8C3AAC24A301CC30B332823701BCF3EABA658BEEA72C55BF
 * Entry: 0x0014aa30, Ghidra index: 4299, label: FUN_0014aa30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-matched declaration of FUN_00310440; callback ABI and behavior remain
 * ABI_UNVERIFIED. This only resolves name lookup in the C11 draft. */
extern void FUN_00310440(void);
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004a5c70;
extern uint32_t DAT_004a5c74;
extern uint32_t _DAT_004a5c70;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_0014aa30(void)

{
  if ((DAT_004a5c74 & 1) == 0) {
    DAT_004a5c74 = DAT_004a5c74 | 1;
    _DAT_004a5c70 = 0xe3307376;
    _atexit(FUN_00310440);
  }
  return &DAT_004a5c70;
}
