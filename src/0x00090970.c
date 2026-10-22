/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9AE61BF11D18DC4D1D31AE05C09E3B811E242B163448A8242B84A6E28076FE3F
 * Entry: 0x00090970, Ghidra index: 1777, label: FUN_00090970
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00443300;
extern uint32_t DAT_0046d064;
undefined1 FUN_00090970(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *in_EAX;
  int *piVar4;
  undefined1 uVar5;
  
  piVar2 = (int *)in_EAX[1];
  piVar1 = in_EAX + 1;
  uVar5 = 1;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))(piVar2);
  }
  if (*in_EAX != DAT_0046d064) {
    piVar4 = (int *)(**(code **)(*DAT_00443300 + 0x2c))();
    piVar3 = (int *)*piVar1;
    if (piVar4 == (int *)0x0) {
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 8))(piVar3);
        *piVar1 = 0;
      }
      uVar5 = 0;
    }
    else {
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 8))(piVar3);
        *piVar1 = 0;
      }
      (**(code **)(*piVar4 + 0x30))(piVar4,0,piVar1);
    }
  }
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  return uVar5;
}
