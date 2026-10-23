/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F95FDC433EB1A8FDCD93DDEA77BD006EEF552BE4F5EF7A828FD191F2EB26FAEC
 * Entry: 0x00350cd7, Ghidra index: 13057, label: FUN_00350cd7
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00350cd7(void)

{
  byte bVar1;
  undefined1 *puVar2;
  int in_ECX;
  undefined4 uVar3;
  undefined1 local_20 [2];
  undefined4 local_1e;
  undefined1 local_1a [22];
  
  bVar1 = *(byte *)(in_ECX + 0xa31);
  puVar2 = local_20;
  if (*(char *)(in_ECX + 0x8c0) == '\x13') {
    if ((bVar1 & 2) == 0) {
      local_20[0] = 1;
      local_20[1] = 4;
      puVar2 = (undefined1 *)((int)&local_1e + 2);
      local_1e = CONCAT22(local_1e._2_2_,
                          CONCAT11((char)*(undefined2 *)(in_ECX + 0xa36),
                                   (char)((ushort)*(undefined2 *)(in_ECX + 0xa36) >> 8)));
    }
    if ((bVar1 & 1) == 0) {
      *puVar2 = 5;
      puVar2[1] = 6;
      *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(in_ECX + 0xa3c);
      puVar2 = puVar2 + 6;
    }
    uVar3 = 0x21c0;
  }
  else {
    if ((bVar1 & 0x10) == 0) {
      local_1e = *(undefined4 *)(in_ECX + 0x8e8);
      local_20[0] = 3;
      local_20[1] = 6;
      puVar2 = local_1a;
    }
    if ((bVar1 & 0x20) == 0) {
      *puVar2 = 0x81;
      puVar2[1] = 6;
      *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(in_ECX + 0x8f0);
      puVar2 = puVar2 + 6;
    }
    if ((*(byte *)(in_ECX + 0xa31) & 0x40) == 0) {
      *puVar2 = 0x83;
      puVar2[1] = 6;
      *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(in_ECX + 0x8f4);
      puVar2 = puVar2 + 6;
    }
    uVar3 = 0x2180;
  }
  *(byte *)(in_ECX + 0xa71) = *(byte *)(in_ECX + 0xa71) | 0x40;
  FUN_00350a7a(uVar3,1,*(undefined1 *)(in_ECX + 0xa32),local_20,(int)puVar2 - (int)local_20,0,0,0,0,
               0,0,0,0,0);
  return;
}
