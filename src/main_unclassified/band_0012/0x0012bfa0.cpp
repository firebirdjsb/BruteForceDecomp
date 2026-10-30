/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EAAC352594BF8AEFAAB90A6EB88357F38E6F49E09D3CE988D5306E7265DFF218
 * Entry: 0x0012bfa0, Ghidra index: 3796, label: FUN_0012bfa0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469940;
void FUN_0012bfa0(void)

{
  int in_EAX;
  int *piVar1;
  int local_4;
  
  if (*(int *)(in_EAX + 0x790) != 0) {
    (**(code **)(*DAT_00469940 + 0x20))(*(int *)(in_EAX + 0x790),0);
    *(undefined4 *)(in_EAX + 0x790) = 0;
  }
  piVar1 = (int *)(in_EAX + 0x798);
  local_4 = 2;
  do {
    if (*piVar1 != 0) {
      *(undefined4 *)(*(int *)(*piVar1 + 0xe8) + 0xc) = 0;
      FUN_0021c700();
      if (*piVar1 != 0) {
        FUN_0008f6a0(0);
      }
    }
    piVar1 = piVar1 + 2;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  return;
}
