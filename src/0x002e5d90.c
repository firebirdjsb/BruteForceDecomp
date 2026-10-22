/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 749C0D6083FD848582EAFC72F7E5CB3C60C187B0F25543BE561698C7C335F176
 * Entry: 0x002e5d90, Ghidra index: 10491, label: FUN_002e5d90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_002e5d90(char param_1)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  
  iVar2 = 0;
  if (param_1 == '\0') {
    iVar1 = *(int *)(in_ECX + 0x4898);
    if (((iVar1 != 3) && (iVar1 == 2)) && (*(char *)(in_ECX + 0x4890) != '\0')) {
      iVar2 = *(int *)(in_ECX + 0x4894);
      *(undefined1 *)(in_ECX + 0x4890) = 0;
      *(undefined4 *)(in_ECX + 0x4894) = 0;
    }
    if (iVar1 == 1) {
      return iVar2;
    }
  }
  else if (*(int *)(in_ECX + 0x4898) == 3) {
    return 0;
  }
  if (*(int *)(in_ECX + 0x28) != 2) {
    if (param_1 == '\0') {
      (**(code **)**(undefined4 **)(in_ECX + 0x20))(0);
      FUN_00345054(in_ECX + 0x4878,0,0,0x1000,10);
      *(undefined4 *)(in_ECX + 0x4898) = 1;
    }
    else {
      (**(code **)**(undefined4 **)(in_ECX + 0x20))(1);
      FUN_00345054(in_ECX + 0x4878,0,0,64000,9);
      *(undefined4 *)(in_ECX + 0x4898) = 3;
    }
    iVar2 = 0;
  }
  FUN_002e4880(0);
  if (-1 < iVar2) {
    *(undefined1 *)(in_ECX + 0x4890) = 0;
    *(undefined4 *)(in_ECX + 0x4894) = 0;
    return iVar2;
  }
  *(int *)(in_ECX + 0x4894) = iVar2;
  *(undefined1 *)(in_ECX + 0x4890) = 1;
  return iVar2;
}
