/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D0A2FDE62D08047F9E94041DC4218B63B1DE1FFC103690F1E0AE74780D06C197
 * Entry: 0x000f6c60, Ghidra index: 3088, label: FUN_000f6c60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
bool FUN_000f6c60(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int unaff_ESI;
  undefined4 local_1c [7];
  
  local_1c[3] = 0;
  puVar1 = local_1c;
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  local_1c[0] = *param_1;
  local_1c[1] = FUN_000f6b70();
  local_1c[2] = *(undefined4 *)(unaff_ESI + 4);
  puVar1 = (undefined4 *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
  iVar2 = (**(code **)*puVar1)(local_1c);
  return iVar2 != 0;
}
