/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EE74321853F6D6E3CF674319793F65FCC0DDA4A0254F2902D3A3C73B6197AD42
 * Entry: 0x0034cb29, Ghidra index: 12984, label: FUN_0034cb29
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0034cb29(void)

{
  byte *in_ECX;
  
  FUN_0034caf1();
  if ((*in_ECX & 0x80) != 0) {
    if (*(int *)(in_ECX + 0x4c) != 0) {
      ExFreePool(*(int *)(in_ECX + 0x4c));
    }
    in_ECX[0x4c] = 0;
    in_ECX[0x4d] = 0;
    in_ECX[0x4e] = 0;
    in_ECX[0x4f] = 0;
    in_ECX[0x50] = 0;
    in_ECX[0x51] = 0;
    in_ECX[0x52] = 0;
    in_ECX[0x53] = 0;
  }
  FUN_00352ebc(0x200);
  return;
}
