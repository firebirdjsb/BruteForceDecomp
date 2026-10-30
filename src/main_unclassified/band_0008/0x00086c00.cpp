/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5BBDF1CE34E966CD37620EF5B5FD9BB2BD8255DCC4CF7E94E85EFFE5D9E8DF4F
 * Entry: 0x00086c00, Ghidra index: 1596, label: FUN_00086c00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern int FUN_00087940(int param_1,uint param_2,uint param_3);

int * FUN_00086c00(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == param_3) {
    *param_1 = param_4;
    return param_1;
  }
  do {
    iVar1 = param_3 + -0x3c;
    iVar2 = param_4 + -0x3c;
    FUN_00087940(iVar2,0,0xffffffff);
    *(undefined4 *)(param_4 + -0x20) = *(undefined4 *)(param_3 + -0x20);
    *(undefined1 *)(param_4 + -0x1c) = *(undefined1 *)(param_3 + -0x1c);
    *(undefined4 *)(param_4 + -0x18) = *(undefined4 *)(param_3 + -0x18);
    *(undefined4 *)(param_4 + -0x14) = *(undefined4 *)(param_3 + -0x14);
    *(undefined4 *)(param_4 + -0x10) = *(undefined4 *)(param_3 + -0x10);
    *(undefined1 *)(param_4 + -0xc) = *(undefined1 *)(param_3 + -0xc);
    *(undefined1 *)(param_4 + -0xb) = *(undefined1 *)(param_3 + -0xb);
    *(undefined1 *)(param_4 + -10) = *(undefined1 *)(param_3 + -10);
    *(undefined1 *)(param_4 + -9) = *(undefined1 *)(param_3 + -9);
    *(undefined1 *)(param_4 + -8) = *(undefined1 *)(param_3 + -8);
    *(undefined4 *)(param_4 + -4) = *(undefined4 *)(param_3 + -4);
    param_3 = iVar1;
    param_4 = iVar2;
  } while (iVar1 != param_2);
  *param_1 = iVar2;
  return param_1;
}
