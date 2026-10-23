/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CFD6F249C5DB0D09AE3FC735B9BEF67A0ACBE0450889A95A567358C24DDA7172
 * Entry: 0x00351028, Ghidra index: 13059, label: FUN_00351028
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00351028(char param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int in_ECX;
  
  if (param_1 == '\x13') {
    cVar1 = *(char *)(in_ECX + 0xa33);
    *(char *)(in_ECX + 0xa32) = cVar1;
    *(char *)(in_ECX + 0xa33) = cVar1 + '\x01';
    iVar3 = *(int *)(in_ECX + 0xa3c);
    *(undefined1 *)(in_ECX + 0xa30) = 1;
    *(undefined2 *)(in_ECX + 0xa36) = 0x5d4;
    if (iVar3 == 0) {
      iVar3 = FUN_0034c812();
    }
    *(byte *)(in_ECX + 0xa31) = *(byte *)(in_ECX + 0xa31) & 0xf0;
    *(int *)(in_ECX + 0xa3c) = iVar3;
    *(undefined1 *)(in_ECX + 0xa34) = 0;
    *(uint *)(in_ECX + 0xa70) = *(uint *)(in_ECX + 0xa70) & 0xf0001fff | 0x1000;
  }
  if (param_1 == '\x14') {
    if ((*(byte *)(in_ECX + 0xa31) & 0xc) != 0) {
      bVar2 = *(byte *)(in_ECX + 0xa31) & 4;
      *(char *)(in_ECX + 0xa34) = (bVar2 == 0) + '\x01';
      *(uint *)(in_ECX + 0xa70) =
           (-(uint)(bVar2 != 0) & 0xffffc000) + 0x8000 | *(uint *)(in_ECX + 0xa70) & 0xf0002fff |
           0x2000;
      goto LAB_003510e2;
    }
    *(undefined1 *)(in_ECX + 0xa34) = 3;
    param_1 = '\x15';
LAB_003510e8:
    cVar1 = *(char *)(in_ECX + 0xa33);
    *(char *)(in_ECX + 0xa32) = cVar1;
    *(char *)(in_ECX + 0xa33) = cVar1 + '\x01';
    *(undefined1 *)(in_ECX + 0xa35) = 1;
    *(uint *)(in_ECX + 0xa70) = *(uint *)(in_ECX + 0xa70) & 0xf0003fff | 0x3000;
    if ((*(byte *)(in_ECX + 0x8c4) & 0x40) == 0) goto LAB_00351162;
    *(byte *)(in_ECX + 0xa31) = *(byte *)(in_ECX + 0xa31) | 0x60;
  }
  else {
LAB_003510e2:
    if (param_1 == '\x15') goto LAB_003510e8;
  }
  if (param_1 == '\x16') {
    if (*(int *)(in_ECX + 0x8e8) == 0) {
      *(ushort *)(in_ECX + 0xa72) = *(ushort *)(in_ECX + 0xa72) | 0x8080;
      param_1 = '\0';
    }
    if (*(int *)(in_ECX + 0x8f0) == 0) {
      iVar3 = *(int *)(in_ECX + 0x8f4);
      *(int *)(in_ECX + 0x8f0) = iVar3;
      *(int *)(in_ECX + 0x8f4) = 0;
      if (iVar3 == 0) {
        *(byte *)(in_ECX + 0xa73) = *(byte *)(in_ECX + 0xa73) | 1;
      }
    }
  }
LAB_00351162:
  FUN_00350db4(param_1,0);
  return;
}
