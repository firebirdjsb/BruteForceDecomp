/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 48EADD641FEA0B1B98D19E41B23818E0BF7284CD76CCDD0B0FA917D57176F178
 * Entry: 0x002a5400, Ghidra index: 9563, label: FUN_002a5400
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002a5400(undefined4 param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int *in_ECX;
  uint32_t guest_callback_flags = (uint32_t)(uintptr_t)param_2; /* original incoming guest argument word, overwritten by callback */
  
  while (param_2 != (int *)0x0) {
    piVar1 = (int *)(**(code **)(*param_2 + 0x38))(param_2);
    (**(code **)(*param_2 + 0x10))(param_2,param_1);
    (**(code **)(*param_2 + 0x24))(param_2,&guest_callback_flags);
    if ((guest_callback_flags & 1) == 0) {
      iVar2 = (**(code **)(*param_2 + 0x30))(param_2);
      param_2 = piVar1;
      if (iVar2 != 0) {
        FUN_002a5400(param_1,iVar2);
      }
    }
    else {
      (**(code **)(*in_ECX + 0x54))();
      param_2 = piVar1;
    }
  }
  return;
}
