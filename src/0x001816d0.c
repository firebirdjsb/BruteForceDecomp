/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C403C1E48586F06F8256FA4AECB6632FC4280F3A2E721752D8315D0D9A68C3FC
 * Entry: 0x001816d0, Ghidra index: 5160, label: FUN_001816d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001816d0(undefined4 param_1)

{
  char cVar1;
  int *in_EAX;
  float10 fVar2;
  
  (**(code **)(*in_EAX + 0x48))();
  if ((*(byte *)(in_EAX + 7) & 2) != 0) {
    FUN_00181680();
  }
  if (((*(byte *)(in_EAX + 7) & 2) != 0) || (in_EAX[0xb] != 3)) {
    cVar1 = FUN_00182930();
    if (cVar1 != '\0') {
      fVar2 = (float10)FUN_00182990();
      FUN_00181630(in_EAX[0xc],(float)fVar2);
    }
  }
  (**(code **)(*in_EAX + 0x34))(param_1);
  return;
}
