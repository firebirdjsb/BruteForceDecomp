/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DE783F6B1281CE10FA5214057B49F63F73908198409BEF87816C18653B6C7D9C
 * Entry: 0x001dd130, Ghidra index: 6614, label: FUN_001dd130
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001dd130(void)

{
  undefined4 *in_EAX;
  undefined4 *in_ECX;
  
  if (in_EAX != (undefined4 *)0x0) {
    *in_EAX = *in_ECX;
    in_EAX[1] = in_ECX[1];
    in_EAX[2] = in_ECX[2];
    *(undefined1 *)(in_EAX + 3) = *(undefined1 *)(in_ECX + 3);
    *(undefined1 *)((int)in_EAX + 0xd) = *(undefined1 *)((int)in_ECX + 0xd);
  }
  return;
}
