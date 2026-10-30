/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 72FE04359C4F192F4A3E1021E8E81B38D827F72B14D55453EC619DAB019061E8
 * Entry: 0x0017c5a0, Ghidra index: 5050, label: FUN_0017c5a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0017c5a0(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) == 0) {
    return 0;
  }
  return (*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4)) / 0x18;
}
