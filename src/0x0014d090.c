/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D5D54B91E9245837774D0F6D9C1E6C3809BDCB2A9D942C10025D29A36115584F
 * Entry: 0x0014d090, Ghidra index: 4352, label: FUN_0014d090
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0014d090(void)

{
  char cVar1;
  int *in_EAX;
  int iVar2;
  
  if (in_EAX[0x74] != 0) {
    FUN_0014d1a0();
  }
  if (in_EAX[0x73] != 0) {
    iVar2 = (in_EAX[0x73] == 1) + 1;
    if (iVar2 == 1) {
      cVar1 = (**(code **)(*in_EAX + 0x20))();
      if (cVar1 != '\0') {
        (**(code **)(*in_EAX + 0x50))(in_EAX + 0x5e);
      }
    }
    else {
      cVar1 = (**(code **)(in_EAX[0x11] + 0x20))();
      if (cVar1 != '\0') {
        (**(code **)(in_EAX[0x11] + 0x50))(in_EAX + 0x5e);
      }
    }
    cVar1 = (**(code **)(in_EAX[0x5e] + 0x20))();
    if (cVar1 != '\0') {
      in_EAX[0x74] = iVar2;
      return 1;
    }
    in_EAX[0x74] = 0;
  }
  return 0;
}
