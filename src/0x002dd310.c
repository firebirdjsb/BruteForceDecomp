/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6585D8E46C3A8818523DC75B8C3D9E0A7B1B90621740E9E56266AF0D4DFFC820
 * Entry: 0x002dd310, Ghidra index: 10320, label: FUN_002dd310
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0038e4d8;
extern uint32_t PTR_FUN_0038e640;
extern uint32_t PTR_FUN_003bc654;
extern uint32_t PTR_LAB_0038e4c4;
extern uint32_t PTR_LAB_0038e4e0;
extern uint32_t PTR_LAB_0038e70c;
void FUN_002dd310(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 *in_ECX;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  
  uVar4 = (uint)*(ushort *)((int)in_ECX + 0x3a);
  *in_ECX = &PTR_LAB_0038e4e0;
  in_ECX[5] = &PTR_FUN_0038e4d8;
  while (uVar4 = uVar4 - 1, -1 < (int)uVar4) {
    piVar1 = *(int **)(in_ECX[0xf] + uVar4 * 4);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x10))(1);
    }
  }
  (*(code *)**(undefined4 **)in_ECX[2])();
  if (*(short *)(in_ECX + 0x10) != 0) {
    if (in_ECX[0xf] != 0) {
      (*(code *)PTR_FUN_003bc654)(in_ECX[0xf]);
      return;
    }
    *(undefined2 *)(in_ECX + 0xe) = 0;
    *(undefined2 *)(in_ECX + 0x10) = 0;
  }
  *(undefined2 *)((int)in_ECX + 0x3a) = 0;
  puVar5 = in_ECX + 0xe;
  iVar6 = 2;
  do {
    iVar2 = puVar5[-2];
    piVar1 = (int *)puVar5[-3];
    puVar5 = puVar5 + -4;
    *puVar5 = &PTR_LAB_0038e4c4;
    if (piVar1 != (int *)0x0) {
      piVar3 = (int *)piVar1[1];
      iVar6 = *piVar1;
      if (piVar3 == (int *)0x0) {
        *(int *)(iVar2 + 0x60) = iVar6;
        if (iVar6 == 0) {
          *(undefined4 *)(iVar2 + 100) = 0x501502f9;
        }
        else {
          *(undefined4 *)(iVar6 + 4) = 0;
          *(undefined4 *)(iVar2 + 100) = *(undefined4 *)(iVar6 + 8);
        }
      }
      else {
        *piVar3 = iVar6;
        if (iVar6 != 0) {
          *(int **)(iVar6 + 4) = piVar3;
        }
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(piVar1);
    }
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  in_ECX[5] = &PTR_FUN_0038e640;
  *in_ECX = &PTR_LAB_0038e70c;
  return;
}
