/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E45B1A31C80BED82B2AF29665CBD54E41A82F56712C3692D17DB567744EC52C3
 * Entry: 0x0035a5e0, Ghidra index: 13176, label: FUN_0035a5e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004b50cc;
extern uint32_t DAT_004b50d0;
extern uint32_t DAT_004b50ec;
void FUN_0035a5e0(int param_1)

{
  if (*(int *)(param_1 + 0x78) != 0) {
    DSOUND__IDirectSoundBuffer_Stop(*(int *)(param_1 + 0x78));
    *(undefined4 *)(param_1 + 0xa0) = 1;
    DSOUND__IDirectSoundBuffer_Release(*(undefined4 *)(param_1 + 0x78));
    *(undefined4 *)(param_1 + 0x78) = 0;
    FUN_002f8e70(*(undefined4 *)(param_1 + 0x7c));
    DAT_004b50ec = DAT_004b50ec + -1;
    if ((((DAT_004b50ec == 0) && (DAT_004b50d0 != 0)) && (DAT_004b50cc != 0)) &&
       (DAT_004b50cc != -1)) {
      DSOUND__IDirectSound_Release(DAT_004b50cc);
      DAT_004b50cc = -1;
    }
  }
  return;
}
