/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E3DF36FF2FA260C635C0BB897438CD463EA52F7F51D1574436D594E722CCE049
 * Entry: 0x00109820, Ghidra index: 3408, label: FUN_00109820
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039e140;
void FUN_00109820(void)

{
  undefined4 *in_EAX;
  
  FUN_000ee640();
  in_EAX[0x1a] = 0;
  in_EAX[0x1b] = 0;
  in_EAX[0x1c] = 0;
  in_EAX[0x18] = 0;
  *(undefined1 *)(in_EAX + 0x1d) = 0;
  *in_EAX = &PTR_FUN_0039e140;
  FUN_000ff7b0();
  in_EAX[0x20] = in_EAX;
  (**(code **)(in_EAX[0x1e] + 0x30))();
  *(byte *)(in_EAX + 0x28) = *(byte *)(in_EAX + 0x28) | 8;
  *(undefined1 *)(in_EAX + 0x4b) = 0;
  FUN_00109a90();
  return;
}
