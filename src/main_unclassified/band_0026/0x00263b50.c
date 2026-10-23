/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D90D94B0AF1FFE7753F3C535FCB27A21E5A46ABE449A8C6A48568CAF1ECCC61F
 * Entry: 0x00263b50, Ghidra index: 8690, label: FUN_00263b50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00263b50(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int unaff_EDI;
  
  if (0xf < *(uint *)(unaff_EDI + 0x7c)) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(unaff_EDI + 0x68));
  }
  *(undefined4 *)(unaff_EDI + 0x7c) = 0xf;
  *(undefined4 *)(unaff_EDI + 0x78) = 0;
  *(undefined1 *)(unaff_EDI + 0x68) = 0;
  iVar2 = 2;
  puVar3 = (undefined4 *)(unaff_EDI + 0x7c);
  do {
    if (0xf < (uint)puVar3[-7]) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(puVar3[-0xc]);
    }
    iVar2 = iVar2 + -1;
    puVar3[-7] = 0xf;
    puVar3[-8] = 0;
    *(undefined1 *)(puVar3 + -0xc) = 0;
    puVar3 = puVar3 + -7;
  } while (iVar2 != 0);
  if (*(int *)(unaff_EDI + 0x20) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(unaff_EDI + 0x20));
  }
  *(undefined4 *)(unaff_EDI + 0x20) = 0;
  *(undefined4 *)(unaff_EDI + 0x24) = 0;
  *(undefined4 *)(unaff_EDI + 0x28) = 0;
  FUN_00263e30();
  piVar1 = *(int **)(unaff_EDI + 4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(unaff_EDI + 4) = 0;
  }
  return;
}
