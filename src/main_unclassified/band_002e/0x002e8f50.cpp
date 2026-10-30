/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C99224290DDE2E03411D8E82FC041D52012946EBA569EA7611D18853083864B3
 * Entry: 0x002e8f50, Ghidra index: 10548, label: FUN_002e8f50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002e8f50(ushort *param_1)

{
  int iVar2;
  int *in_ECX;
  uint32_t guest_io_word;

  /* EDI retains the output pointer.  The original argument stack DWORD is
   * separately used as a one-byte callback buffer (LEA [ESP+0x0c]).
   * Preserve its upper 24 bits when writing AL to the guest stack slot.
   * Guest-address translation and virtual callback ABI are not yet linked. */
  guest_io_word = (uint32_t)(uintptr_t)param_1;
  if (in_ECX[1] != 0) {
    *param_1 = 0;
    iVar2 = (**(code **)(*in_ECX + 0x18))(&guest_io_word);
    if ((-1 < iVar2) && ((int8_t)(uint8_t)guest_io_word < 0)) {
      *param_1 = (uint16_t)(((uint8_t)guest_io_word & UINT8_C(0x7f)) << 8);
      (**(code **)(*in_ECX + 0x18))(&guest_io_word);
    }
    *param_1 |= (uint16_t)(uint8_t)guest_io_word;
    return;
  }

  if (0x7f < *param_1) {
    uint8_t high_byte = (uint8_t)((*param_1 >> 8) | 0x80u);
    guest_io_word = (guest_io_word & UINT32_C(0xffffff00)) | high_byte;
    iVar2 = (**(code **)(*in_ECX + 0x18))(&guest_io_word);
    if (iVar2 < 0) {
      return;
    }
  }
  guest_io_word = (guest_io_word & UINT32_C(0xffffff00)) | (uint8_t)*param_1;
  (**(code **)(*in_ECX + 0x18))(&guest_io_word);
  return;
}
