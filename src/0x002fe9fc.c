/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2DF328C9A7000828832DFC1ED65C420AA14C42BB5D845B11F228DB47A98F11E5
 * Entry: 0x002fe9fc, Ghidra index: 11040, label: FUN_002fe9fc
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00414b54;
undefined4 FUN_002fe9fc(void)

{
  undefined4 *in_EAX;
  undefined4 uVar1;
  
  if (*(int *)*in_EAX != -0x1f928c9d) {
    return 0;
  }
  DAT_00414b54 = 0;
  uVar1 = FUN_002ff1ee();
  return uVar1;
}
