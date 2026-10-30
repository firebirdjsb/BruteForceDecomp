/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: ACE0C9E649D63E1E6A10A8E2181291A1513F3E2AC478F3F07C910960D7A0DC5D
 * Entry: 0x00043f00, Ghidra index: 527, label: FUN_00043f00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern undefined4 FUN_00043210(void);

void FUN_00043f00(void)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int unaff_EDI;
  
  iVar1 = *(int *)(*(int *)(unaff_EDI + 0x10) + 8);
  puVar2 = *(undefined4 **)(iVar1 + 0x80);
  if (puVar2 == (undefined4 *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)*puVar2;
  }
  if (piVar3 != *(int **)(iVar1 + 0x80)) {
    do {
      FUN_00043210();
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)*(int *)(*(int *)(*(int *)(unaff_EDI + 0x10) + 8) + 0x80));
  }
  return;
}
