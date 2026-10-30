/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 41A8F727D890782574502B6DF54721F7BA60A21343F00C42EBA9DC0559A94E51
 * Entry: 0x00254280, Ghidra index: 8409, label: FUN_00254280
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_004432fc;
undefined4 FUN_00254280(undefined4 param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int in_ECX;
  
  piVar1 = *(int **)(in_ECX + 0x1c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(in_ECX + 0x1c) = 0;
  }
  uVar2 = (**(code **)(*DAT_004432fc + 0x18))
                    (DAT_004432fc,1,param_1,(undefined4 *)(in_ECX + 0x1c),0);
  FUN_00254530();
  return uVar2;
}
