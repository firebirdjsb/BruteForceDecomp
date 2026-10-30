/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 67271BDEA03567A8C1B03AA59DDA8101D64084559AA63467868379BFE44ABD0E
 * Entry: 0x00224880, Ghidra index: 7620, label: FUN_00224880
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469940;
void FUN_00224880(void)

{
  int in_EAX;
  
  FUN_00224950();
  if (*(undefined4 **)(in_EAX + 0x34) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(in_EAX + 0x34))(1);
    *(undefined4 *)(in_EAX + 0x34) = 0;
  }
  if (*(int *)(in_EAX + 100) != 0) {
    (**(code **)(*DAT_00469940 + 0x20))(*(int *)(in_EAX + 100),1);
    *(undefined4 *)(in_EAX + 100) = 0;
  }
  if (*(int *)(in_EAX + 0x50) != 0) {
    FUN_0021c700();
    if (*(int *)(in_EAX + 0x50) != 0) {
      FUN_0008f6a0(0);
    }
  }
  return;
}
