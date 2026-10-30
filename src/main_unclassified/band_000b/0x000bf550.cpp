/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5955C3DB18580D31296F3DF3B4C0D5CEF9CB8E8D91B280ACFA5E228FF4FF3160
 * Entry: 0x000bf550, Ghidra index: 2330, label: FUN_000bf550
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern bool FUN_000bf6d0(undefined4 param_1,int param_2);

uint FUN_000bf550(undefined4 param_1)

{
  int *in_EAX;
  uint uVar1;
  uint uVar2;
  int unaff_EDI;
  
  uVar1 = *(uint *)(*(int *)(unaff_EDI + 0xe0) + 0x6c);
  if (*(int *)(uVar1 + 0x10) != 0) {
    uVar1 = *(uint *)(uVar1 + 8);
  }
  uVar2 = in_EAX[0x1b];
  if (*(int *)(uVar2 + 0x10) != 0) {
    uVar2 = *(uint *)(uVar2 + 8);
  }
  if (uVar1 != uVar2) {
    uVar1 = (**(code **)(*in_EAX + 0xd4))();
    if (((char)uVar1 != '\0') && ((*(byte *)(in_EAX + 0x1c) & 1) == 0)) {
      uVar1 = FUN_000bf6d0(param_1,unaff_EDI);
      return uVar1;
    }
  }
  return uVar1 & 0xffffff00;
}
