/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B57E081CCD4A83910F651771F8468361DA836C026416F07DB85D85013D431C65
 * Entry: 0x00374668, Ghidra index: 13428, label: FUN_00374668
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00374668(undefined4 param_1,int param_2)

{
  uint in_EAX;
  undefined4 *in_ECX;
  uint *in_EDX;
  
  if (param_2 == 0) {
    if ((in_EAX & 0xf0000000) == 0x80000000) {
      *in_EDX = in_EAX & 0xfffffff;
      *in_ECX = 1;
    }
    else {
      *in_EDX = in_EAX;
      *in_ECX = 2;
    }
  }
  else {
    *in_EDX = in_EAX & 0xfffffff | 0x40000000;
    *in_ECX = 3;
  }
  return;
}
