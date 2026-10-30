/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 54CC32206FBD600865AC646B23393486C147869D5EE7A96EBA5BDDC78510D7C7
 * Entry: 0x000b3bc0, Ghidra index: 2168, label: FUN_000b3bc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_0008f6a0(std::uint32_t guest_esi, std::uint32_t guest_word_0);

extern uint32_t PTR_FUN_0039fe74;
void FUN_000b3bc0(void)

{
  int *piVar1;
  undefined4 *unaff_EDI;
  
  FUN_000ba5b0(unaff_EDI);
  *unaff_EDI = &PTR_FUN_0039fe74;
  unaff_EDI[0xb] = 0;
  unaff_EDI[0xd] = 0;
  piVar1 = (int *)unaff_EDI[0xb];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    unaff_EDI[0xb] = 0;
  }
  if (unaff_EDI[0xd] != 0) {
    FUN_0008f6a0(0);
  }
  unaff_EDI[0xe] = 0;
  unaff_EDI[0xf] = 0;
  unaff_EDI[0x10] = 0;
  return;
}
