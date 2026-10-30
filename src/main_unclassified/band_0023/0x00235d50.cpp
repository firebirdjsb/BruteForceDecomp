/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C5D5D55FD5481DCAA669580C974BA009E99380AC5270F3FD007C58D894D8B042
 * Entry: 0x00235d50, Ghidra index: 7824, label: FUN_00235d50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046d064;
int FUN_00235d50(int *param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int *piVar3;
  int iVar4;
  
  piVar3 = *(int **)(in_ECX + 0xc);
  iVar2 = 0;
  if (piVar3 == (int *)0x0) {
    piVar3 = &DAT_0046d064;
  }
  if (*piVar3 != *param_1) {
    iVar4 = *(int *)(in_ECX + 0x4c);
    iVar1 = *(int *)(in_ECX + 0x50);
    while ((iVar4 != iVar1 && (iVar2 = FUN_00235d50(param_1), iVar2 == 0))) {
      iVar4 = iVar4 + 4;
    }
    return iVar2;
  }
  return in_ECX;
}
