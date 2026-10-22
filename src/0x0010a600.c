/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F460A0FF7565FB6D1A921C20FC06702FF3A22720F52BC1D9BE79050A14053D5E
 * Entry: 0x0010a600, Ghidra index: 3427, label: FUN_0010a600
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0010a600(void)

{
  int in_ECX;
  
  if ((*(int *)(in_ECX + 0xf0) != 0) && ((*(byte *)(in_ECX + 0x28) & 4) != 0)) {
    FUN_0010a280();
    FUN_0010a420();
    return;
  }
  return;
}
