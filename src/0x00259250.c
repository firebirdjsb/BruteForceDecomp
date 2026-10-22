/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DAD107C66B0997136EA08EC336E64253F3365618D9C87B421EF03E41164EF1C0
 * Entry: 0x00259250, Ghidra index: 8495, label: FUN_00259250
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046d064;
int * FUN_00259250(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int unaff_retaddr;
  
  iVar1 = param_2;
  iVar2 = 0;
  if (-1 < param_2) {
    (**(code **)(*param_1 + 0x18))(param_1,&param_2);
    iVar2 = (unaff_retaddr - iVar1) + -1;
    if (iVar2 < 0) {
      return &DAT_0046d064;
    }
  }
  if (0 < iVar2) {
    do {
      iVar2 = iVar2 + -1;
      param_1 = (int *)param_1[3];
    } while (iVar2 != 0);
  }
  return param_1 + 1;
}
