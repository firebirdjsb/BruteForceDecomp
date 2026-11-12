/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9CF249E4C4965FF6BF1B85C2AFA11194504F71EDDA622820E4BFEDEBE394216D
 * Entry: 0x00232660, Ghidra index: 7766, label: FUN_00232660
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
// Source-matched C++17 declarations for original direct calls. Xbox ABI_UNVERIFIED.
extern undefined4 FUN_00144f90(void);
extern int FUN_0014ab50(void);
extern undefined4 FUN_00126850(void);
extern void FUN_001e8c80(int param_1);
void FUN_00232660(void)

{
  int iVar1;
  int iVar2;
  int unaff_EDI;
  
  if ((*(int *)(unaff_EDI + 0x204) != 0) && (*(int *)(unaff_EDI + 0x20c) != 0)) {
    iVar2 = 0;
    if (*(int *)(unaff_EDI + 0x1b0) == 0) {
      if (*(int *)(unaff_EDI + 0x184) != 0) {
        iVar2 = FUN_00144f90();
      }
    }
    else {
      iVar1 = FUN_0014ab50();
      if (iVar1 != 0) {
        FUN_0014ab50();
        iVar2 = FUN_00126850();
      }
    }
    if (iVar2 != *(int *)(unaff_EDI + 0x20c)) {
      FUN_001e8c80(*(undefined4 *)(unaff_EDI + 0x204));
      *(undefined4 *)(unaff_EDI + 0x204) = 0;
      *(undefined4 *)(unaff_EDI + 0x20c) = 0;
    }
  }
  return;
}
