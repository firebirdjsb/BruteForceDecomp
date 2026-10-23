/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C53344112292DAC06C39896727CC04F515DB50D567C6D03B266D81C55317AF7C
 * Entry: 0x002e4520, Ghidra index: 10445, label: FUN_002e4520
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002e4520(int param_1)

{
  int in_ECX;
  
  if (param_1 != *(int *)(in_ECX + 0x264)) {
    *(int *)(in_ECX + 0x264) = param_1;
    *(undefined1 *)(in_ECX + 0x248) = 1;
    return 1;
  }
  return 0;
}
