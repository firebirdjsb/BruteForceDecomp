/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 274247AE7279A335B9C05E03E2AA49A2318718526B3ACEA1E513650EC309F31C
 * Entry: 0x00173c20, Ghidra index: 4896, label: FUN_00173c20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039a228;
extern uint32_t PTR_FUN_0039a24c;
extern uint32_t PTR_FUN_0039a348;
extern uint32_t PTR_FUN_0039a6e0;
extern uint32_t PTR_LAB_0039a138;
extern uint32_t PTR_LAB_0039a14c;
extern uint32_t PTR_LAB_0039a188;
extern uint32_t PTR_LAB_0039a1a4;
extern uint32_t PTR_LAB_0039a1b8;
extern uint32_t PTR_LAB_0039a1f4;
extern uint32_t PTR_LAB_0039a210;
void FUN_00173c20(void)

{
  int in_EAX;
  undefined4 *unaff_EDI;
  
  unaff_EDI[4] = 0;
  unaff_EDI[4] = 0;
  *(byte *)(unaff_EDI + 5) = *(byte *)(unaff_EDI + 5) & 0xfb | 0xb;
  unaff_EDI[8] = 0;
  unaff_EDI[9] = 0;
  unaff_EDI[10] = 0;
  unaff_EDI[6] = &PTR_FUN_0039a348;
  unaff_EDI[0x27] = &PTR_FUN_0039a24c;
  unaff_EDI[0x28] = &PTR_FUN_0039a6e0;
  unaff_EDI[0x26] = &PTR_LAB_0039a188;
  unaff_EDI[0x27] = &PTR_LAB_0039a14c;
  unaff_EDI[0x28] = &PTR_LAB_0039a138;
  unaff_EDI[0x29] = 1;
  *unaff_EDI = &PTR_FUN_0039a228;
  unaff_EDI[6] = &PTR_LAB_0039a210;
  unaff_EDI[0x26] = &PTR_LAB_0039a1f4;
  unaff_EDI[0x27] = &PTR_LAB_0039a1b8;
  unaff_EDI[0x28] = &PTR_LAB_0039a1a4;
  unaff_EDI[2] = 0;
  unaff_EDI[1] = 2;
  if (unaff_EDI[4] != in_EAX) {
    FUN_0008f6a0();
  }
  unaff_EDI[0x19] = 0;
  return;
}
