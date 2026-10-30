/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 32BB6F3F451A01A9456CA411CF713EEF255EAD10D324147A6FA5587B020EAB7D
 * Entry: 0x001098f0, Ghidra index: 3411, label: FUN_001098f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Original XBE mapped VA 0x0025b9f2; extern address-only, definition TODO. */
extern unsigned char LAB_0025b9f2;

int * FUN_001098f0(void)

{
  int in_EAX;
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  for (piVar1 = *(int **)(in_EAX + 0xec);
      (piVar3 = (int *)0x0, piVar1 != *(int **)(in_EAX + 0xf0) &&
      (piVar3 = (int *)*piVar1, (undefined1 *)piVar3[9] != &LAB_0025b9f2)); piVar1 = piVar1 + 1) {
  }
  if ((piVar3 == (int *)0x0) || (iVar2 = (**(code **)(*piVar3 + 4))(), iVar2 != 1)) {
    piVar3 = (int *)0x0;
  }
  return piVar3;
}
