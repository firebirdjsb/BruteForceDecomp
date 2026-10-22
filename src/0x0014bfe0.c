/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 60EC97F4FD48930C2B4868C0D15ABE202DAD9722AA309ABC246534C09011892B
 * Entry: 0x0014bfe0, Ghidra index: 4332, label: FUN_0014bfe0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0014bfe0(int param_1)

{
  char cVar1;
  int in_EAX;
  int *piVar2;
  int in_ECX;
  
  piVar2 = (int *)FUN_0014bee0(param_1);
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x180) < *(short *)((int)piVar2 + 0x1a) + in_EAX) {
    in_EAX = *(int *)(param_1 + 0x180) - (int)*(short *)((int)piVar2 + 0x1a);
  }
  cVar1 = (**(code **)(*piVar2 + 0x20))();
  if (cVar1 == '\0') {
    (**(code **)(*piVar2 + 0x28))(param_1);
    (**(code **)(*piVar2 + 0x24))(in_EAX);
  }
  else {
    (**(code **)(*piVar2 + 0x24))(*(short *)((int)piVar2 + 0x1a) + in_EAX);
  }
  if (*(short *)((int)piVar2 + 0x1a) == 0) {
    in_EAX = 0;
  }
  *(undefined4 *)(in_ECX + 0xa8) = 0;
  return in_EAX;
}
