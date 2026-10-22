/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C88B8237D75B91037C7B71FFEE4C13E345CBE80559C3AC13835E179BFD4553BC
 * Entry: 0x00103000, Ghidra index: 3284, label: FUN_00103000
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046d064;
undefined4 * FUN_00103000(void)

{
  int *piVar1;
  int in_ECX;
  int iVar2;
  
  if (((*(int *)(in_ECX + 0x7c) != 0) &&
      (*(int *)(in_ECX + 0x80) - *(int *)(in_ECX + 0x7c) >> 2 != 0)) &&
     (*(int *)(in_ECX + 0x9c) != -1)) {
    iVar2 = 0;
    for (piVar1 = *(int **)(in_ECX + 0x7c); piVar1 != *(int **)(in_ECX + 0x80); piVar1 = piVar1 + 1)
    {
      if (iVar2 == *(int *)(in_ECX + 0x9c)) {
        if (*piVar1 == 0) {
          return &DAT_0046d064;
        }
        return (undefined4 *)(*piVar1 + 0x24);
      }
      iVar2 = iVar2 + 1;
    }
  }
  return &DAT_0046d064;
}
