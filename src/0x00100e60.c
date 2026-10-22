/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 388E1BD66CAF6967AF0939D218928705BC9A3B99B674DFB24E8EBF5D06CA632F
 * Entry: 0x00100e60, Ghidra index: 3226, label: FUN_00100e60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
char FUN_00100e60(void)

{
  char cVar1;
  int unaff_ESI;
  
  cVar1 = '\0';
  *(byte *)(unaff_ESI + 100) = *(byte *)(unaff_ESI + 100) | 0x40;
  if (*(int **)(unaff_ESI + 0x94) != (int *)0x0) {
    cVar1 = (**(code **)(**(int **)(unaff_ESI + 0x94) + 0x10))();
    if (cVar1 == '\0') {
      *(byte *)(unaff_ESI + 100) = *(byte *)(unaff_ESI + 100) & 0xbf;
    }
    else if (*(int **)(unaff_ESI + 0xac) != (int *)0x0) {
      (**(code **)(**(int **)(unaff_ESI + 0xac) + 4))();
      return cVar1;
    }
  }
  return cVar1;
}
