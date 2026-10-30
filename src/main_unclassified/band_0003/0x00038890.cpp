/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 08AA2B9961CD7435FD4DE9067E187CB166F8C39938C35092A29414E2D09B68E3
 * Entry: 0x00038890, Ghidra index: 376, label: FUN_00038890
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00038890(void)

{
  int unaff_ESI;
  int unaff_EDI;
  
  FUN_00039180();
  return unaff_EDI + unaff_ESI * 0x18;
}
