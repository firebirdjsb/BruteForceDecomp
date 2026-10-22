/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D770F4EDAFB60686CEF903C383E6D16A9DAB63F9D9DEDD69953737D9EAFA8989
 * Entry: 0x00179c00, Ghidra index: 4993, label: FUN_00179c00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00179c00(void)

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
  *(undefined1 *)(in_EAX + 3) = *(undefined1 *)(in_ECX + 3);
  uVar1 = in_ECX[6];
  uVar2 = in_ECX[5];
  in_EAX[4] = in_ECX[4];
  in_EAX[5] = uVar2;
  in_EAX[6] = uVar1;
  *(undefined1 *)(in_EAX + 7) = *(undefined1 *)(in_ECX + 7);
  uVar1 = in_ECX[10];
  uVar2 = in_ECX[9];
  in_EAX[8] = in_ECX[8];
  in_EAX[9] = uVar2;
  in_EAX[10] = uVar1;
  *(undefined1 *)(in_EAX + 0xb) = *(undefined1 *)(in_ECX + 0xb);
  in_EAX[0xc] = in_ECX[0xc];
  in_EAX[0xd] = in_ECX[0xd];
  in_EAX[0xe] = in_ECX[0xe];
  in_EAX[0xf] = in_ECX[0xf];
  in_EAX[0x10] = in_ECX[0x10];
  in_EAX[0x11] = in_ECX[0x11];
  in_EAX[0x12] = in_ECX[0x12];
  in_EAX[0x13] = in_ECX[0x13];
  in_EAX[0x14] = in_ECX[0x14];
  in_EAX[0x15] = in_ECX[0x15];
  in_EAX[0x16] = in_ECX[0x16];
  in_EAX[0x17] = in_ECX[0x17];
  in_EAX[0x18] = in_ECX[0x18];
  in_EAX[0x19] = in_ECX[0x19];
  *(undefined2 *)(in_EAX + 0x1a) = *(undefined2 *)(in_ECX + 0x1a);
  *(undefined2 *)((int)in_EAX + 0x6a) = *(undefined2 *)((int)in_ECX + 0x6a);
  return;
}
