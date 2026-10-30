/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 881CFD10F72A8485DCD5DB2DAAEB3D48B30E951AAB426641EE9ECBAD15FD0078
 * Entry: 0x0014bcd0, Ghidra index: 4327, label: FUN_0014bcd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0014bcd0(void)

{
  int in_EAX;
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  if (*(undefined4 **)(in_EAX + 0xbc) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(in_EAX + 0xbc))(1);
    *(undefined4 *)(in_EAX + 0xbc) = 0;
  }
  piVar2 = (int *)(in_EAX + 0xc);
  iVar1 = 10;
  while( true ) {
    piVar3 = (int *)*piVar2;
    if (piVar3 != (int *)piVar2[1]) {
      do {
        if ((undefined4 *)*piVar3 != (undefined4 *)0x0) {
          (*(code *)**(undefined4 **)*piVar3)(1);
        }
        piVar3 = piVar3 + 1;
      } while (piVar3 != (int *)piVar2[1]);
    }
    if (*piVar2 != 0) break;
    *piVar2 = 0;
    piVar2[1] = 0;
    piVar2[2] = 0;
    piVar2 = piVar2 + 4;
    iVar1 = iVar1 + -1;
    if (iVar1 == 0) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(*piVar2);
}
