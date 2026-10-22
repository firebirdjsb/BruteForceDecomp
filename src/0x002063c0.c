/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9548BA81E04B6EF53912542DC3AF87F59532E779FDC8B7DDF3127B563A9BF0E9
 * Entry: 0x002063c0, Ghidra index: 7299, label: FUN_002063c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469940;
void FUN_002063c0(int param_1,undefined4 param_2)

{
  if ((*(int *)(param_1 + 0x44) != 0) && ((*(byte *)(param_1 + 0x8d) & 8) == 0)) {
    (**(code **)(*DAT_00469940 + 0x20))(*(int *)(param_1 + 0x44),param_2);
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  if (*(int *)(param_1 + 0x48) != 0) {
    FUN_0017a130();
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  if (*(char *)(param_1 + 0x8c) != '\0') {
    FUN_00141180(param_1 + 4);
  }
  *(undefined4 *)(param_1 + 0x50) = 1;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(byte *)(param_1 + 0x8d) = *(byte *)(param_1 + 0x8d) & 0xfb;
  return;
}
