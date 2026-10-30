/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 15EAEF56533271890270C16ABB3F3BA23B3F519FAB4FBD2F4816C9B6EC8008F7
 * Entry: 0x00272ea0, Ghidra index: 8848, label: FUN_00272ea0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003926a0;
void FUN_00272ea0(void)

{
  undefined4 in_EAX;
  undefined4 *unaff_ESI;
  
  FUN_002710e0(unaff_ESI,in_EAX);
  *unaff_ESI = &PTR_FUN_003926a0;
  unaff_ESI[0x39] = 0;
  unaff_ESI[0x40] = 0xf;
  unaff_ESI[0x3f] = 0;
  *(undefined1 *)(unaff_ESI + 0x3b) = 0;
  unaff_ESI[0x37] = 0;
  unaff_ESI[0x38] = 0;
  unaff_ESI[0x41] = 0;
  unaff_ESI[0x42] = 0;
  FUN_00273080(in_EAX);
  FUN_00272f40();
  FUN_00271330();
  FUN_00271430(unaff_ESI,unaff_ESI + 0x26,unaff_ESI + 0x15);
  return;
}
