/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 796029F0C4D20B160C1C71A09A40AAB958B55CC54D0D9E736BFCD36F0E0C3113
 * Entry: 0x000555f0, Ghidra index: 810, label: FUN_000555f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_0008f6a0(std::uint32_t guest_esi, std::uint32_t guest_word_0);

void FUN_000555f0(void)

{
  int in_EAX;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x20) != in_EAX) {
    /* Original XBE: 0x000555F6 ADD ESI,0x1C; 0x000555FD PUSH EAX; CALL 0x0008F6A0.
       Host-only guest32 register/stack model; original C++ ABI_UNVERIFIED. */
    FUN_0008f6a0(static_cast<std::uint32_t>(in_ECX) + UINT32_C(0x1c), static_cast<std::uint32_t>(in_EAX));
  }
  return;
}
