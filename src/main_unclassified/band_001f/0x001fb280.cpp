/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 465DCC133E9A72F9D79D5D35F238D1EBBC9ED3B38A9671C5E2D81AD406EAF4E9
 * Entry: 0x001fb280, Ghidra index: 7111, label: FUN_001fb280
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_00396404;
void FUN_001fb280(void)

{
  undefined4 *in_EAX;
  
  in_EAX[3] = 0;
  in_EAX[5] = 0;
  *(undefined1 *)(in_EAX + 6) = 0;
  in_EAX[1] = 0xffffffff;
  in_EAX[2] = 1;
  in_EAX[4] = 0x7fffffff;
  *in_EAX = &PTR_LAB_00396404;
  in_EAX[7] = 0;
  in_EAX[10] = 0;
  in_EAX[9] = 0;
  in_EAX[0xb] = 0x3f800000;
  in_EAX[0xc] = 0x3f800000;
  in_EAX[0xd] = 0x3f800000;
  in_EAX[8] = 0xffffffff;
  return;
}
