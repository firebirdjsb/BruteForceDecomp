/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 11964A0D9E1257E5A6A867C4A28660602A011AE76D79785997D5FF20235CD20E
 * Entry: 0x001ca330, Ghidra index: 5841, label: FUN_001ca330
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001ca330(void)

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
  in_EAX[7] = in_ECX[7];
  in_EAX[8] = in_ECX[8];
  in_EAX[9] = in_ECX[9];
  in_EAX[10] = in_ECX[10];
  in_EAX[0xb] = in_ECX[0xb];
  in_EAX[0xc] = in_ECX[0xc];
  in_EAX[0xd] = in_ECX[0xd];
  *(undefined1 *)(in_EAX + 0xe) = *(undefined1 *)(in_ECX + 0xe);
  return;
}
