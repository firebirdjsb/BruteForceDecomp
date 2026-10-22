/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 51B03FC229BC9B002C77A3EFA792E4CEC9984BCA9CC2CEA358DB0E0933B2F11B
 * Entry: 0x000a7160, Ghidra index: 1983, label: FUN_000a7160
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_000a7160(int param_1)

{
  int *in_EAX;
  undefined4 uVar1;
  int *unaff_EBX;
  int *unaff_EBP;
  int *unaff_EDI;
  
  uVar1 = 0;
  if (in_EAX != (int *)0x0) {
    (**(code **)(*in_EAX + 4))();
    (**(code **)(*in_EAX + 0xc))();
    if (unaff_EBX != (int *)0x0) {
      (**(code **)(*unaff_EBX + 8))(unaff_EBX);
    }
    (**(code **)(*unaff_EBP + 0x30))(unaff_EBP,0,&stack0xffffffe0);
    if (in_EAX != (int *)0x0) {
      (**(code **)(*in_EAX + 4))(in_EAX);
    }
    if (unaff_EDI != (int *)0x0) {
      (**(code **)(*unaff_EDI + 4))(unaff_EDI);
    }
    FUN_000a7810(&stack0xffffffe0);
    *(byte *)(param_1 + 0x114) = *(byte *)(param_1 + 0x114) | 1;
    FUN_000a7010();
    FUN_000a7010();
    uVar1 = 1;
  }
  return uVar1;
}
