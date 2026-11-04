/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3D5ADCA877FEBF7089DF5F4334A47F381EFD602C32384037CAB69B502C583CC7
 * Entry: 0x0008bb40, Ghidra index: 1688, label: FUN_0008bb40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_0008f6a0(std::uint32_t guest_esi, std::uint32_t guest_word_0);
extern void FUN_0008ba30(int param_1);
extern uint FUN_0008a890(int param_1);

void FUN_0008bb40(float param_1)

{
  char cVar1;
  int in_EAX;
  
  if ((*(byte *)(in_EAX + 0x6c) & 1) == 0) {
    if ((*(int *)(in_EAX + 0x68) != 0) && (*(int *)(in_EAX + 0x68) != 0)) {
      // XBE 0x0008BB8D: ESI=incoming EAX+0x64, PUSH 0, caller ADD ESP,4; ABI_UNVERIFIED.
      FUN_0008f6a0(static_cast<std::uint32_t>(in_EAX) + UINT32_C(0x64), UINT32_C(0));
    }
  }
  else {
    if (*(int *)(in_EAX + 0x68) == 0) {
LAB_0008bb72:
      FUN_0008ba30(in_EAX);
      return;
    }
    param_1 = *(float *)(in_EAX + 0x58) - param_1;
    *(float *)(in_EAX + 0x58) = param_1;
    if (param_1 < 0.0 != (param_1 == 0.0)) {
      cVar1 = FUN_0008a890(in_EAX);
      if (cVar1 == '\0') goto LAB_0008bb72;
    }
  }
  return;
}
