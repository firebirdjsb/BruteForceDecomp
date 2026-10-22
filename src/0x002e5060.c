/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B33F592849F16BC7BCA12BDABF78067F90A447DE7DF462C6C04A16AA92315627
 * Entry: 0x002e5060, Ghidra index: 10466, label: FUN_002e5060
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_002e5060(int *param_1)

{
  int in_ECX;
  
  (**(code **)(*param_1 + 0x20))(in_ECX + 0x18);
  (**(code **)(*param_1 + 0x20))(in_ECX + 0x1c);
  return param_1[3];
}
