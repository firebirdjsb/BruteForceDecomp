/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 13A31ACD2C4BFB71AAD3BF7D5035CE5265890AA7EEDA1385DFDFAF8793442F3C
 * Entry: 0x001c9de0, Ghidra index: 5837, label: FUN_001c9de0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001c9de0(void)

{
  int iVar1;
  undefined4 *in_EAX;
  undefined4 *in_ECX;
  undefined4 *puVar2;
  int iVar3;
  
  *in_EAX = *in_ECX;
  in_EAX[1] = in_ECX[1];
  in_EAX[2] = in_ECX[2];
  *(undefined1 *)(in_EAX + 3) = *(undefined1 *)(in_ECX + 3);
  *(undefined1 *)((int)in_EAX + 0xd) = *(undefined1 *)((int)in_ECX + 0xd);
  puVar2 = in_EAX + 4;
  iVar1 = 0x10 - (int)puVar2;
  iVar3 = 3;
  do {
    *puVar2 = *(undefined4 *)((int)in_ECX + iVar1 + (int)puVar2);
    puVar2 = puVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(undefined1 *)(in_EAX + 7) = *(undefined1 *)(in_ECX + 7);
  in_EAX[8] = in_ECX[8];
  in_EAX[9] = in_ECX[9];
  in_EAX[10] = in_ECX[10];
  *(undefined1 *)(in_EAX + 0xb) = *(undefined1 *)(in_ECX + 0xb);
  in_EAX[0xc] = in_ECX[0xc];
  in_EAX[0xd] = in_ECX[0xd];
  in_EAX[0xe] = in_ECX[0xe];
  in_EAX[0xf] = in_ECX[0xf];
  in_EAX[0x10] = in_ECX[0x10];
  *(undefined1 *)(in_EAX + 0x11) = *(undefined1 *)(in_ECX + 0x11);
  *(undefined1 *)((int)in_EAX + 0x45) = *(undefined1 *)((int)in_ECX + 0x45);
  *(undefined1 *)((int)in_EAX + 0x46) = *(undefined1 *)((int)in_ECX + 0x46);
  return;
}
