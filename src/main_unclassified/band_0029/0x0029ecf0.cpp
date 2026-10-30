/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A81E955DE3092C6226E84251C8D13C6B084F2ACED1FF39ECA06AFAE3CD741781
 * Entry: 0x0029ecf0, Ghidra index: 9480, label: FUN_0029ecf0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003b9350;
extern uint32_t PTR_FUN_00391008;
void FUN_0029ecf0(void)

{
  int iVar1;
  undefined4 *unaff_EBX;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  
  piVar2 = unaff_EBX + 3;
  *unaff_EBX = &PTR_FUN_00391008;
  unaff_EBX[1] = 0x435;
  piVar3 = piVar2;
  for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar3 = 0;
    piVar3 = piVar3 + 1;
  }
  puVar4 = &DAT_003b9350;
  do {
    piVar3 = (int *)*piVar2;
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))(piVar3);
      *piVar2 = 0;
    }
    FUN_00062710(*puVar4,piVar2);
    puVar4 = puVar4 + 1;
    piVar2 = piVar2 + 1;
  } while ((int)puVar4 < 0x3b9374);
  FUN_0029eda0(unaff_EBX);
  return;
}
