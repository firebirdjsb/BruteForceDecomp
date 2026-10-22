/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D675C80111254DDDD7C8774F4218EB292D568A16A96D8C8CBA5048AD63631D31
 * Entry: 0x001786f0, Ghidra index: 4969, label: FUN_001786f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469944;
undefined4 FUN_001786f0(void)

{
  char cVar1;
  int in_EAX;
  undefined4 uVar2;
  
  if (*(int *)(in_EAX + 0x14) != 0) {
    cVar1 = (**(code **)(*DAT_00469944 + 0x18))(*(int *)(in_EAX + 0x14));
    if (cVar1 != '\0') {
      return 1;
    }
    cVar1 = (**(code **)(*DAT_00469944 + 0x18))(0);
    if (cVar1 != '\0') {
      uVar2 = FUN_00178730();
      return uVar2;
    }
  }
  return 0;
}
