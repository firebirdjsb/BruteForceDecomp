/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BD8EE463C2F25634C8192B13AF4C7B3803A81662F9F053D5A8EB1409D13A536D
 * Entry: 0x0020d670, Ghidra index: 7378, label: FUN_0020d670
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbe_guest32_record_model.h"
void FUN_0020d670(int param_1,int param_2)

{
  int unaff_EDI;
  
  for (; param_1 != param_2; param_1 = param_1 + 0x24) {
    if (param_1 != unaff_EDI) {
      const uint32_t destination_word = *(uint32_t *)(param_1 + 4);
      const uint32_t source_word = *(uint32_t *)(unaff_EDI + 4);
      if (source_word != destination_word) {
        // ESI is the current destination. 0x0020D68E pushes the source DWORD.
        FUN_0008f6a0(static_cast<uint32_t>(param_1), source_word);
      }
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(unaff_EDI + 8);
      *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(unaff_EDI + 0xc);
      *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(unaff_EDI + 0x10);
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(unaff_EDI + 0x14);
      *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(unaff_EDI + 0x18);
      *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(unaff_EDI + 0x1c);
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(unaff_EDI + 0x20);
    }
  }
  return;
}
