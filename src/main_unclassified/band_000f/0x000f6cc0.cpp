/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 64D6F0CAD8E7ABA2C55144237E06BD990F317A9EE45F52FA0E10F4E2887B1DEE
 * Entry: 0x000f6cc0, Ghidra index: 3089, label: FUN_000f6cc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
bool FUN_000f6cc0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int unaff_ESI;
  undefined4 local_1c [4];
  undefined4 local_c;
  
  local_1c[0] = 0;
  puVar1 = local_1c;
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  local_1c[3] = *param_1;
  local_c = 0;
  local_1c[1] = FUN_000f6b70();
  local_1c[2] = *(undefined4 *)(unaff_ESI + 4);
  puVar1 = (undefined4 *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
  iVar2 = (**(code **)*puVar1)(local_1c);
  return iVar2 != 0;
}
