/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BA45FAE7C42BCF1B221FB4072B92F6CB38FCA67E674D4630C57F1097C0B032B9
 * Entry: 0x001ee590, Ghidra index: 6958, label: FUN_001ee590
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004698d0;
extern uint32_t DAT_00469b58;
void FUN_001ee590(void)

{
  int iVar1;
  int iVar2;
  int unaff_EBX;
  int iVar3;
  int *piVar4;
  
  iVar2 = DAT_004698d0;
  iVar3 = 1;
  piVar4 = (int *)(unaff_EBX + 0x168);
  do {
    iVar1 = *(int *)(unaff_EBX + 0x1c);
    if (((iVar1 == 5) || (iVar1 == 4)) || (iVar1 == 3)) {
      if (*piVar4 == iVar2) {
        if ((char)piVar4[-3] == '\0') {
          if (piVar4[-2] != -1) goto LAB_001ee5fb;
        }
        else {
          (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x25c))(iVar3);
        }
        goto LAB_001ee604;
      }
    }
    else if (*piVar4 != -1) {
      (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x260))(iVar3);
LAB_001ee5fb:
      FUN_001ed5d0();
LAB_001ee604:
      *piVar4 = -1;
    }
    iVar3 = iVar3 + 1;
    piVar4 = piVar4 + 0x166;
    if (8 < iVar3) {
      return;
    }
  } while( true );
}
