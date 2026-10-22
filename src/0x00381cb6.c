/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E3C8A7346456C9CDCE45C3835148564B188913D3C97E15D3E1B862886F8155AF
 * Entry: 0x00381cb6, Ghidra index: 13577, label: FUN_00381cb6
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00381cb6(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  
  iVar1 = ExAllocatePoolWithTag(8,0x5f5f554d);
  if (iVar1 == 0) {
    *(undefined4 *)(*(int *)(in_ECX + 0x10) + 0x14) = 0;
    uVar2 = 0xc000009a;
  }
  else {
    *(int *)(in_ECX + 0x28) = iVar1;
    *(undefined4 *)(in_ECX + 0x2c) = 8;
    *(code **)(in_ECX + 0x30) = FUN_00381620;
    *(undefined2 *)(in_ECX + 0x34) = 10;
    *(undefined1 *)(in_ECX + 0x36) = 2;
    *(undefined1 *)(in_ECX + 0x37) = 1;
    *(undefined4 *)(in_ECX + 0x4f) = 0;
    *(undefined4 *)(in_ECX + 0x53) = 0;
    *(undefined4 *)(in_ECX + 0x57) = 0;
    *(undefined4 *)(in_ECX + 0x5b) = 0;
    *(undefined1 *)(in_ECX + 0x4f) = 0x25;
    FUN_00383571();
    uVar2 = 0x103;
  }
  return uVar2;
}
