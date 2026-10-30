/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 76A03DF33CF9A29E305ABDD479C402F6E76941777EBDD62CA0FCE8CBF7981ABB
 * Entry: 0x00253f50, Ghidra index: 8404, label: FUN_00253f50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00253f50(int *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int *piVar2;
  uint32_t guest_received_object = 0; /* callback fills original 32-bit argument slot */
  
  piVar2 = (int *)param_1[4];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x14))(piVar2,param_3);
    cVar1 = (**(code **)(*(int *)param_1[4] + 0x1c))((int *)param_1[4],&guest_received_object);
    if (cVar1 == '\0') {
      (**(code **)(*param_1 + 0x2c))(param_1,param_3,(int *)(uintptr_t)guest_received_object);
    }
    if (guest_received_object != 0) {
      int *guest_reply = (int *)(uintptr_t)guest_received_object;
      (**(code **)(*guest_reply + 8))(guest_reply);
    }
  }
  return;
}
