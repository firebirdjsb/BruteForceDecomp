/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B0F538C49CD86F8309C1857700A03CE94BA7587E34C0C2B8D24BAFB71AFBF498
 * Entry: 0x0038264a, Ghidra index: 13600, label: FUN_0038264a
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-draft declaration only; Xbox x86 guest ABI_UNVERIFIED. */
extern void FUN_003825b6(void);
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00412721;
extern uint32_t DAT_00412722;
extern uint32_t DAT_00412723;
void FUN_0038264a(int param_1,int param_2)

{
  DAT_00412723 = 9;
  if (param_1 < 0) {
    if (DAT_00412721 == '\0') {
      *(undefined1 *)(param_2 + 5) = 0;
      goto LAB_00382668;
    }
  }
  else {
LAB_00382668:
    if (DAT_00412721 == '\0') goto LAB_00382675;
  }
  DAT_00412722 = 0;
LAB_00382675:
  FUN_003825b6();
  return;
}
