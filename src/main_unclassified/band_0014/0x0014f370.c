/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 13DAC1CB1D49030C4F8BC25F89E6C705998FA0C55B9981AED6C9512732F3BE0B
 * Entry: 0x0014f370, Ghidra index: 4393, label: FUN_0014f370
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0014f370(void)

{
  int in_ECX;
  
  FUN_0015ed30(in_ECX + 0xa4);
  if ((*(int *)(in_ECX + 0xa8) != 0) &&
     (*(int *)(*(int *)(*(int *)(in_ECX + 0xa8) + 0xc) + 4) == 0x11)) {
    FUN_0021c1c0(in_ECX);
  }
  return;
}
