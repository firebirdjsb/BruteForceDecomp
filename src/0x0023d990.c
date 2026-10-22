/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CF2FF28AF046339B03FDDFAFFCC64648C7069ED973AF459365D457A77A6792C5
 * Entry: 0x0023d990, Ghidra index: 7961, label: FUN_0023d990
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0023d990(void)

{
  int *piVar1;
  int in_EAX;
  int *piVar2;
  int *in_EDX;
  
  if (in_EDX != (int *)0xffffffff) {
    piVar1 = *(int **)(in_EAX + 0xc);
    piVar2 = *(int **)(in_EAX + 8);
    if (piVar2 != piVar1) {
      do {
        if ((int *)*piVar2 == in_EDX) break;
        piVar2 = piVar2 + 1;
      } while (piVar2 != piVar1);
      if ((piVar2 != piVar1) && (*in_EDX == 1)) {
        *(byte *)(in_EDX[1] + 0x1c) = *(byte *)(in_EDX[1] + 0x1c) | 1;
      }
    }
  }
  return;
}
