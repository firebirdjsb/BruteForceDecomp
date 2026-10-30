/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2E518D7D2152419DB6F54F0A28DA6AAD60F6212F883B38FBDCDAB87C6EDF2D7C
 * Entry: 0x000ba140, Ghidra index: 2250, label: FUN_000ba140
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_000b26b0(void);

undefined4 FUN_000ba140(void)

{
  undefined4 *in_EAX;
  int *piVar1;
  int unaff_ESI;
  
  piVar1 = (int *)0x0;
  if (*(undefined4 **)(unaff_ESI + 0x1348) != (undefined4 *)0x0) {
    piVar1 = (int *)**(undefined4 **)(unaff_ESI + 0x1348);
  }
  while( true ) {
    if (piVar1 == *(int **)(unaff_ESI + 0x1348)) {
      return 0;
    }
    if ((undefined4 *)piVar1[2] == in_EAX) break;
    piVar1 = (int *)*piVar1;
  }
  if (piVar1 != *(int **)(unaff_ESI + 0x1348)) {
    *(int *)piVar1[1] = *piVar1;
    *(int *)(*piVar1 + 4) = piVar1[1];
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(piVar1);
  }
  FUN_000b26b0();
  if (in_EAX != (undefined4 *)0x0) {
    (**(code **)*in_EAX)(1);
  }
  return 1;
}
