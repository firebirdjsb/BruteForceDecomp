/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 41DCD1B428CBE5AF9DA6C45112D219C8228830DC3C4348C3A724CB4E9F5CC980
 * Entry: 0x000a9330, Ghidra index: 2023, label: FUN_000a9330
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_000c4f60(void);

extern uint32_t PTR_FUN_003a0338;
extern uint32_t PTR_LAB_003a0324;
void FUN_000a9330(void)

{
  undefined4 *unaff_ESI;
  
  FUN_000c4f60();
  *unaff_ESI = &PTR_FUN_003a0338;
  unaff_ESI[0xb] = &PTR_LAB_003a0324;
  unaff_ESI[0x32] = 0;
  unaff_ESI[0x34] = 0;
  *(undefined1 *)(unaff_ESI + 0x35) = 0;
  *(byte *)(unaff_ESI + 0x25) = *(byte *)(unaff_ESI + 0x25) & 0xfb;
  return;
}
