/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9E6D06EC5A4530B142C61D6584E3F88F7C76DF5592C257C99092828C6CBC5ACC
 * Entry: 0x00379965, Ghidra index: 13487, label: FUN_00379965
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00379965(undefined4 param_1,uint param_2)

{
  uint in_EAX;
  int *in_ECX;
  undefined4 *puVar1;
  uint in_EDX;
  int unaff_EDI;
  
  puVar1 = (undefined4 *)(in_ECX[0x4c] + unaff_EDI * 8 + *in_ECX);
  *puVar1 = param_1;
  puVar1[1] = ((in_EAX | 0xffffff80) << 8 | param_2) << 0x10 | in_EDX & 0xffff;
  return;
}
