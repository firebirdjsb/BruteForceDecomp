/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4F4797A4D6E90673D620BC0A655BD5A591C28E2DC58178B9D27FD71A8233E2EB
 * Entry: 0x00258d60, Ghidra index: 8487, label: FUN_00258d60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00258d60(void)

{
  int *piVar1;
  char cVar2;
  int *in_EAX;
  int *piVar3;
  undefined4 *in_ECX;
  int *piVar4;
  
  FUN_00258ad0();
  if ((int *)in_ECX[2] == (int *)0x0) {
    in_ECX[2] = in_EAX;
    in_EAX[1] = 0;
    *in_EAX = 0;
  }
  else {
    piVar1 = (int *)in_ECX[2];
    piVar4 = (int *)0x0;
    while (((piVar3 = piVar1, (int *)*in_ECX <= piVar3 && (piVar3 < (int *)in_ECX[1])) &&
           (piVar3 < in_EAX))) {
      piVar4 = piVar3;
      piVar1 = (int *)piVar3[1];
    }
    if ((piVar3 < (int *)*in_ECX) || ((int *)in_ECX[1] <= piVar3)) {
      piVar4[1] = (int)in_EAX;
      *in_EAX = (int)piVar4;
      in_EAX[1] = 0;
      FUN_00258c80();
      return;
    }
    *in_EAX = *piVar3;
    in_EAX[1] = (int)piVar3;
    *piVar3 = (int)in_EAX;
    if (*in_EAX == 0) {
      in_ECX[2] = in_EAX;
      FUN_00258cf0(in_EAX);
      return;
    }
    *(int **)(*in_EAX + 4) = in_EAX;
    cVar2 = FUN_00258c80();
    if (cVar2 == '\0') {
      FUN_00258cf0(in_EAX);
      return;
    }
  }
  return;
}
