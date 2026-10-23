/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E2D77B2524BE1B46259805EE28D2A8A3BAA0BD30E30296EF1D73CC6DC15608AF
 * Entry: 0x000b87e0, Ghidra index: 2225, label: FUN_000b87e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_x86_word_lanes.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004a5c98;
extern uint32_t DAT_004a5c9c;
undefined4 * FUN_000b87e0(void)

{
  if ((DAT_004a5c9c & 1) == 0) {
    DAT_004a5c9c = DAT_004a5c9c | 1;
    bf_x86_word_store_byte(&DAT_004a5c98,0U,UINT8_C(0xff));
    bf_x86_word_store_byte(&DAT_004a5c98,1U,UINT8_C(0xa0));
    bf_x86_word_store_byte(&DAT_004a5c98,2U,UINT8_C(0x6a));
    bf_x86_word_store_byte(&DAT_004a5c98,3U,UINT8_C(0xff));
  }
  return &DAT_004a5c98;
}
