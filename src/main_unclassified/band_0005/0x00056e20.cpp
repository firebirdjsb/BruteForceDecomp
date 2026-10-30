/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 04F7C174EB7B2204A9B3CACFCA0A66039F6BCB5B4C31FF4CEAFC6674D20DA38A
 * Entry: 0x00056e20, Ghidra index: 841, label: FUN_00056e20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_00056e40(int param_1,int param_2);

void FUN_00056e20(void)

{
  int in_EAX;
  int in_ECX;
  
  if ((((in_EAX != 0) && (in_ECX != 0)) && ((*(byte *)(in_EAX + 0x26) & 8) != 0)) &&
     ((*(byte *)(in_ECX + 0x26) & 8) != 0)) {
    FUN_00056e40(in_EAX,in_ECX);
  }
  return;
}
