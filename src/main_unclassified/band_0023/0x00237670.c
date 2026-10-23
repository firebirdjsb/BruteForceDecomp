/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CDF14EBC531810A9583CA051893BFB6604E5E540714A0271E18D0EA4A24D8134
 * Entry: 0x00237670, Ghidra index: 7852, label: FUN_00237670
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00237670(void)

{
  undefined4 local_8;
  undefined1 local_4 [4];
  
  XAPILIB__VirtualProtect(__onexit,2,4,&local_8);
  __onexit = (code)0xc3;
  XAPILIB__VirtualProtect(__onexit,2,local_8,local_4);
  return;
}
