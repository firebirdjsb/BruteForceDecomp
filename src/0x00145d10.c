/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 947F4F37A554A02B53732C2EECDBD3F4B87A4C58F179527944E8ABA95D636E3E
 * Entry: 0x00145d10, Ghidra index: 4200, label: FUN_00145d10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00145d10(void)

{
  int in_EAX;
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(in_EAX + 0x3c);
  iVar2 = 8;
  do {
    if (*piVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(*piVar1);
    }
    piVar1 = piVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}
