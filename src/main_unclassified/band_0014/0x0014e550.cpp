/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B0B79E36F9801C5B3CB607771F9DB152A9E48AEC7B06E56E8EEF9C38D20D22D8
 * Entry: 0x0014e550, Ghidra index: 4387, label: FUN_0014e550
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039aff0;
void FUN_0014e550(void)

{
  int *in_EAX;
  int iVar1;
  
  FUN_00155340();
  *in_EAX = (int)&PTR_FUN_0039aff0;
  in_EAX[0x2a] = 0;
  in_EAX[0x39] = 0;
  in_EAX[0x2c] = 0;
  in_EAX[0x34] = 0;
  in_EAX[0x33] = 0;
  in_EAX[0x32] = 0;
  in_EAX[0x30] = 0;
  in_EAX[0x2f] = 0;
  in_EAX[0x2e] = 0;
  in_EAX[0x35] = 0x3f800000;
  in_EAX[0x31] = 0x3f800000;
  in_EAX[0x2d] = 0x3f800000;
  in_EAX[0x38] = 0;
  in_EAX[0x37] = 0;
  in_EAX[0x36] = 0;
  *(undefined1 *)(in_EAX + 0x3b) = 0;
  in_EAX[0x2b] = 0;
  in_EAX[0x3a] = 0;
  in_EAX[0x1a] = 0x3f800000;
  in_EAX[0x16] = 0x3f800000;
  in_EAX[0x12] = 0x3f800000;
  in_EAX[0x19] = 0;
  in_EAX[0x18] = 0;
  in_EAX[0x17] = 0;
  in_EAX[0x15] = 0;
  in_EAX[0x14] = 0;
  in_EAX[0x13] = 0;
  in_EAX[0x1d] = 0;
  in_EAX[0x1c] = 0;
  in_EAX[0x1b] = 0;
  in_EAX[0x1e] = 0;
  in_EAX[0x22] = 0x43000000;
  in_EAX[0x21] = 0x44000000;
  in_EAX[0x28] = 0;
  *(byte *)(in_EAX + 0x25) = *(byte *)(in_EAX + 0x25) & 0xf6 | 0x76;
  iVar1 = (**(code **)(*in_EAX + 4))();
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*in_EAX + 0xc))();
    *(undefined1 *)(in_EAX + 0x3b) = 1;
  }
  else {
    *(undefined1 *)(in_EAX + 0x3b) = 0;
  }
  in_EAX[0x2b] = iVar1;
  in_EAX[0x26] = 0;
  in_EAX[0x27] = 0;
  return;
}
