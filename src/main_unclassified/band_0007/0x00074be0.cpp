/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2349EF5E26CD0CA651484548BFE108C6EEB2FAFF50E0121304E9CF784448D2FA
 * Entry: 0x00074be0, Ghidra index: 1333, label: FUN_00074be0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_0008f6a0(std::uint32_t guest_esi, std::uint32_t guest_word_0);

void FUN_00074be0(void)

{
  undefined1 *in_EAX;
  undefined1 *unaff_EDI;
  
  *unaff_EDI = *in_EAX;
  unaff_EDI[1] = in_EAX[1];
  unaff_EDI[2] = in_EAX[2];
  *(undefined4 *)(unaff_EDI + 4) = *(undefined4 *)(in_EAX + 4);
  *(undefined4 *)(unaff_EDI + 8) = *(undefined4 *)(in_EAX + 8);
  *(undefined4 *)(unaff_EDI + 0xc) = *(undefined4 *)(in_EAX + 0xc);
  if (*(int *)(unaff_EDI + 0x14) != *(int *)(in_EAX + 0x14)) {
    FUN_0008f6a0(*(int *)(in_EAX + 0x14));
  }
  return;
}
