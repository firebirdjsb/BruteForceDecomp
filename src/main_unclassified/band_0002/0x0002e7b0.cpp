/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D67CDBB8E76558E11EE4A32DBA32CF8F9EEA090730E1EE1EF25577678A015D65
 * Entry: 0x0002e7b0, Ghidra index: 305, label: FUN_0002e7b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0002e7b0(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x450) = 0;
  *(undefined4 *)(in_ECX + 0x44c) = 0;
  *(undefined4 *)(in_ECX + 0x448) = 0;
  FUN_0004e8f0();
  *(undefined4 *)(in_ECX + 0x354) = 0;
  *(undefined4 *)(in_ECX + 0x34c) = 0;
  *(byte *)(in_ECX + 0x350) = *(byte *)(in_ECX + 0x350) & 0xfa | 2;
  return 1;
}
