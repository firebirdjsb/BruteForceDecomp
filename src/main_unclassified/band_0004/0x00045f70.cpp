/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B81CA352C57E8AEC111B56586BE9BF1F62085ED2AAA755D786689CC3B8C8F87D
 * Entry: 0x00045f70, Ghidra index: 545, label: FUN_00045f70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00045f70(void)

{
  int in_ECX;
  
  FUN_0004e8f0();
  *(undefined4 *)(in_ECX + 0x450) = 0;
  *(undefined4 *)(in_ECX + 0x44c) = 0;
  *(undefined4 *)(in_ECX + 0x448) = 0;
  return 1;
}
