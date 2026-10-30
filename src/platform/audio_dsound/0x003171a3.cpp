/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4FCF192A72740FB4BD083B3730A1F4FCE65DD66A84E87881CD23B00F478AFABF
 * Entry: 0x003171a3, Ghidra index: 12171, label: FUN_003171a3
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_003171a3(void)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int in_ECX;
  uint uVar4;
  
  bVar1 = *(byte *)(in_ECX + 0x12);
  if (((bVar1 & 1) != 0) &&
     (DSOUND__CMcpxStream_Flush(0),
     (char)((char)((int)(*(byte *)(*(int *)(in_ECX + 0x88) + 0xe) - 1) >> 1) + '\x01') !=
     *(char *)(in_ECX + 100))) {
    FUN_00316b69();
  }
  iVar3 = FUN_003175fd();
  if (iVar3 < 0) {
    return;
  }
  iVar3 = *(int *)(in_ECX + 0x88);
  if (*(short *)(iVar3 + 0xc) == 1) {
    cVar2 = *(char *)(iVar3 + 0xf);
    if (cVar2 == '\b') {
      *(byte *)(in_ECX + 0x8e) = *(byte *)(in_ECX + 0x8e) & 0xfc;
      goto LAB_00317247;
    }
    if (cVar2 != '\x10') {
      if (cVar2 == ' ') {
        *(byte *)(in_ECX + 0x8e) = *(byte *)(in_ECX + 0x8e) | 3;
      }
      goto LAB_00317247;
    }
    uVar4 = *(uint *)(in_ECX + 0x8c) & 0xfffdffff | 0x10000;
  }
  else {
    if (*(short *)(iVar3 + 0xc) != 0x69) goto LAB_00317247;
    uVar4 = *(uint *)(in_ECX + 0x8c) & 0xfffeffff | 0x20000;
  }
  *(uint *)(in_ECX + 0x8c) = uVar4;
LAB_00317247:
  *(uint *)(in_ECX + 0x8c) =
       *(uint *)(in_ECX + 0x8c) ^
       ((*(byte *)(iVar3 + 0xe) - 1) * 0x40000 ^ *(uint *)(in_ECX + 0x8c)) & 0x7c0000;
  if (*(byte *)(iVar3 + 0xe) < 2) {
    uVar4 = *(uint *)(in_ECX + 0x8c) & 0xff7fffff;
  }
  else {
    uVar4 = *(uint *)(in_ECX + 0x8c) | 0x800000;
  }
  *(uint *)(in_ECX + 0x8c) = uVar4;
  if ((bVar1 & 1) == 0) {
    return;
  }
  FUN_0031841f();
  return;
}
