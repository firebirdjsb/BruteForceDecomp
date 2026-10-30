/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AA45747EE649AB47495099A19F740A5CBC7B1392DFB873A2BA89A773A11E7560
 * Entry: 0x0010dcb0, Ghidra index: 3504, label: FUN_0010dcb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0010dcb0(void)

{
  int *piVar1;
  int in_EAX;
  
  FUN_0010d660();
  piVar1 = (int *)(in_EAX + 200);
  *(undefined4 *)(in_EAX + 0xec) = 1;
  (**(code **)(*piVar1 + 0x2c))();
  *(int *)(in_EAX + 0xd0) = in_EAX;
  (**(code **)(*piVar1 + 0x30))();
  *(undefined4 *)(in_EAX + 0xd4) = 0;
  *(undefined4 *)(in_EAX + 0xd8) = 0;
  (**(code **)(*piVar1 + 0x1c))();
  *(undefined4 *)(in_EAX + 0xdc) = *(undefined4 *)(in_EAX + 0x14);
  (**(code **)(*piVar1 + 0x1c))();
  *(undefined4 *)(in_EAX + 0xf5) = *(undefined4 *)(in_EAX + 0x29);
  (**(code **)(*piVar1 + 0x34))();
  *(undefined4 *)(in_EAX + 0x150) = 2;
  *(undefined4 *)(in_EAX + 0x154) = 2;
  FUN_0010ab60();
  *(undefined4 *)(in_EAX + 0x15c) = 0xff000000;
  return;
}
