/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 845BCAF03A6976FD1D8D5F3DEB4B157D96DC886891BC2DB623E6D0E188B5068A
 * Entry: 0x00270e70, Ghidra index: 8804, label: FUN_00270e70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-draft declaration only; original Xbox guest ABI remains ABI_UNVERIFIED. */
extern void FUN_00271540(int param_1,int param_2);
int FUN_00270e70(void)

{
  int in_ECX;
  
  FUN_00271540(in_ECX,in_ECX + 0xa4);
  return in_ECX + 0xb8;
}
