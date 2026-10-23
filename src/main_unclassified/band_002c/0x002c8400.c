/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1E0F05F1011B7D14D982281154730AE63384CA2F79CAF5C250405D8347E0601F
 * Entry: 0x002c8400, Ghidra index: 10122, label: FUN_002c8400
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003bc654;
void FUN_002c8400(void)

{
  short sVar1;
  int iVar2;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x14) != 0) {
    FUN_002bd570();
  }
  sVar1 = *(short *)(in_ECX + 0x1a);
  while (sVar1 != 0) {
    iVar2 = **(int **)(in_ECX + 0x1c);
    if (iVar2 != 0) {
      FUN_002c8400();
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(iVar2);
    }
    sVar1 = *(short *)(in_ECX + 0x1a);
  }
  if (*(short *)(in_ECX + 0x2c) != 0) {
    if (*(int *)(in_ECX + 0x28) != 0) {
      (*(code *)PTR_FUN_003bc654)(*(int *)(in_ECX + 0x28));
      return;
    }
    *(undefined2 *)(in_ECX + 0x24) = 0;
    *(undefined2 *)(in_ECX + 0x2c) = 0;
  }
  *(undefined2 *)(in_ECX + 0x26) = 0;
  if (*(short *)(in_ECX + 0x20) != 0) {
    if (*(int *)(in_ECX + 0x1c) != 0) {
      (*(code *)PTR_FUN_003bc654)(*(int *)(in_ECX + 0x1c));
      return;
    }
    *(undefined2 *)(in_ECX + 0x18) = 0;
    *(undefined2 *)(in_ECX + 0x20) = 0;
  }
  *(undefined2 *)(in_ECX + 0x1a) = 0;
  return;
}
