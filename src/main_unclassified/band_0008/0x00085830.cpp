/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 677733AF24090C816274D10EFC5713A210EFDBA1D354357196F0623DB2B13826
 * Entry: 0x00085830, Ghidra index: 1567, label: FUN_00085830
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_00086a60(int param_1,int param_2);

int FUN_00085830(void)

{
  int unaff_ESI;
  int unaff_EDI;
  
  FUN_00086a60();
  return unaff_ESI * 0x3c + unaff_EDI;
}
