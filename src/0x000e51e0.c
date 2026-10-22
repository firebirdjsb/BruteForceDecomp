/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 82D3DB9F775CFFAA6C10B8372BEB27EB6B808FEA7CAF5B9CB3F3B289F4436917
 * Entry: 0x000e51e0, Ghidra index: 2855, label: FUN_000e51e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_000e51e0(void)

{
  char cVar1;
  int *in_EAX;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)(**(code **)(*in_EAX + 0x20))();
  if ((piVar2 == (int *)0x0) || (*(int *)(piVar2[3] + 4) != 3)) {
    iVar3 = *(int *)(in_EAX[3] + 4);
  }
  else {
    iVar3 = 3;
    in_EAX = piVar2;
  }
  if ((in_EAX != (int *)0x0) && (iVar3 == 3)) {
    cVar1 = FUN_00210880(in_EAX[0x153],0);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}
