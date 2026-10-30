/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8ECE6DE7E8F6B2BC31F3640EA7136F07F84DC27C3F7CCEB6D83EC305DDCF69CE
 * Entry: 0x002d14f0, Ghidra index: 10184, label: FUN_002d14f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002d14f0(int param_1)

{
  int in_ECX;
  
  FUN_002b3c60();
  *(undefined4 *)(in_ECX + 0x20 + param_1 * 4) = 0;
  FUN_002ce2c0();
  return;
}
