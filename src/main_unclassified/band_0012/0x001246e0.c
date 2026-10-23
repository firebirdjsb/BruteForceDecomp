/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7CF94AA1EF2D877CBC5C6AAB64263ACF840EEBD4CB43DDF7B12D78B4544307B9
 * Entry: 0x001246e0, Ghidra index: 3685, label: FUN_001246e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046cfd8;
void FUN_001246e0(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x780) = 0;
  *(undefined4 *)(in_ECX + 0x784) = 0;
  DAT_0046cfd8 = DAT_0046cfd8 * 0x19660d + 0x3c6ef35f;
  *(float *)(in_ECX + 0x788) =
       (((float)(DAT_0046cfd8 >> 9 | 0x3f800000) - 1.0) - 0.5) *
       *(float *)(*(int *)(in_ECX + 0xc) + 0x254) + 1.0;
  return;
}
