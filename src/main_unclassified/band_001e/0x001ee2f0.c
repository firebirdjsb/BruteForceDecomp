/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3A9D676D5EAE96D8E824606F1502E6B904AD8176CFEDA0078B6C3E52C72BB784
 * Entry: 0x001ee2f0, Ghidra index: 6956, label: FUN_001ee2f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004698d0;
extern uint32_t DAT_00469b58;
void FUN_001ee2f0(void)

{
  int iVar1;
  int in_EAX;
  int *piVar2;
  int iVar3;
  
  iVar1 = DAT_004698d0;
  iVar3 = 1;
  piVar2 = (int *)(in_EAX + 0x6f0);
  do {
    if (((char)piVar2[-0x165] != '\0') && (*piVar2 == iVar1)) {
      (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x250))(iVar3);
      *piVar2 = -1;
    }
    iVar3 = iVar3 + 1;
    piVar2 = piVar2 + 0x166;
  } while (iVar3 < 9);
  return;
}
