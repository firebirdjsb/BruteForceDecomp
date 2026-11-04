/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 20429EB405E65FCFA2F813AC34B6637F522191D7CF7B1148E8D2F7E221D776F2
 * Entry: 0x00038c60, Ghidra index: 385, label: FUN_00038c60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_0008f6a0(std::uint32_t guest_esi, std::uint32_t guest_word_0);

void FUN_00038c60(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int unaff_EBX;
  int *piVar3;
  
  if (param_1 != param_2) {
    piVar3 = (int *)(param_1 + 0x14);
    do {
      if (param_1 != unaff_EBX) {
        iVar1 = *(int *)(unaff_EBX + 0xc);
        iVar2 = *(int *)(unaff_EBX + 8);
        piVar3[-4] = *(int *)(unaff_EBX + 4);
        piVar3[-3] = iVar2;
        piVar3[-2] = iVar1;
        if (*piVar3 != *(int *)(unaff_EBX + 0x14)) {
          /* XBE 0x00038C60 ESI=EDI-4 and PUSH EAX; host guest-register model only, ABI_UNVERIFIED. */
    FUN_0008f6a0(static_cast<std::uint32_t>(param_1) + UINT32_C(0x10), static_cast<std::uint32_t>(*(int *)(unaff_EBX + 0x14)));
        }
      }
      param_1 = param_1 + 0x18;
      piVar3 = piVar3 + 6;
    } while (param_1 != param_2);
  }
  return;
}
