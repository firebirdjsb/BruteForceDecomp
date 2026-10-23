/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FBAABE58FE1E5238E24D294C3246DE9E304D7666ADD45C1E1671E9B145EBBC97
 * Entry: 0x000395d0, Ghidra index: 402, label: FUN_000395d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
char FUN_000395d0(int param_1)

{
  int *piVar1;
  int in_EAX;
  int *piVar2;
  char cVar3;
  
  piVar2 = *(int **)(in_EAX + 8);
  piVar1 = *(int **)(in_EAX + 0xc);
  cVar3 = '\0';
  if (piVar2 != piVar1) {
    do {
      if (*(int *)(*piVar2 + 4) == param_1) {
        *(undefined4 *)(*piVar2 + 0x2c) = 0x7f7fffff;
        cVar3 = '\x01';
      }
      piVar2 = piVar2 + 1;
    } while (piVar2 != piVar1);
    if (cVar3 != '\0') {
      FUN_00016030();
    }
  }
  return cVar3;
}
