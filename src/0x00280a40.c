/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 74159BBD7801A1AF233D19249254F89C9ED98A6807790AA7288069507EC18D6A
 * Entry: 0x00280a40, Ghidra index: 9033, label: FUN_00280a40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00280a40(undefined4 param_1,int *param_2)

{
  char cVar1;
  undefined4 *in_EAX;
  int *piVar2;
  
  piVar2 = (int *)*in_EAX;
  (**(code **)(*piVar2 + 0x18))(piVar2);
  cVar1 = (**(code **)(*(int *)*in_EAX + 0x1c))((int *)*in_EAX,&stack0x00000000);
  if (cVar1 == '\0') {
    FUN_00280a90(piVar2);
  }
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 8))(param_2);
  }
  return;
}
