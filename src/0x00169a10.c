/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 858B265C92988ABD2244540FE75A11A2654BB533CBC0E5F4F66B4C67D266C5E9
 * Entry: 0x00169a10, Ghidra index: 4756, label: FUN_00169a10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00169a10(void)

{
  int *in_ECX;
  
  if ((*in_ECX != 0) && (*in_ECX != 1)) {
    return 0;
  }
  return in_ECX[1];
}
