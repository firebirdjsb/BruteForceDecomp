/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FEDE0779B9983F5D6234068DA0BBE8F2B820B81E0EE29AFEA77355C8639D9590
 * Entry: 0x001d1f40, Ghidra index: 6294, label: FUN_001d1f40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001d1f40(void)

{
  undefined4 *in_EAX;
  undefined4 *in_ECX;
  
  *in_EAX = *in_ECX;
  in_EAX[1] = in_ECX[1];
  in_EAX[2] = in_ECX[2];
  *(undefined1 *)(in_EAX + 3) = *(undefined1 *)(in_ECX + 3);
  *(undefined1 *)((int)in_EAX + 0xd) = *(undefined1 *)((int)in_ECX + 0xd);
  in_EAX[4] = in_ECX[4];
  in_EAX[5] = in_ECX[5];
  in_EAX[6] = in_ECX[6];
  *(undefined1 *)(in_EAX + 7) = *(undefined1 *)(in_ECX + 7);
  in_EAX[8] = in_ECX[8];
  in_EAX[9] = in_ECX[9];
  in_EAX[10] = in_ECX[10];
  in_EAX[0xb] = in_ECX[0xb];
  in_EAX[0xc] = in_ECX[0xc];
  in_EAX[0xd] = in_ECX[0xd];
  in_EAX[0xe] = in_ECX[0xe];
  in_EAX[0xf] = in_ECX[0xf];
  return;
}
