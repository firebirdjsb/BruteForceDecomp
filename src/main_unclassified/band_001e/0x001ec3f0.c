/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 55B5581523953CF4A8175078CA174A126662D5095C5FE82674E8C45A3CE67DA3
 * Entry: 0x001ec3f0, Ghidra index: 6909, label: FUN_001ec3f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
void FUN_001ec3f0(void)

{
  char cVar1;
  int in_EAX;
  
  *(undefined1 *)(in_EAX + 0x2e2c) = 0;
  if ((((*(int *)(in_EAX + 0x1c) != 0) || (*(int *)(*(int *)(in_EAX + 0x18) + 0x4898) == 5)) ||
      (*(char *)(in_EAX + 0x2e27) != '\0')) && (cVar1 = FUN_002e5a70(), cVar1 == '\0')) {
    if (*(char *)(in_EAX + 0xa1) != '\0') {
      return;
    }
    (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x254))();
    *(undefined1 *)(in_EAX + 0xa1) = 1;
    return;
  }
  *(undefined1 *)(in_EAX + 0xa1) = 0;
  (**(code **)(**(int **)(in_EAX + 0x10) + 0x48))();
  FUN_002e86a0();
  FUN_002e73a0();
  *(undefined4 *)(in_EAX + 0x2e28) = 0xffffffff;
  FUN_001ec480();
  FUN_001ec4d0();
  return;
}
