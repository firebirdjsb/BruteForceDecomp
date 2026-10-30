/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3DB068A753623EEFDC7B9D41E00096B8E1C5BB9BD893BA9C8933F258AC77E740
 * Entry: 0x002b5a30, Ghidra index: 9808, label: FUN_002b5a30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003bc654;
void FUN_002b5a30(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *unaff_EDI;
  
  uVar3 = (uint)*(ushort *)((int)unaff_EDI + 10);
  while (uVar3 = uVar3 - 1, -1 < (int)uVar3) {
    (**(code **)(**(int **)(unaff_EDI[3] + uVar3 * 4) + 8))();
  }
  *(undefined4 *)(*unaff_EDI + 0x18) = 0;
  iVar1 = unaff_EDI[0xe];
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0xc);
    if ((iVar2 != *(int *)(iVar1 + 0x10)) && (iVar2 != 0)) {
      (*(code *)PTR_FUN_003bc654)(iVar2);
      return;
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(iVar1);
  }
  iVar1 = unaff_EDI[0xd];
  unaff_EDI[0xe] = 0;
  if (iVar1 == 0) {
    unaff_EDI[0xd] = 0;
    if ((int *)unaff_EDI[0xc] != (int *)0x0) {
      (**(code **)(*(int *)unaff_EDI[0xc] + 4))(1);
    }
    unaff_EDI[0xc] = 0;
    if ((int *)unaff_EDI[0xf] != (int *)0x0) {
      (**(code **)(*(int *)unaff_EDI[0xf] + 4))(1);
    }
    unaff_EDI[0xf] = 0;
    FUN_002b58e0();
    if ((short)unaff_EDI[4] != 0) {
      if (unaff_EDI[3] != 0) {
        (*(code *)PTR_FUN_003bc654)(unaff_EDI[3]);
        return;
      }
      *(undefined2 *)(unaff_EDI + 2) = 0;
      *(undefined2 *)(unaff_EDI + 4) = 0;
    }
    *(undefined2 *)((int)unaff_EDI + 10) = 0;
    return;
  }
  iVar2 = *(int *)(iVar1 + 0xc);
  if ((iVar2 != *(int *)(iVar1 + 0x10)) && (iVar2 != 0)) {
    (*(code *)PTR_FUN_003bc654)(iVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(iVar1);
}
