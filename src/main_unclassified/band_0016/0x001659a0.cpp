/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 62606DBCC650FEFC7CC194692B60ED95E7DEDC87BE4AFDECB539F478DB489A75
 * Entry: 0x001659a0, Ghidra index: 4704, label: FUN_001659a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001659a0(void)

{
  int *piVar1;
  int in_EAX;
  undefined4 *puVar2;
  int iVar3;
  
  puVar2 = (undefined4 *)(in_EAX + 0x1cc);
  iVar3 = 0x13;
  do {
    piVar1 = puVar2 + -6;
    puVar2 = puVar2 + -6;
    if (*piVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(*piVar1);
    }
    iVar3 = iVar3 + -1;
    *puVar2 = 0;
  } while (iVar3 != 0);
  return;
}
