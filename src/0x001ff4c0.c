/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5797DBDFD189082FB77453FF067290FE4032F60273D3179C6BD97EAC59F3CDD2
 * Entry: 0x001ff4c0, Ghidra index: 7245, label: FUN_001ff4c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001ff4c0(int param_1)

{
  byte bVar1;
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0x10);
  FUN_001fb110(param_1 + 0x2c,in_ECX + 0x2c);
  *(byte *)(in_ECX + 0x3d) =
       *(byte *)(in_ECX + 0x3d) ^ (*(byte *)(in_ECX + 0x3d) ^ *(byte *)(param_1 + 0x3d)) & 1;
  *(undefined4 *)(in_ECX + 0x38) = *(undefined4 *)(param_1 + 0x38);
  bVar1 = *(byte *)(in_ECX + 0x3d) ^ (*(byte *)(in_ECX + 0x3d) ^ *(byte *)(param_1 + 0x3d)) & 2;
  *(byte *)(in_ECX + 0x3d) = bVar1;
  bVar1 = (*(byte *)(param_1 + 0x3d) ^ bVar1) & 4 ^ bVar1;
  *(byte *)(in_ECX + 0x3d) = bVar1;
  bVar1 = (*(byte *)(param_1 + 0x3d) ^ bVar1) & 0x10 ^ bVar1;
  *(byte *)(in_ECX + 0x3d) = bVar1;
  bVar1 = (*(byte *)(param_1 + 0x3d) ^ bVar1) & 0x20 ^ bVar1;
  *(byte *)(in_ECX + 0x3d) = bVar1;
  *(undefined1 *)(in_ECX + 0x3c) = *(undefined1 *)(param_1 + 0x3c);
  bVar1 = *(byte *)(in_ECX + 0x3d) ^ (bVar1 ^ *(byte *)(param_1 + 0x3d)) & 8;
  *(byte *)(in_ECX + 0x3d) = bVar1;
  *(byte *)(in_ECX + 0x3d) = (*(byte *)(param_1 + 0x3d) ^ bVar1) & 0x7f ^ *(byte *)(param_1 + 0x3d);
  return;
}
