/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AD9F380CD2722D4FE4EC1D6036C861C66656E28B8C00E352315FE4DD2CBFA0CB
 * Entry: 0x002a5760, Ghidra index: 9569, label: FUN_002a5760
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_0046985c;
void FUN_002a5760(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *in_ECX;
  
  while (param_1 != (int *)0x0) {
    piVar1 = (int *)(**(code **)(*param_1 + 0x38))(param_1);
    iVar2 = (**(code **)(*param_1 + 0x30))(param_1);
    if (iVar2 != 0) {
      FUN_002a5760(iVar2);
    }
    (**(code **)(*param_1 + 0x20))(param_1);
    if (DAT_0046985c != (code *)0x0) {
      (*DAT_0046985c)(0,param_1,0);
    }
    (**(code **)(*in_ECX + 0x50))();
    param_1 = piVar1;
  }
  return;
}
