/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 318364A394CB001A534C9B401176888BC18492712DB8AC76B02ED507072C706F
 * Entry: 0x001a7170, Ghidra index: 5390, label: FUN_001a7170
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004698bc;
undefined4 FUN_001a7170(undefined4 param_1,undefined4 param_2,code *param_3)

{
  undefined4 *in_EAX;
  undefined4 uVar1;
  undefined4 *in_ECX;
  
  if (((byte)DAT_004698bc & 2) == 0) {
    uVar1 = (*param_3)();
    return uVar1;
  }
  *in_ECX = *in_EAX;
  return 0;
}
