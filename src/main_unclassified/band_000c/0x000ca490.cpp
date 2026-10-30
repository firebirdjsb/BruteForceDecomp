/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4DC24A1AFD6FB4FA7D4446888CD5663B205982827D099DBA9EFD68E5AD61158D
 * Entry: 0x000ca490, Ghidra index: 2507, label: FUN_000ca490
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_000b2230(void);

extern uint32_t PTR_FUN_0039f15c;
extern uint32_t PTR_LAB_0039fff0;
void FUN_000ca490(void)

{
  undefined4 *in_EAX;
  
  FUN_000b2230();
  *in_EAX = &PTR_FUN_0039f15c;
  in_EAX[0xb] = &PTR_LAB_0039fff0;
  in_EAX[0x19] = 0;
  in_EAX[0x1a] = 0;
  in_EAX[0x1b] = 0;
  in_EAX[0x1f] = 0;
  in_EAX[0x1e] = 0;
  in_EAX[0x21] = 0;
  in_EAX[0x20] = 0;
  *(byte *)(in_EAX + 0x22) = *(byte *)(in_EAX + 0x22) & 0xfd;
  in_EAX[0x23] = 0xbf800000;
  return;
}
