/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CDF14EBC531810A9583CA051893BFB6604E5E540714A0271E18D0EA4A24D8134
 * Entry: 0x00237670, Ghidra index: 7852, label: FUN_00237670
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Xbox x86 0x00237670..0x002376A9: change page protection and
 * replace the first instruction at guest 0x002EA43D with RET (0xC3).
 * Guest address is not a native pointer; runtime mapping comes later.
 * Original calls pass length=2 and restore the previous page protection. */
void FUN_00237670(void)
{
  undefined4 previous_protection;
  undefined1 ignored_previous_protection[4];
  volatile uint8_t *guest_entry =
      (volatile uint8_t *)(uintptr_t)UINT32_C(0x002EA43D);

  XAPILIB__VirtualProtect((void *)guest_entry, 2, 4, &previous_protection);
  *guest_entry = UINT8_C(0xC3);
  XAPILIB__VirtualProtect((void *)guest_entry, 2,
                          previous_protection, ignored_previous_protection);
}
