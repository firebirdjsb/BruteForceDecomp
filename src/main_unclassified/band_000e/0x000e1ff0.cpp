/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6A4E703412865174EA133C500FFE39E0E29F36CD81DCFD400E71DF603BFC4FCE
 * Entry: 0x000e1ff0, Ghidra index: 2785, label: FUN_000e1ff0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* XBE 0x0008F6A0 reads guest ESI and one caller-pushed DWORD. ABI_UNVERIFIED. */
extern void FUN_0008f6a0(std::uint32_t guest_esi, std::uint32_t guest_word_0);
void FUN_000e1ff0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int in_EAX;
  int unaff_EDI;
  
  *(undefined4 *)(in_EAX + 4) = 0;
  if (*(int *)(unaff_EDI + 4) != 0) {
    /* XBE 0x000E1FF0 ESI=incoming EAX and PUSH EAX; host guest-register model only, ABI_UNVERIFIED. */
    FUN_0008f6a0(static_cast<std::uint32_t>(in_EAX), static_cast<std::uint32_t>(*(int *)(unaff_EDI + 4)));
  }
  *(undefined4 *)(in_EAX + 8) = *(undefined4 *)(unaff_EDI + 8);
  uVar1 = *(undefined4 *)(unaff_EDI + 0x14);
  uVar2 = *(undefined4 *)(unaff_EDI + 0x10);
  *(undefined4 *)(in_EAX + 0xc) = *(undefined4 *)(unaff_EDI + 0xc);
  *(undefined4 *)(in_EAX + 0x10) = uVar2;
  *(undefined4 *)(in_EAX + 0x14) = uVar1;
  uVar1 = *(undefined4 *)(unaff_EDI + 0x20);
  uVar2 = *(undefined4 *)(unaff_EDI + 0x1c);
  *(undefined4 *)(in_EAX + 0x18) = *(undefined4 *)(unaff_EDI + 0x18);
  *(undefined4 *)(in_EAX + 0x1c) = uVar2;
  *(undefined4 *)(in_EAX + 0x20) = uVar1;
  *(undefined4 *)(in_EAX + 0x24) = *(undefined4 *)(unaff_EDI + 0x24);
  *(undefined4 *)(in_EAX + 0x28) = *(undefined4 *)(unaff_EDI + 0x28);
  *(undefined4 *)(in_EAX + 0x2c) = *(undefined4 *)(unaff_EDI + 0x2c);
  return;
}
