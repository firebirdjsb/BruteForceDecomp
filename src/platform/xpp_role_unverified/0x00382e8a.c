/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D3EE71E11A8C2962F0F5CB2231F65361CBA468AD716C759750186A274B91B913
 * Entry: 0x00382e8a, Ghidra index: 13609, label: FUN_00382e8a
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00382e8a(void)

{
  undefined1 *puVar1;
  int iVar2;
  int in_ECX;
  undefined4 in_EDX;
  
  iVar2 = *(int *)(in_ECX + 8);
  if ((*(byte *)(in_ECX + 0xd) & 1) != 0) {
    KeCancelTimer(in_ECX + 0x70);
    *(byte *)(in_ECX + 0xd) = *(byte *)(in_ECX + 0xd) & 0xfe;
  }
  if ((*(uint *)(in_ECX + 0xc) & 6) == 0) {
    *(uint *)(in_ECX + 0xc) = *(uint *)(in_ECX + 0xc) | 0x1000;
    *(undefined4 *)(in_ECX + 0x6c) = in_EDX;
    puVar1 = (undefined1 *)(in_ECX + 0xb8);
    *puVar1 = 0x18;
    *(undefined1 *)(in_ECX + 0xb9) = 5;
    *(undefined4 *)(in_ECX + 0xc0) = 0;
    *(undefined4 *)(in_ECX + 200) = *(undefined4 *)(in_ECX + 0x20);
    *(undefined4 *)(in_ECX + 0xcc) = 4;
    FUN_00381379(puVar1);
    *(byte *)(in_ECX + 0xd) = *(byte *)(in_ECX + 0xd) | 3;
    KeSetTimer(in_ECX + 0x70,0xfff0bdc0,0xffffffff,in_ECX + 0x98);
    *puVar1 = 0x30;
    *(undefined1 *)(in_ECX + 0xb9) = 0x40;
    *(undefined1 **)(in_ECX + 0xc0) = &LAB_00383371;
    *(int *)(in_ECX + 0xc4) = in_ECX;
    *(undefined4 *)(in_ECX + 200) = 0;
    *(undefined4 *)(in_ECX + 0xd0) = 0;
    *(undefined4 *)(in_ECX + 0xcc) = 0;
    *(undefined1 *)(in_ECX + 0xd4) = 0;
    *(undefined1 *)(in_ECX + 0xd5) = 0;
    *(undefined1 *)(in_ECX + 0xd6) = 0;
    *(undefined1 *)(in_ECX + 0xe0) = 2;
    *(undefined1 *)(in_ECX + 0xe1) = 1;
    *(undefined2 *)(in_ECX + 0xe2) = 0;
    *(ushort *)(in_ECX + 0xe4) = (ushort)*(byte *)(iVar2 + 5);
    *(undefined2 *)(in_ECX + 0xe6) = 0;
    FUN_00381379(puVar1);
  }
  else {
    (**(code **)(in_ECX + 0x30))();
  }
  return;
}
