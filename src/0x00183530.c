/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6A79730AC8DFA4DF3AFC3C588E39AF990C5D7F1D4604C42F155C6EA25B47F68D
 * Entry: 0x00183530, Ghidra index: 5198, label: FUN_00183530
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00183530(void)

{
  int in_EAX;
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_002383b0();
  piVar2 = *(int **)(in_EAX + 0xb4);
  while( true ) {
    if (piVar2 == *(int **)(in_EAX + 0xb8)) {
      return 0;
    }
    if (*piVar2 == iVar1) break;
    piVar2 = piVar2 + 2;
  }
  return piVar2[1];
}
