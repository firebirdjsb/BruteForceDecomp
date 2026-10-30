/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E040CBA46251E3F26DD956101E7EC21883027A3C42CBB286F615569FA553AE53
 * Entry: 0x002992e0, Ghidra index: 9371, label: FUN_002992e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern char s_code_size_overflow_004040f0[];
void FUN_002992e0(void)

{
  undefined4 uVar1;
  int *unaff_ESI;
  
  uVar1 = FUN_00294b10(1,s_code_size_overflow_004040f0);
  *(undefined4 *)(*unaff_ESI + 0x10) = uVar1;
  return;
}
