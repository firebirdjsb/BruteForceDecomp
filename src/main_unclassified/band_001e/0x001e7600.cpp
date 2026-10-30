/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C76D2800DD241DF141D3A6390F7EC849B39490C4A123FEC823EEDB2BC14A9F45
 * Entry: 0x001e7600, Ghidra index: 6809, label: FUN_001e7600
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001e7600(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + 0x80);
  iVar1 = 0x21;
  do {
    if (*(char *)(*piVar2 + 4) != '\x01') {
      FUN_001e7a40(piVar2[1]);
    }
    piVar2 = piVar2 + 3;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}
