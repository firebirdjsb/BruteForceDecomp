/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3172390B721208B36AB239D009CB602E7C5DACA59BBFB7852D34CF742DC34D57
 * Entry: 0x001cb8b0, Ghidra index: 5884, label: FUN_001cb8b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001cb8b0(void)

{
  int unaff_ESI;
  int unaff_EDI;
  
  FUN_001d9f10();
  return unaff_ESI * 0x400 + unaff_EDI;
}
