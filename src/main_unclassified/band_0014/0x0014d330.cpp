/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0B93660A3F7BE269338C7E73618F4032331A5D291FEFD3B31AEC03C4F788353B
 * Entry: 0x0014d330, Ghidra index: 4359, label: FUN_0014d330
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0014d330(void)

{
  int iVar1;
  char cVar2;
  int *in_EAX;
  
  if (in_EAX[0x73] == 1) {
    cVar2 = (**(code **)(in_EAX[0x51] + 0x20))();
    if (((cVar2 != '\0') && (iVar1 = in_EAX[0x59], iVar1 != 0)) &&
       (*(int *)(*(int *)(iVar1 + 0xc) + 4) == 0x14)) {
      return iVar1;
    }
  }
  else if (in_EAX[0x74] == 1) {
    cVar2 = (**(code **)(in_EAX[0x5e] + 0x20))();
    if (cVar2 != '\0') {
      return in_EAX[0x66];
    }
  }
  else {
    cVar2 = (**(code **)(*in_EAX + 0x20))();
    if (cVar2 != '\0') {
      return in_EAX[8];
    }
  }
  return 0;
}
