/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8B628B9901A1B4616B1C960B178C379FBE9B9F34E5BB8D46EC6149C48C9D2485
 * Entry: 0x001d3090, Ghidra index: 6310, label: FUN_001d3090
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001d3090(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *in_EAX;
  undefined4 *in_ECX;
  
  uVar1 = in_ECX[2];
  uVar2 = in_ECX[1];
  *in_EAX = *in_ECX;
  in_EAX[1] = uVar2;
  in_EAX[2] = uVar1;
  uVar1 = in_ECX[5];
  uVar2 = in_ECX[4];
  in_EAX[3] = in_ECX[3];
  in_EAX[4] = uVar2;
  in_EAX[5] = uVar1;
  uVar1 = in_ECX[8];
  uVar2 = in_ECX[7];
  in_EAX[6] = in_ECX[6];
  in_EAX[7] = uVar2;
  in_EAX[8] = uVar1;
  uVar1 = in_ECX[0xb];
  uVar2 = in_ECX[10];
  in_EAX[9] = in_ECX[9];
  in_EAX[10] = uVar2;
  in_EAX[0xb] = uVar1;
  uVar1 = in_ECX[0xe];
  uVar2 = in_ECX[0xd];
  in_EAX[0xc] = in_ECX[0xc];
  in_EAX[0xd] = uVar2;
  in_EAX[0xe] = uVar1;
  uVar1 = in_ECX[0x11];
  uVar2 = in_ECX[0x10];
  in_EAX[0xf] = in_ECX[0xf];
  in_EAX[0x10] = uVar2;
  in_EAX[0x11] = uVar1;
  uVar1 = in_ECX[0x14];
  uVar2 = in_ECX[0x13];
  in_EAX[0x12] = in_ECX[0x12];
  in_EAX[0x13] = uVar2;
  in_EAX[0x14] = uVar1;
  return;
}
