/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8890E21286A4DB1970AECBB2391EF4820F894F09FEC98730E339D38540A41B18
 * Entry: 0x001e7ae0, Ghidra index: 6822, label: FUN_001e7ae0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001e7ae0(void)

{
  int in_EAX;
  
  FUN_001e8010();
  FUN_001e8010();
  FUN_001e8010();
  FUN_001e8010();
  if (*(int *)(in_EAX + 4) == 0) {
    return 0;
  }
  return *(int *)(in_EAX + 8) - *(int *)(in_EAX + 4) >> 2;
}
