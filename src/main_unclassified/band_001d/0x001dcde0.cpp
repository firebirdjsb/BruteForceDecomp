/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A9972CA7C77EB8E5EE2BC9029FB6B2AA336297561F75E5135AC1296961E6AB8D
 * Entry: 0x001dcde0, Ghidra index: 6595, label: FUN_001dcde0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001dcde0(void)

{
  undefined4 *in_EAX;
  undefined4 *in_ECX;
  
  if (in_EAX != (undefined4 *)0x0) {
    *in_EAX = *in_ECX;
    in_EAX[1] = in_ECX[1];
    in_EAX[2] = in_ECX[2];
    *(undefined1 *)(in_EAX + 3) = *(undefined1 *)(in_ECX + 3);
    *(undefined1 *)((int)in_EAX + 0xd) = *(undefined1 *)((int)in_ECX + 0xd);
    in_EAX[4] = in_ECX[4];
    in_EAX[5] = in_ECX[5];
  }
  return;
}
