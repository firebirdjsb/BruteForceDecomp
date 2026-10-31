/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 36AF70BCF7B3F7C5E4C35BC8AEC1FE73DB25356ABB82DD3ED6EDEB95D2762AA5
 * Entry: 0x0010fed0, Ghidra index: 3544, label: FUN_0010fed0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0010fed0(void)

{
  int in_EAX;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x1e4) != in_EAX) {
    // XBE 0x0010FEE4: ESI=ECX+0x1E0, PUSH EAX, caller ADD ESP,4; ABI_UNVERIFIED.
    FUN_0008f6a0(static_cast<std::uint32_t>(in_ECX) + UINT32_C(0x1e0), static_cast<std::uint32_t>(in_EAX));
  }
  return;
}
