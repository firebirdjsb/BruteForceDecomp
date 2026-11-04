/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3AB445499E5EC82B41BE4C2C1012B23423728761B9961F16F0CB0C5750D30B1C
 * Entry: 0x00129450, Ghidra index: 3739, label: FUN_00129450
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Existing void(void) source interface at 0x00129530, with implicit
 * guest EAX input; Xbox calling convention remains ABI_UNVERIFIED. */
extern void FUN_00129530(void);
void FUN_00129450(void)

{
  byte bVar1;
  int in_EAX;
  
  bVar1 = *(byte *)(in_EAX + 0x834);
  if (((bVar1 & 8) != 0) && (*(byte *)(in_EAX + 0x834) = bVar1 & 0xf7, (bVar1 & 5) == 0)) {
    FUN_00129530();
    return;
  }
  return;
}
