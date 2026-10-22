/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 832A498DDEFC9128BE396A0AACC4F8DDF52B8188263BD86A75D939422C4C5849
 * Entry: 0x00383014, Ghidra index: 13611, label: FUN_00383014
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00383014(void)

{
  int in_ECX;
  undefined8 uVar1;
  
  *(undefined1 *)(in_ECX + 0xd5) = 0;
  *(undefined1 *)(in_ECX + 0xd6) = 0;
  *(undefined4 *)(in_ECX + 200) = *(undefined4 *)(in_ECX + 0x20);
  *(int *)(in_ECX + 0xd0) = in_ECX + 0x5f;
  *(undefined1 *)(in_ECX + 0xb8) = 0x28;
  *(undefined1 *)(in_ECX + 0xb9) = 0x41;
  *(code **)(in_ECX + 0xc0) = FUN_00382f90;
  *(int *)(in_ECX + 0xc4) = in_ECX;
  *(undefined4 *)(in_ECX + 0xcc) = 0xd;
  *(undefined1 *)(in_ECX + 0xd4) = 2;
  uVar1 = __allmul(*(undefined2 *)(in_ECX + 0x34),0,0xfffe7960,0xffffffff);
  KeSetTimer(in_ECX + 0x70,uVar1,in_ECX + 0x98);
  FUN_00381379((undefined1 *)(in_ECX + 0xb8));
  return;
}
