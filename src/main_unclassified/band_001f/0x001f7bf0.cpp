/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3BB468A9D671561DAE7EC3BEA0536927AAEE86F0F03B10802307B905EFE1093A
 * Entry: 0x001f7bf0, Ghidra index: 7054, label: FUN_001f7bf0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbe_guest32_record_model.h"
void FUN_001f7bf0(void)

{
  int in_EAX;
  int in_ECX;
  
  if (in_ECX != 0) {
    *(undefined4 *)(in_ECX + 4) = 0;
    const uint32_t guest_word = *(uint32_t *)(in_EAX + 4);
    if (guest_word != 0) {
      // 0x001F7BF1 binds ESI to entry ECX. 0x001F7C05 pushes the loaded DWORD.
      FUN_0008f6a0(static_cast<uint32_t>(in_ECX), guest_word);
    }
  }
  return;
}
