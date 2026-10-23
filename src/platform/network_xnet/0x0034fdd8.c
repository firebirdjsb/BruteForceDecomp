/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 88CF16204E5D7496AF945F7E501C678AF3EC6CEF92E5A5E83F496103FABF442D
 * Entry: 0x0034fdd8, Ghidra index: 13041, label: FUN_0034fdd8
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0034fdd8(void)

{
  int in_ECX;
  
  FUN_0034c35a(in_ECX + 0xa60,0xffffffff);
  FUN_0034c6bc(*(undefined4 *)(in_ECX + 0xa2c));
  *(undefined4 *)(in_ECX + 0xa2c) = 0;
  return;
}
