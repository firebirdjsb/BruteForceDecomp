/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8F62702268860A3C0C2B22529FB2F645E7F39521BE1E418C73A093C0AB500EF6
 * Entry: 0x001c9990, Ghidra index: 5835, label: FUN_001c9990
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001c9990(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
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
  *(undefined1 *)(in_EAX + 0xb) = *(undefined1 *)(in_ECX + 0xb);
  *(undefined1 *)((int)in_EAX + 0x2d) = *(undefined1 *)((int)in_ECX + 0x2d);
  uVar1 = in_ECX[0xe];
  uVar2 = in_ECX[0xd];
  in_EAX[0xc] = in_ECX[0xc];
  in_EAX[0xd] = uVar2;
  in_EAX[0xe] = uVar1;
  in_EAX[0xf] = in_ECX[0xf];
  in_EAX[0x10] = in_ECX[0x10];
  in_EAX[0x11] = in_ECX[0x11];
  in_EAX[0x12] = in_ECX[0x12];
  in_EAX[0x13] = in_ECX[0x13];
  in_EAX[0x14] = in_ECX[0x14];
  *(undefined1 *)(in_EAX + 0x15) = *(undefined1 *)(in_ECX + 0x15);
  in_EAX[0x16] = in_ECX[0x16];
  return;
}
