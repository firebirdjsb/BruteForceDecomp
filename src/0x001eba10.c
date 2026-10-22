/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CABE93D7B50579D1A0C2122169619B2308E3EDEE943CBC335691EAB8865F908F
 * Entry: 0x001eba10, Ghidra index: 6891, label: FUN_001eba10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001eba10(int *param_1)

{
  int in_ECX;
  
  (**(code **)(*param_1 + 0x24))(in_ECX + 0x18);
  (**(code **)(*param_1 + 0x48))(in_ECX + 0x1c,&stack0x00000000);
  return param_1[3];
}
