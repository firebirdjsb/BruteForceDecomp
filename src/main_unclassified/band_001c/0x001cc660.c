/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 277AEA41FD44F4B6C53E96EBD07596F1AD5840E80B4C190A323792019F029FFA
 * Entry: 0x001cc660, Ghidra index: 5919, label: FUN_001cc660
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001cc660(void)

{
  int unaff_ESI;
  int unaff_EDI;
  
  FUN_00264190();
  return unaff_EDI + unaff_ESI * 8;
}
