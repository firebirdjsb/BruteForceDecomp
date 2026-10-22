/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 03D70B9D07B207426BF1B5DF32197169B0D1E1BFF4A54DAE6440F6CCD2E2A37E
 * Entry: 0x000ba460, Ghidra index: 2257, label: FUN_000ba460
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_000ba460(void)

{
  uint in_EAX;
  uint uVar1;
  int *piVar2;
  int *piVar3;
  int unaff_EBX;
  int unaff_ESI;
  
  uVar1 = in_EAX & 0xffffff00;
  piVar2 = (int *)0x0;
  if (*(undefined4 **)(unaff_ESI + 0x1364) != (undefined4 *)0x0) {
    piVar2 = (int *)**(undefined4 **)(unaff_ESI + 0x1364);
  }
  if (piVar2 != *(int **)(unaff_ESI + 0x1364)) {
    do {
      if (piVar2[2] == unaff_EBX) {
        piVar3 = (int *)*piVar2;
        if (piVar2 != *(int **)(unaff_ESI + 0x1364)) {
          *(int **)piVar2[1] = piVar3;
          *(int *)(*piVar2 + 4) = piVar2[1];
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00237ec0(piVar2);
        }
        uVar1 = CONCAT31((int3)(uVar1 >> 8),1);
      }
      else {
        piVar3 = (int *)*piVar2;
      }
      piVar2 = piVar3;
    } while (piVar3 != *(int **)(unaff_ESI + 0x1364));
  }
  return uVar1;
}
