/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 70407276342D3870A72738F25B0B215C4D7B2DD6BAC8B3097121E4DF1DA0BAAF
 * Entry: 0x000ae3f0, Ghidra index: 2085, label: FUN_000ae3f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Original 0x002EA018 free tail-jump forwards a guest32 stack
 * word; complete per-caller x86 ABI remains unverified. */
#include "bf_002ea018_heap_free_guest32.h"
void FUN_000ae3f0(float param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int unaff_ESI;
  
  if (*(undefined4 **)(unaff_ESI + 0x40) == (undefined4 *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)**(undefined4 **)(unaff_ESI + 0x40);
  }
  piVar1 = *(int **)(unaff_ESI + 0x40);
  do {
    while( true ) {
      piVar2 = piVar3;
      if (piVar2 == piVar1) {
        return;
      }
      if ((float)piVar2[0xb] < param_1 != ((float)piVar2[0xb] == param_1)) break;
      piVar2[0xb] = (int)((float)piVar2[0xb] - param_1);
      piVar2[0xc] = (int)(param_1 * *(float *)(unaff_ESI + 0x9c) + (float)piVar2[0xc]);
      piVar3 = (int *)*piVar2;
    }
    piVar3 = (int *)*piVar2;
  } while (piVar2 == *(int **)(unaff_ESI + 0x40));
  *(int **)piVar2[1] = (int *)*piVar2;
  *(int *)(*piVar2 + 4) = piVar2[1];
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(piVar2);
}
