/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C1A00CB28042D522C145613180106E0AF6E0E20423B4A344D5A8F088F80F1645
 * Entry: 0x00146900, Ghidra index: 4227, label: FUN_00146900
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t _DAT_0040c8fc;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00146900(void)

{
  int in_ECX;
  
  if (*(float *)(in_ECX + 0x48) == 0.0) {
    *(float *)(in_ECX + 0x48) =
         _DAT_0040c8fc * *(float *)(in_ECX + 0xb0) + *(float *)(in_ECX + 0xb4);
  }
  return;
}
