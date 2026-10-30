/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5B543864F8EFB58FAB0704D53ACDACEC82AE142E63E2DF720AB288EE18876368
 * Entry: 0x002c82c0, Ghidra index: 10120, label: FUN_002c82c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003bc654;
extern uint32_t PTR_LAB_0038e620;
void FUN_002c82c0(void)

{
  int iVar1;
  int iVar2;
  undefined4 *in_ECX;
  uint uVar3;
  
  *in_ECX = &PTR_LAB_0038e620;
  if (in_ECX[3] != 0) {
    FUN_002d5de0();
    in_ECX[3] = 0;
  }
  iVar1 = in_ECX[9];
  iVar2 = *(int *)(iVar1 + 0x14);
  uVar3 = (uint)*(ushort *)(iVar2 + 0x142);
  while (uVar3 = uVar3 - 1, -1 < (int)uVar3) {
    (**(code **)(**(int **)(*(int *)(iVar2 + 0x144) + uVar3 * 4) + 8))(iVar1);
  }
  FUN_002c91e0(*(undefined4 *)(*(int *)(in_ECX[9] + 0x14) + 0x14));
  if (*(short *)(in_ECX + 0xc) != 0) {
    if (in_ECX[0xb] != 0) {
      (*(code *)PTR_FUN_003bc654)(in_ECX[0xb]);
      return;
    }
    *(undefined2 *)(in_ECX + 10) = 0;
    *(undefined2 *)(in_ECX + 0xc) = 0;
  }
  *(undefined2 *)((int)in_ECX + 0x2a) = 0;
  return;
}
