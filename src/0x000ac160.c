/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1D9C2BF569705BFD7C014008B6A0C545DACA22CAFB13999F1328C5CB8D20B8BC
 * Entry: 0x000ac160, Ghidra index: 2058, label: FUN_000ac160
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469948;
extern uint32_t DAT_00469b54;
void FUN_000ac160(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int unaff_EDI;
  
  if ((*(byte *)(unaff_EDI + 0x7c) & 1) != 0) {
    piVar2 = *(int **)(unaff_EDI + 0x98);
    *(byte *)(unaff_EDI + 0x7c) = *(byte *)(unaff_EDI + 0x7c) & 0xfe;
    if (piVar2 != (int *)0x0) {
      iVar3 = *piVar2;
      if ((0 < iVar3) && (iVar3 < 9)) {
        piVar1 = (int *)(DAT_00469948 + 0x10 + iVar3 * 4);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_001e7880();
        }
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(piVar2);
    }
    piVar2 = *(int **)(unaff_EDI + 0x9c);
    if (piVar2 != (int *)0x0) {
      iVar3 = *piVar2;
      if ((0 < iVar3) && (iVar3 < 9)) {
        piVar1 = (int *)(DAT_00469948 + 0x34 + iVar3 * 4);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_001e7880();
        }
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(piVar2);
    }
    FUN_000bb220(0xef4bd74d);
    piVar2 = DAT_00469b54;
    if ((*(byte *)(unaff_EDI + 0x7c) & 4) != 0) {
      *(byte *)(unaff_EDI + 0x7c) = *(byte *)(unaff_EDI + 0x7c) & 0xfb;
      (**(code **)(*piVar2 + 0xc))(0);
    }
    *(undefined4 *)(unaff_EDI + 0x74) = 0;
  }
  return;
}
