/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 43DC62080F0913FE4429F07C4B586F80D9448BCD00B73FDB23B8AB3122CAFCBA
 * Entry: 0x00240d60, Ghidra index: 7989, label: FUN_00240d60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00240d60(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) == 0) {
    return 0;
  }
  return (*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4)) / 0x2c;
}
