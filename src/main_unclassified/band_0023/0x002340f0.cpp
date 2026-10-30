/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FBE527C0B8C0CF448360879098B0FD47581F011EC3D8AD238CA08FF4C0F58BA8
 * Entry: 0x002340f0, Ghidra index: 7796, label: FUN_002340f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
bool FUN_002340f0(uint param_1)

{
  int *piVar1;
  int in_EAX;
  bool bVar2;
  
  piVar1 = *(int **)(in_EAX + 0x10);
  if ((piVar1 == (int *)0x0) || (piVar1[0x19] == 0)) {
    if (param_1 < 0xf36d8811) {
      if (param_1 == 0xf36d8810) {
        return false;
      }
      if (param_1 == 0x6677bcb) {
        return false;
      }
      bVar2 = param_1 == 0xe0b5650b;
    }
    else {
      bVar2 = param_1 == 0xfed99c09;
    }
    if (bVar2) {
      return false;
    }
  }
  else if (param_1 < 0xe0b5650c) {
    if (param_1 == 0xe0b5650b) {
      return *piVar1 == -0x27098f4;
    }
    if (param_1 == 0x6677bcb) {
      return *piVar1 == 0x1b0dc6c7;
    }
    if (param_1 == 0x6901441) {
      return *piVar1 == -0xca2a4c4;
    }
  }
  else {
    if (param_1 == 0xf36d8810) {
      return *piVar1 == -0x1c41e972;
    }
    if (param_1 == 0xfed99c09) {
      return *piVar1 == -0x16b14996;
    }
  }
  return true;
}
