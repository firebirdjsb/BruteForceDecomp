/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A4E14B66C634C9C004BECD161EA84C884550C6E54702D8A82B3AEAD0BBBAD715
 * Entry: 0x000ec6e0, Ghidra index: 2931, label: FUN_000ec6e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039e7e8;
extern uint32_t PTR_LAB_0039ed48;
extern uint32_t PTR_LAB_003a3f18;
void FUN_000ec6e0(void)

{
  undefined4 *in_EAX;
  undefined4 uVar1;
  
  FUN_00059b60();
  *in_EAX = &PTR_LAB_0039ed48;
  in_EAX[2] = &PTR_LAB_003a3f18;
  in_EAX[3] = &PTR_FUN_0039e7e8;
  uVar1 = FUN_000e0c80(in_EAX + 0xe);
  in_EAX[0xf] = uVar1;
  in_EAX[0x10] = 0;
  uVar1 = FUN_000e0c80(in_EAX + 0x11);
  in_EAX[0x12] = uVar1;
  in_EAX[0x13] = 0;
  *(undefined1 *)(in_EAX + 0x14) = 1;
  return;
}
