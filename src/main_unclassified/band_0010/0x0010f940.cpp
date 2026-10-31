/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 69D4B6B4D8592E7773A7BAE0221072AC8B1D21DFC1C9A5DDA0C5C2243861BC52
 * Entry: 0x0010f940, Ghidra index: 3539, label: FUN_0010f940
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_0008f6a0(std::uint32_t guest_esi, std::uint32_t guest_word_0);
void FUN_0010f940(void)

{
  int in_EAX;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0xe4) != in_EAX) {
    // XBE 0x0010F954: ESI=ECX+0xE0, PUSH EAX, caller ADD ESP,4; ABI_UNVERIFIED.
    FUN_0008f6a0(static_cast<std::uint32_t>(in_ECX) + UINT32_C(0xe0), static_cast<std::uint32_t>(in_EAX));
  }
  return;
}
