/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5A2E771AE6B8A320137E73017119B43AC79F74C427255323142181597DDB228B
 * Entry: 0x002b5050, Ghidra index: 9790, label: FUN_002b5050
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003bc654;
void FUN_002b5050(void)

{
  int *piVar1;
  int *unaff_EBX;
  uint uVar2;
  
  if ((undefined1 *)unaff_EBX[0x56] != &LAB_0001e240) {
    if ((short)unaff_EBX[0x52] != 0) {
      if (unaff_EBX[0x51] != 0) {
        (*(code *)PTR_FUN_003bc654)(unaff_EBX[0x51]);
        return;
      }
      *(undefined2 *)(unaff_EBX + 0x50) = 0;
      *(undefined2 *)(unaff_EBX + 0x52) = 0;
    }
    *(undefined2 *)((int)unaff_EBX + 0x142) = 0;
    if ((short)unaff_EBX[0x4f] != 0) {
      if (unaff_EBX[0x4e] != 0) {
        (*(code *)PTR_FUN_003bc654)(unaff_EBX[0x4e]);
        return;
      }
      *(undefined2 *)(unaff_EBX + 0x4d) = 0;
      *(undefined2 *)(unaff_EBX + 0x4f) = 0;
    }
    *(undefined2 *)((int)unaff_EBX + 0x136) = 0;
    if ((short)unaff_EBX[0x3c] != 0) {
      if (unaff_EBX[0x3b] != 0) {
        (*(code *)PTR_FUN_003bc654)(unaff_EBX[0x3b]);
        return;
      }
      *(undefined2 *)(unaff_EBX + 0x3a) = 0;
      *(undefined2 *)(unaff_EBX + 0x3c) = 0;
    }
    *(undefined2 *)((int)unaff_EBX + 0xea) = 0;
    if ((short)unaff_EBX[0x39] != 0) {
      if (unaff_EBX[0x38] != 0) {
        (*(code *)PTR_FUN_003bc654)(unaff_EBX[0x38]);
        return;
      }
      *(undefined2 *)(unaff_EBX + 0x37) = 0;
      *(undefined2 *)(unaff_EBX + 0x39) = 0;
    }
    *(undefined2 *)((int)unaff_EBX + 0xde) = 0;
    if ((short)unaff_EBX[0x36] != 0) {
      if (unaff_EBX[0x35] != 0) {
        (*(code *)PTR_FUN_003bc654)(unaff_EBX[0x35]);
        return;
      }
      *(undefined2 *)(unaff_EBX + 0x34) = 0;
      *(undefined2 *)(unaff_EBX + 0x36) = 0;
    }
    *(undefined2 *)((int)unaff_EBX + 0xd2) = 0;
    return;
  }
  uVar2 = (uint)*(ushort *)((int)unaff_EBX + 0xde);
  while (uVar2 = uVar2 - 1, -1 < (int)uVar2) {
    (**(code **)(**(int **)(unaff_EBX[0x38] + uVar2 * 4) + 4))();
  }
  if ((undefined4 *)unaff_EBX[0xc] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)unaff_EBX[0xc])(1);
  }
  piVar1 = (int *)unaff_EBX[3];
  unaff_EBX[0xc] = 0;
  if (piVar1 != (int *)0x0) {
    if ((undefined4 *)*piVar1 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar1)(1);
    }
    *piVar1 = 0;
    if ((int *)piVar1[2] != (int *)0x0) {
      (**(code **)(*(int *)piVar1[2] + 4))(1);
    }
    piVar1[2] = 0;
    if ((int *)piVar1[3] != (int *)0x0) {
      (**(code **)(*(int *)piVar1[3] + 4))(1);
    }
    piVar1[3] = 0;
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(piVar1);
  }
  unaff_EBX[3] = 0;
  if ((int *)*unaff_EBX != (int *)0x0) {
    (**(code **)(*(int *)*unaff_EBX + 0x18))(1);
  }
  *unaff_EBX = 0;
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(unaff_EBX[0x26]);
}
