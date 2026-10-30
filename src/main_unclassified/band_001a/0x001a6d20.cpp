/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 923040CB35B330A83C7F4148D7634CD3856C85681CEBA9AEE05A008853C35D34
 * Entry: 0x001a6d20, Ghidra index: 5380, label: FUN_001a6d20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_001a6d20(void)

{
  int *in_EAX;
  int in_EDX;
  
  if ((*in_EAX != -0x400000) == 0) {
    in_EDX = 1;
  }
  if ((uint)(*in_EAX != -0x400000) + in_EDX == 0) {
    *in_EAX = -0x400000;
  }
  else if (*in_EAX == -0x400000) {
    *in_EAX = 0;
  }
  return (uint)in_EAX & (*in_EAX == -0x400000) - 1;
}
