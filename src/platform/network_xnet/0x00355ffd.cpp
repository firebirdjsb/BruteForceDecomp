/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7737400234E4365511859EEF8347DB727C77C43C70F4DA7A627A21400C783E04
 * Entry: 0x00355ffd, Ghidra index: 13135, label: FUN_00355ffd
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00355ffd(void)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int in_ECX;
  undefined4 local_18;
  undefined2 local_14;
  undefined1 local_10;
  undefined1 local_f;
  undefined1 local_e;
  byte local_d;
  undefined1 local_c;
  undefined1 local_b;
  int local_8;
  
  iVar2 = *(int *)(in_ECX + 0x270);
  do {
    if ((iVar2 == 0) || (iVar2 = FUN_0034cff4(), iVar2 == 0)) {
      return;
    }
    piVar3 = (int *)FUN_0034c30c();
    if ((*(byte *)(in_ECX + 2) & 4) == 0) {
      uVar1 = piVar3[2];
      if ((uVar1 & 0x4080000) == 0) {
        local_8 = *(int *)(*piVar3 + -4);
        if ((local_8 != 0) && (((byte)local_8 != 0x7f || (local_8 == 0x100007f)))) {
          if ((local_8 != 0x100007f) && (local_8 != *(int *)(in_ECX + 0x268))) {
            if (local_8 == -1) {
              local_18 = 0xffffffff;
              local_14 = 0xffff;
              puVar4 = &local_18;
            }
            else {
              if (((byte)local_8 & 0xf0) != 0xe0) {
                iVar2 = FUN_00355ca1(local_8,2);
                if (iVar2 != 0) {
                  if (*(short *)(iVar2 + 0x16) == 1) {
                    puVar4 = (undefined4 *)(iVar2 + 0x10);
                    goto LAB_00356096;
                  }
                  if (*(short *)(iVar2 + 0x16) != 2) {
                    FUN_0034c2f0(piVar3);
                    goto LAB_0035612e;
                  }
                }
                goto LAB_00356128;
              }
              local_f = 0;
              local_d = (byte)((uint)local_8 >> 8) & 0x7f;
              local_c = (undefined1)((uint)local_8 >> 0x10);
              local_b = (undefined1)((uint)local_8 >> 0x18);
              local_10 = 1;
              local_e = 0x5e;
              puVar4 = (undefined4 *)&local_10;
            }
LAB_00356096:
            FUN_00355b20(piVar3,puVar4);
            goto LAB_0035612e;
          }
          piVar3[2] = uVar1 & 0xfffc0009 | 0x2000001;
          FUN_0034bd47(piVar3);
          piVar3[2] = piVar3[2] & 0xfdfc0008U | uVar1 & 0x3fff7;
        }
        goto LAB_00356128;
      }
      FUN_0034d2b1(piVar3);
    }
    else {
LAB_00356128:
      (*(code *)piVar3[4])(piVar3);
    }
LAB_0035612e:
    iVar2 = *(int *)(in_ECX + 0x270);
  } while( true );
}
