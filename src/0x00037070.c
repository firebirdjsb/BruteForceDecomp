/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C8BEC2D3570DC28AE361D5AF6FEC8CC9B7F3EF78403A4F2226A17FAF25D7FDA4
 * Entry: 0x00037070, Ghidra index: 364, label: FUN_00037070
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00037070(void)

{
  int *in_ECX;
  
  in_ECX[0x12a] = 1;
  (**(code **)(*in_ECX + 0x98))();
  in_ECX[0x1ca] = 0x40400000;
  in_ECX[0x1c8] = 0x40400000;
  *(byte *)(in_ECX + 0x1c9) = *(byte *)(in_ECX + 0x1c9) & 0xf9 | 1;
  return;
}
