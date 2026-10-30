/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4FD4D948920840F50F0672455E13E1CDE91C0280356FFF361F53595CC47A2EAA
 * Entry: 0x001dcf70, Ghidra index: 6605, label: FUN_001dcf70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001dcf70(void)

{
  undefined4 *in_EAX;
  undefined4 *in_ECX;
  
  if (in_EAX != (undefined4 *)0x0) {
    *in_EAX = *in_ECX;
    in_EAX[1] = in_ECX[1];
    in_EAX[2] = in_ECX[2];
    in_EAX[3] = in_ECX[3];
    in_EAX[4] = in_ECX[4];
    in_EAX[5] = in_ECX[5];
    in_EAX[6] = in_ECX[6];
    *(undefined1 *)(in_EAX + 7) = *(undefined1 *)(in_ECX + 7);
    *(undefined1 *)((int)in_EAX + 0x1d) = *(undefined1 *)((int)in_ECX + 0x1d);
    in_EAX[8] = in_ECX[8];
  }
  return;
}
