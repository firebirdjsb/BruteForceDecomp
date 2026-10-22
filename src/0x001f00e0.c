/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 721EF7225B478BADA25CCCEE87933DE312B2581EB8EFB4DC95223912466CD95A
 * Entry: 0x001f00e0, Ghidra index: 6975, label: FUN_001f00e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
int FUN_001f00e0(int param_1)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar2 = 0;
  iVar3 = 0;
  piVar4 = (int *)(in_EAX + 0x160);
  do {
    if (*piVar4 != -1) {
      iVar1 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x130))(iVar3 + 1);
      if ((iVar1 != 0) && (*(int *)(iVar1 + 0x98) == param_1)) {
        iVar2 = iVar2 + 1;
      }
    }
    iVar3 = iVar3 + 1;
    piVar4 = piVar4 + 0x166;
  } while (iVar3 < 8);
  return iVar2;
}
