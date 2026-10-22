/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 31297318BFEE6A04BCACA4BFE1002548C1783E89B23EE86F81CED5A3AF3A116B
 * Entry: 0x00104d80, Ghidra index: 3332, label: FUN_00104d80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469940;
uint FUN_00104d80(int param_1)

{
  int iVar1;
  uint in_EAX;
  int *unaff_ESI;
  
  if (unaff_ESI != (int *)0x0) {
    in_EAX = (**(code **)(*unaff_ESI + 4))();
    if (in_EAX == 5) {
      iVar1 = unaff_ESI[0x18];
      *(int *)(param_1 + 0x10) = iVar1;
      (**(code **)(*DAT_00469940 + 0x88))(1,iVar1);
      in_EAX = (**(code **)(*DAT_00469940 + 0x90))();
    }
  }
  return in_EAX & 0xffffff00;
}
