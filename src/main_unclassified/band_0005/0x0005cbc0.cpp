/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AFBD07EDD6C4B7EA84BBD585E6DDFD921E742F89F8F842786A3754EDBFFD5806
 * Entry: 0x0005cbc0, Ghidra index: 958, label: FUN_0005cbc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_0008f6a0(std::uint32_t guest_esi, std::uint32_t guest_word_0);

void FUN_0005cbc0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int unaff_EBX;
  uint uVar3;
  
  uVar3 = 0;
  if (*(int *)(unaff_EBX + 4) != 0) {
    if (*(int *)(unaff_EBX + 4) == 0) goto LAB_0005cc0f;
    do {
      iVar1 = *(int *)(*(int *)(unaff_EBX + 8) + uVar3 * 4);
      if (((iVar1 != 0) && ((*(byte *)(iVar1 + 0x20) & 1) != 0)) &&
         ((*(int *)(iVar1 + 0xc) == param_1 || (*(int *)(iVar1 + 0xc) == 0)))) {
        iVar2 = param_2;
        if (param_2 == 0) {
          iVar2 = *(int *)(iVar1 + 4);
        }
        if (*(int *)(iVar1 + 0xc) != iVar2) {
          /* Original XBE: 0x0005CBF6 LEA ESI,[EDI+8]; 0x0005CC02 PUSH EAX; CALL 0x0008F6A0.
       Host-only guest32 register/stack model; original C++ ABI_UNVERIFIED. */
    FUN_0008f6a0(static_cast<std::uint32_t>(iVar1) + UINT32_C(8), static_cast<std::uint32_t>(iVar2));
        }
        *(byte *)(iVar1 + 0x20) = *(byte *)(iVar1 + 0x20) & 0xfe;
      }
LAB_0005cc0f:
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(unaff_EBX + 4));
  }
  return;
}
