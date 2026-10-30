/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1B8E57511A2413772C57A841EBE953C7C735DCCB03E3A7BCC0A9C04F5B1BD34B
 * Entry: 0x00254330, Ghidra index: 8411, label: FUN_00254330
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_004432fc;
void FUN_00254330(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  
  piVar1 = *(int **)(in_ECX + 0x1c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(in_ECX + 0x1c) = 0;
  }
  iVar2 = (**(code **)(*DAT_004432fc + 0x18))
                    (DAT_004432fc,1,param_1,(undefined4 *)(in_ECX + 0x1c),0);
  if (-1 < iVar2) {
    FUN_00254530();
  }
  return;
}
