/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 498EEAF90ECC2F026AC18A8A36EA7C9474F4B5A9B3120F302845FBB4E0D85485
 * Entry: 0x002e4460, Ghidra index: 10438, label: FUN_002e4460
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002e4460(int param_1)

{
  int in_ECX;
  
  if (param_1 != *(int *)(in_ECX + 0x25c)) {
    *(int *)(in_ECX + 0x25c) = param_1;
    *(undefined1 *)(in_ECX + 0x248) = 1;
    return 1;
  }
  return 0;
}
