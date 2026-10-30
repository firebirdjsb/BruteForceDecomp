/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 50F42538C554A1B69337A4116518AC0ED1754749DC02CC440343C00CA689BDAB
 * Entry: 0x000bfe40, Ghidra index: 2334, label: FUN_000bfe40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_0008f6a0(std::uint32_t guest_esi, std::uint32_t guest_word_0);

void FUN_000bfe40(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  float *in_EAX;
  int in_ECX;
  undefined4 *unaff_EBX;
  int unaff_EDI;
  
  fVar3 = in_EAX[2] * 0.3 + (1.0 - *in_EAX) * in_EAX[2] * 0.8;
  if (fVar3 < *(float *)(unaff_EDI + 0x28)) {
    *(float *)(unaff_EDI + 0x28) = fVar3;
    if (*(int *)(unaff_EDI + 0x10) != in_ECX) {
      FUN_0008f6a0();
    }
    uVar1 = unaff_EBX[2];
    uVar2 = unaff_EBX[1];
    *(undefined4 *)(unaff_EDI + 0x1c) = *unaff_EBX;
    *(undefined4 *)(unaff_EDI + 0x20) = uVar2;
    *(undefined4 *)(unaff_EDI + 0x24) = uVar1;
    return;
  }
  return;
}
