/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 97FA67FC5D1253AADFF741122E757390FC5428C1B501F81E754F61E98962C708
 * Entry: 0x0014d290, Ghidra index: 4356, label: FUN_0014d290
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int * FUN_0014d290(void)

{
  char cVar1;
  int *in_EAX;
  int *piVar2;
  int unaff_EDI;
  
  if ((*(int *)(unaff_EDI + 0x160) != 2) && (*(int *)(unaff_EDI + 0x160) != 3)) {
    cVar1 = (**(code **)(*in_EAX + 0x4c))();
    if (cVar1 != '\0') {
      return in_EAX;
    }
    cVar1 = (**(code **)(in_EAX[0x11] + 0x4c))();
    return (int *)(-(uint)(cVar1 != '\0') & (uint)(in_EAX + 0x11));
  }
  if (in_EAX[0x6d] != 0) {
    piVar2 = (int *)FUN_0014bee0(unaff_EDI);
    return piVar2;
  }
  return (int *)0x0;
}
