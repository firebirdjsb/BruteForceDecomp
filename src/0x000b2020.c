/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C826FD26F02183DE5709BA75BF39CA88858DC1A1FDF183AFC209E078D353E5F0
 * Entry: 0x000b2020, Ghidra index: 2137, label: FUN_000b2020
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000b2020(void)

{
  undefined4 *in_ECX;
  
  in_ECX[1] = 0xffffffff;
  *in_ECX = 0xff000000;
  in_ECX[2] = 0x3f800000;
  in_ECX[3] = 0;
  in_ECX[4] = 0x3f800000;
  in_ECX[5] = 2;
  return;
}
