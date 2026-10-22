/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 44D64199C75D2FCA439B92B6FD1F15E03FAE8444BF2A767B5774061FDB84D076
 * Entry: 0x000a2870, Ghidra index: 1929, label: FUN_000a2870
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00443300;
void FUN_000a2870(void)

{
  undefined4 *puVar1;
  undefined4 local_4;
  
  puVar1 = &local_4;
  local_4 = 0;
  (**(code **)(*DAT_00443300 + 0x38))(&local_4);
  D3D8LTCG__D3DDevice_SetPalette_4(puVar1);
  D3D8LTCG__D3DDevice_SetPalette_4(puVar1);
  D3D8LTCG__D3DDevice_SetPalette_4(puVar1);
  D3D8LTCG__D3DDevice_SetPalette_4(puVar1);
  return;
}
