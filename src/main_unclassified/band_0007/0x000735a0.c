/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 97B074F3931DAD161BE043F7EFF2B50678E7AF649DB71D09EF3BD0B25905AD24
 * Entry: 0x000735a0, Ghidra index: 1300, label: FUN_000735a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_000735a0(void)

{
  int *in_EAX;
  int unaff_ESI;
  int unaff_EDI;
  
  if (unaff_EDI != 0) {
    in_EAX = (int *)0x0;
    if (*(undefined4 **)(unaff_ESI + 0xc) != (undefined4 *)0x0) {
      in_EAX = (int *)**(undefined4 **)(unaff_ESI + 0xc);
    }
    for (; in_EAX != *(int **)(unaff_ESI + 0xc); in_EAX = (int *)*in_EAX) {
      if ((in_EAX[2] != 0) && (in_EAX[2] == unaff_EDI)) {
        if (in_EAX == *(int **)(unaff_ESI + 0xc)) {
          return CONCAT31((int3)((uint)in_EAX >> 8),1);
        }
        *(int *)in_EAX[1] = *in_EAX;
        *(int *)(*in_EAX + 4) = in_EAX[1];
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(in_EAX);
      }
    }
  }
  return (uint)in_EAX & 0xffffff00;
}
