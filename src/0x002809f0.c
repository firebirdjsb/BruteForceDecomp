/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A39E08F25470122A367BC197C51B3FA0ABCF88405F3C229A4B2557457DEBAB3C
 * Entry: 0x002809f0, Ghidra index: 9032, label: FUN_002809f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_002809f0(void)

{
  int *piVar1;
  char cVar2;
  int *in_EAX;
  int iStack_c;
  
  piVar1 = (int *)*in_EAX;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x14))(piVar1);
    iStack_c = 0;
    cVar2 = (**(code **)(*(int *)*in_EAX + 0x1c))((int *)*in_EAX);
    if (cVar2 == '\0') {
      FUN_00280a90(iStack_c);
    }
    if (&iStack_c != (int *)0x0) {
      (**(code **)(iStack_c + 8))(&iStack_c);
    }
  }
  return;
}
