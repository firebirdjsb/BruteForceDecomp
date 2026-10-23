/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BF57DD44455B757324B603C295B630A63CB0A1D88D56AC6629FD6496EB669670
 * Entry: 0x00210910, Ghidra index: 7429, label: FUN_00210910
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_00210910(void)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int in_EAX;
  uint uVar4;
  
  piVar1 = *(int **)(in_EAX + 8);
  piVar2 = (int *)*piVar1;
  uVar4 = 0;
  while (piVar2 != piVar1) {
    if (((int *)piVar2[4] != (int *)0x0) &&
       (cVar3 = (**(code **)(*(int *)piVar2[4] + 0x20))(0), cVar3 != '\0')) {
      uVar4 = uVar4 | piVar2[3];
    }
    FUN_0012aba0();
  }
  return uVar4;
}
