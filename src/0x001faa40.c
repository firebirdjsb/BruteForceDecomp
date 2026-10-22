/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5D31D3C6187DCD74BB2D57C0E0030A86DF06D6DA1E944F1C9B32829806C90DD9
 * Entry: 0x001faa40, Ghidra index: 7093, label: FUN_001faa40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00396730;
extern uint32_t PTR_LAB_0039644c;
extern uint32_t PTR_LAB_00396458;
extern uint32_t PTR_LAB_00396470;
extern uint32_t PTR_LAB_003967a8;
extern uint32_t PTR_LAB_003967b8;
void FUN_001faa40(void)

{
  undefined4 *in_EAX;
  
  FUN_001f9950();
  *in_EAX = &PTR_FUN_00396730;
  in_EAX[2] = &PTR_LAB_00396470;
  in_EAX[3] = &PTR_LAB_003967b8;
  in_EAX[0x10] = &PTR_LAB_00396458;
  in_EAX[0x11] = &PTR_LAB_003967a8;
  in_EAX[0x1f] = &PTR_LAB_0039644c;
  in_EAX[0x49] = 0xbf800000;
  return;
}
