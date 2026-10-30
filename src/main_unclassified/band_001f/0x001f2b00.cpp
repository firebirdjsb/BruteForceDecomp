/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 04C1F0EC26656E5F4F9FD009CB04AA1AC49F0C0B61D0FC1101981D3BBAE3B3AA
 * Entry: 0x001f2b00, Ghidra index: 7012, label: FUN_001f2b00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00396840;
void FUN_001f2b00(void)

{
  undefined4 *in_EAX;
  
  *(undefined1 *)((int)in_EAX + 5) = 0;
  *(undefined1 *)(in_EAX + 1) = 0;
  in_EAX[2] = 0;
  in_EAX[0x2f] = 0xbaad00;
  *in_EAX = PTR_FUN_00396840;
  in_EAX[0x2d] = in_EAX + 3;
  in_EAX[0x2e] = in_EAX + 0x18;
  in_EAX[0x34] = 0;
  in_EAX[0x33] = 0;
  in_EAX[0x32] = 0;
  in_EAX[0x31] = 0;
  in_EAX[0x38] = 0;
  in_EAX[0x37] = 0;
  in_EAX[0x36] = 0;
  in_EAX[0x35] = 0;
  in_EAX[0x30] = 0;
  return;
}
