/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A4DD61865D9E37B9CB6AD4F3153EDD73D94ED4F9DD55CA528A95C7C1F3BA7066
 * Entry: 0x001b1c80, Ghidra index: 5611, label: FUN_001b1c80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001b1c80(void)

{
  uint in_EAX;
  int in_ECX;
  uint uVar1;
  int iVar2;
  
  iVar2 = *(int *)(in_ECX + 4);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(int *)(in_ECX + 8) - iVar2 >> 5;
  }
  if (uVar1 < in_EAX) {
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(in_ECX + 8) - iVar2 >> 5;
    }
    FUN_001b76b0(*(undefined4 *)(in_ECX + 8),in_EAX - iVar2);
    return;
  }
  if ((iVar2 != 0) && (in_EAX < (uint)(*(int *)(in_ECX + 8) - iVar2 >> 5))) {
    FUN_001b7660(in_ECX,&stack0x00000004,in_EAX * 0x20 + *(int *)(in_ECX + 4),*(int *)(in_ECX + 8));
  }
  return;
}
