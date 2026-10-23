/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A33781FA0BD2BB02C3B5E2A564C8537A605131B21FCC6BF3BA1519550CC28F7B
 * Entry: 0x00039610, Ghidra index: 403, label: FUN_00039610
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
char FUN_00039610(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int in_ECX;
  int *piVar4;
  char cVar5;
  int *piVar6;
  
  piVar1 = *(int **)(in_ECX + 8);
  piVar6 = *(int **)(param_1 + 8);
  piVar2 = *(int **)(param_1 + 0xc);
  piVar3 = *(int **)(in_ECX + 4);
  cVar5 = '\0';
  if (piVar6 != piVar2) {
    do {
      for (piVar4 = piVar3; piVar4 != piVar1; piVar4 = piVar4 + 1) {
        if (*piVar4 == *(int *)(*piVar6 + 4)) {
          if (piVar4 != piVar1) {
            *(undefined4 *)(*piVar6 + 0x2c) = 0x7f7fffff;
            cVar5 = '\x01';
          }
          break;
        }
      }
      piVar6 = piVar6 + 1;
    } while (piVar6 != piVar2);
    if (cVar5 != '\0') {
      FUN_00016030();
    }
  }
  return cVar5;
}
