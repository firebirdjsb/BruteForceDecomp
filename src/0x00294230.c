/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3A2B9D3F2392EE7DE154A36151777E3152EE65F3E5B2C4F0A29681AF353CFB18
 * Entry: 0x00294230, Ghidra index: 9283, label: FUN_00294230
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469888;
void FUN_00294230(void)

{
  undefined4 *puVar1;
  
  for (puVar1 = *(undefined4 **)(DAT_00469888 + 0x58); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)*puVar1) {
    if ((puVar1[4] != -6) && (FUN_00294270(puVar1 + 4), puVar1[1] == 0)) {
      puVar1[1] = 1;
    }
  }
  return;
}
