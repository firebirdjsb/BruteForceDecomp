/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4FCF99EFCBFE3AF70A63A8EAF27E92C67B13885F2FB154C4073F758D9B176613
 * Entry: 0x0031bba1, Ghidra index: 12311, label: FUN_0031bba1
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0032ff18;
extern uint32_t DAT_0032ff1c;
extern uint32_t DAT_0032ff20;
extern uint32_t DAT_0032ff24;
extern uint32_t PTR_FUN_00386ae4;
void FUN_0031bba1(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_ECX;
  uint uVar3;
  
  iVar1 = in_ECX[3];
  *in_ECX = &PTR_FUN_00386ae4;
  if (iVar1 != 0) {
    FUN_003158ef();
    FUN_00314937(iVar1);
    in_ECX[3] = 0;
  }
  iVar1 = in_ECX[4];
  if (iVar1 != 0) {
    FUN_0031ca44();
    FUN_00314937(iVar1);
    in_ECX[4] = 0;
  }
  uVar3 = 0;
  do {
    if (*(int *)((int)&DAT_0032ff24 + uVar3) == 0) {
      *(undefined4 *)((int)&DAT_0032ff18 + uVar3) = 0;
    }
    else {
      iVar1 = *(int *)((int)&DAT_0032ff18 + uVar3);
      if (iVar1 != 0) {
        FUN_003148b7(iVar1);
        *(int *)((int)&DAT_0032ff18 + uVar3) = 0;
      }
    }
    *(undefined4 *)((int)&DAT_0032ff1c + uVar3) = 0;
    *(undefined4 *)((int)&DAT_0032ff20 + uVar3) = 0;
    uVar3 = uVar3 + 0x10;
  } while (uVar3 < 0x100);
  piVar2 = (int *)in_ECX[1];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    in_ECX[1] = 0;
  }
  piVar2 = (int *)in_ECX[2];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    in_ECX[2] = 0;
  }
  FUN_0031c7bf();
  return;
}
