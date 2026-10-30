/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E2946DF4AF39C73E87C4DFF5F9FCE98D18F0C54365190C81B373325C4E52959A
 * Entry: 0x00048000, Ghidra index: 568, label: FUN_00048000
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00048000(void)

{
  int in_EAX;
  int *piVar1;
  int in_EDX;
  
  for (piVar1 = *(int **)(in_EAX + 0x60); (piVar1 != *(int **)(in_EAX + 100) && (*piVar1 != in_EDX))
      ; piVar1 = piVar1 + 2) {
  }
  return CONCAT31((int3)((uint)piVar1 >> 8),piVar1 != *(int **)(in_EAX + 100));
}
