/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 28C68131B7B0B2A6B7855B9B00657450107A880BA45FA4638ED542C78527C211
 * Entry: 0x00299310, Ghidra index: 9372, label: FUN_00299310
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern char s_code_size_overflow_004040f0[];
void FUN_00299310(undefined1 param_1)

{
  undefined4 uVar1;
  int *unaff_ESI;
  
  uVar1 = FUN_00294b10(1,s_code_size_overflow_004040f0);
  *(undefined4 *)(*unaff_ESI + 0x10) = uVar1;
  *(undefined1 *)(*(int *)(*unaff_ESI + 0x10) + unaff_ESI[2]) = param_1;
  unaff_ESI[2] = unaff_ESI[2] + 1;
  return;
}
