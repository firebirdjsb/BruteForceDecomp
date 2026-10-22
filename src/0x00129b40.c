/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0C61843A39258B14AADBF530B59C2C73A3F41D6B80FD4155480107DC7F7B1D8E
 * Entry: 0x00129b40, Ghidra index: 3754, label: FUN_00129b40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00129b40(void)

{
  int unaff_ESI;
  int unaff_EDI;
  
  FUN_0012b000();
  return unaff_EDI + unaff_ESI * 0xc;
}
