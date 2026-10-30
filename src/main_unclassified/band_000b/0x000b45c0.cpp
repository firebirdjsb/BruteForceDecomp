/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 06B6377E110919C665B3F784BA0C150F4153915E746984DC53A15D5CD4890FFA
 * Entry: 0x000b45c0, Ghidra index: 2174, label: FUN_000b45c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_000b2230(void);
extern void FUN_0008f6a0(std::uint32_t guest_esi, std::uint32_t guest_word_0);

extern uint32_t PTR_FUN_0039fe08;
extern uint32_t PTR_LAB_0039fdf4;
void FUN_000b45c0(void)

{
  undefined4 *unaff_EDI;
  
  FUN_000b2230();
  *unaff_EDI = &PTR_FUN_0039fe08;
  unaff_EDI[0xb] = &PTR_LAB_0039fdf4;
  unaff_EDI[0x1b] = 0;
  unaff_EDI[0x19] = 0;
  if (unaff_EDI[0x1b] != 0) {
    FUN_0008f6a0(0);
  }
  unaff_EDI[0x1d] = 0;
  unaff_EDI[0x1c] = 0;
  unaff_EDI[0x1e] = 0;
  unaff_EDI[0x1f] = 0;
  unaff_EDI[0x20] = 0;
  *(byte *)((int)unaff_EDI + 0x13) = *(byte *)((int)unaff_EDI + 0x13) | 1;
  *(byte *)(unaff_EDI + 0x21) = *(byte *)(unaff_EDI + 0x21) & 0xf8;
  return;
}
