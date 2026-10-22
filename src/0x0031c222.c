/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6D6DAF01F1BFB3A71388C437C1C81C694C0F0957922BA1E397D61FA4472324E9
 * Entry: 0x0031c222, Ghidra index: 12327, label: FUN_0031c222
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0032f784;
void FUN_0031c222(uint param_1)

{
  int *in_ECX;
  
  *(short *)((&DAT_0032f784)[*in_ECX] + -0x13ffef8) =
       *(short *)(in_ECX[6] + 4 + (uint)*(byte *)((int)in_ECX + 0x25) * 8) - (short)(param_1 >> 1);
  in_ECX[0xb] = 0;
  return;
}
