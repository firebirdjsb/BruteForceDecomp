/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6531E3B20833E922754033E7027AA4B6E8C5A150268EF8A9CCC9F0150C26538A
 * Entry: 0x0024a7f0, Ghidra index: 8217, label: FUN_0024a7f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0024a7f0(void)

{
  int in_EAX;
  undefined4 uVar1;
  uint3 in_ECX;
  int unaff_EDI;
  undefined4 uStack_4;
  
  if (in_EAX != unaff_EDI) {
    uStack_4 = (uint)in_ECX;
    do {
      if (0xf < *(uint *)(in_EAX + 0x18)) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(*(undefined4 *)(in_EAX + 4));
      }
      *(undefined4 *)(in_EAX + 0x18) = 0xf;
      *(undefined4 *)(in_EAX + 0x14) = 0;
      uVar1 = FUN_0001f4d0((int)&uStack_4 + 3);
      FUN_0001f4e0(uVar1);
      in_EAX = in_EAX + 0x20;
    } while (in_EAX != unaff_EDI);
  }
  return;
}
