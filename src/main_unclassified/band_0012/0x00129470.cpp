/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F14380F9F244DC7D492E0A55A61D131322D808279246BC4462BD05F31B7A37A9
 * Entry: 0x00129470, Ghidra index: 3740, label: FUN_00129470
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Existing void(void) source interface at 0x00129530, with implicit
 * guest EAX input; Xbox calling convention remains ABI_UNVERIFIED. */
extern void FUN_00129530(void);
void FUN_00129470(void)

{
  byte bVar1;
  int in_EAX;
  
  bVar1 = *(byte *)(in_EAX + 0x834);
  if (((bVar1 & 1) != 0) && ((bVar1 & 2) == 0)) {
    return;
  }
  *(byte *)(in_EAX + 0x834) = bVar1 & 0xfd | 1;
  FUN_00129530();
  return;
}
