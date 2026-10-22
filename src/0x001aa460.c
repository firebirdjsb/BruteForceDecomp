/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 36E3EF9DE088E4248326A26E231DFCE02F771BE19F61B4179F7C84890C1C4FD9
 * Entry: 0x001aa460, Ghidra index: 5490, label: FUN_001aa460
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001aa460(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) == 0) {
    return 0;
  }
  return (*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4)) / 0xc;
}
