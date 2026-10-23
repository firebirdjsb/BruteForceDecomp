/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0A70BD45469C08DCEECADE6BBA5B89F510C191FAABFAAEFE589560F8D5C360B1
 * Entry: 0x00379995, Ghidra index: 13488, label: FUN_00379995
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00379995(void)

{
  int iVar1;
  int *in_EAX;
  uint uVar2;
  int in_ECX;
  uint in_EDX;
  undefined4 uVar3;
  
  iVar1 = *in_EAX;
  uVar2 = in_EDX & 0xff;
  uVar3 = 0;
  if (in_EDX == 0x39) {
    uVar2 = 0x1000039;
  }
  else if (in_EDX == 0x44) {
    uVar3 = 0x201;
  }
  else if (in_EDX == 0x57) {
    uVar3 = 0xb00;
  }
  else if (in_EDX == 0x97) {
    uVar3 = 0xa00;
  }
  *(uint *)((in_ECX + 0x70000) * 0x10 + iVar1) = uVar2;
  iVar1 = in_ECX * 0x10 + iVar1;
  *(undefined4 *)(iVar1 + 0x700004) = uVar3;
  *(undefined4 *)(iVar1 + 0x700008) = 0;
  *(undefined4 *)(iVar1 + 0x70000c) = 0;
  return;
}
