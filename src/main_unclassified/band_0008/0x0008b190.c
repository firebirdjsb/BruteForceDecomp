/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F3AD06EE052EE572B3A96682D166E11CA63C013B46B8B1ADD646C5DBB18A15D6
 * Entry: 0x0008b190, Ghidra index: 1674, label: FUN_0008b190
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
extern uint32_t DAT_0046d064;
int FUN_0008b190(void)

{
  int in_EAX;
  int iVar1;
  int *piVar2;
  int unaff_EDI;
  
  if (*(int *)(in_EAX + 4) != DAT_0046d064) {
    iVar1 = FUN_0008b130();
    piVar2 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x58))();
    if (*piVar2 == 0x120785ef) {
      *(int *)(in_EAX + 4) = DAT_0046d064;
    }
    if (iVar1 != 0) {
      return iVar1;
    }
  }
  iVar1 = (**(code **)(**(int **)(*(int *)(unaff_EDI + 0x38) + 0xbec) + 0x84))();
  return iVar1;
}
