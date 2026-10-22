/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 278E261AF3D2E47EBC981CAAFFED1F872E2EF4C0820D014F1A57FC54DF0BB406
 * Entry: 0x0007c050, Ghidra index: 1474, label: FUN_0007c050
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
undefined4 FUN_0007c050(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 local_1c [7];
  
  local_1c[3] = 0;
  puVar1 = local_1c;
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  local_1c[0] = 0xf4059fd2;
  puVar1 = (undefined4 *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
  iVar2 = (**(code **)*puVar1)(local_1c);
  if (iVar2 != 0) {
    *(byte *)(iVar2 + 100) = *(byte *)(iVar2 + 100) & 0xf7;
    return 1;
  }
  return 0;
}
