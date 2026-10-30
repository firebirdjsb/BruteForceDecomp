/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 620A8B3DB8AEB816B579E659B49055B0498B11CEA81725C0FF8BE1C5D841EAC5
 * Entry: 0x002f258a, Ghidra index: 10800, label: FUN_002f258a
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003a55f8;
extern uint32_t PTR_FUN_003a401c;
void FUN_002f258a(void)

{
  int unaff_EBP;
  
  FUN_002fe554();
  FUN_0001fe90("string too long");
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_0001f940(unaff_EBP + -0x28);
  *(undefined ***)(unaff_EBP + -0x50) = &PTR_FUN_003a401c;
                    /* WARNING: Subroutine does not return */
  FUN_002fe573(unaff_EBP + -0x50,&DAT_003a55f8);
}
