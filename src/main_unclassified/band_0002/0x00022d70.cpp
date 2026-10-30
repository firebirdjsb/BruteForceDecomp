/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5606167230D40804E807AC45B2931417842BEC8A31F52309C63034BEAE2D1425
 * Entry: 0x00022d70, Ghidra index: 205, label: FUN_00022d70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_0008f6a0(std::uint32_t guest_esi, std::uint32_t guest_word_0);

extern uint32_t PTR_FUN_003a4f68;
void FUN_00022d70(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *in_EAX;
  undefined4 *unaff_EDI;
  
  *unaff_EDI = &PTR_FUN_003a4f68;
  unaff_EDI[5] = 0;
  uVar1 = in_EAX[2];
  uVar2 = in_EAX[1];
  unaff_EDI[1] = *in_EAX;
  unaff_EDI[2] = uVar2;
  unaff_EDI[3] = uVar1;
  if (unaff_EDI[5] != 0) {
    FUN_0008f6a0(0);
  }
  return;
}
