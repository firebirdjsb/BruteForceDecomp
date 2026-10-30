/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B1C7F280890215195490F304675813DEDA939ED4A45BFE4BF9B83ABF3278C3B7
 * Entry: 0x002ddd40, Ghidra index: 10328, label: FUN_002ddd40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0038e820;
extern uint32_t PTR_FUN_003bc654;
extern uint32_t PTR_LAB_0038e414;
void FUN_002ddd40(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = PTR_LAB_0038e414;
  if (*(short *)(in_ECX + 4) != 0) {
    if (in_ECX[3] != 0) {
      (*(code *)PTR_FUN_003bc654)(in_ECX[3]);
      return;
    }
    *(undefined2 *)(in_ECX + 2) = 0;
    *(undefined2 *)(in_ECX + 4) = 0;
  }
  *(undefined2 *)((int)in_ECX + 10) = 0;
  *in_ECX = &PTR_FUN_0038e820;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
