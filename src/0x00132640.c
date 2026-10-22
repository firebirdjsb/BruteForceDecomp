/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1C57709AE1DD86F7BB163494C20EBBA0ED14F9F46C9B2E7D7D77CCA031EC6CD3
 * Entry: 0x00132640, Ghidra index: 3844, label: FUN_00132640
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00132640(void)

{
  int unaff_ESI;
  int unaff_EDI;
  
  FUN_001329b0();
  return unaff_EDI + unaff_ESI * 0x14;
}
