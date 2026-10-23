/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EFCF8F50161AC95BCDE05571FE9DEDF2C1E2484BDAEBB372E11F868077BC2FD9
 * Entry: 0x00020230, Ghidra index: 176, label: FUN_00020230
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_00020230(void)

{
  uint in_EAX;
  int *in_ECX;
  
  if (in_ECX != (int *)0x0) {
    in_EAX = (**(code **)(*in_ECX + 0xf4))();
    if ((in_EAX != 0) && (*(int *)(in_EAX + 0x58) == 4)) {
      if ((*(int *)(in_EAX + 0x6ac) == 0xc) ||
         (in_EAX = *(int *)(in_EAX + 0x6ac) - 0xe, in_EAX == 0)) {
        return 1;
      }
    }
  }
  return in_EAX & 0xffffff00;
}
