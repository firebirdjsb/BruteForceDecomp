/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C6695C855C765885DAAEE5360DE431F47C4D6A377A0132DB74A973B6F8A864AB
 * Entry: 0x002e01e0, Ghidra index: 10350, label: FUN_002e01e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040e864;
int FUN_002e01e0(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int in_ECX;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 local_24 [9];
  
  *(undefined4 *)(in_ECX + 0x40) = 0;
  *(undefined4 *)(in_ECX + 0x54) = 0;
  *(undefined4 *)(in_ECX + 0x68) = 0;
  *(undefined4 *)(in_ECX + 0x7c) = 0;
  iVar2 = FUN_002e4060(1);
  if (iVar2 < 0) {
    return iVar2;
  }
  FUN_002e3f50();
  *(undefined4 *)(in_ECX + 0x638) = 0;
  *(undefined4 *)(in_ECX + 0xf0) = 0x518;
  uVar3 = thunk_FUN_002ea01d(0x518);
  *(undefined4 *)(in_ECX + 0xfc) = uVar3;
  iVar2 = thunk_FUN_002ea01d(*(undefined4 *)(in_ECX + 0xf0));
  *(int *)(in_ECX + 0x100) = iVar2;
  if ((*(int *)(in_ECX + 0xfc) == 0) || (iVar2 == 0)) {
    return -0x7ff8fff2;
  }
  iVar4 = thunk_FUN_002ea01d(*(undefined4 *)(in_ECX + 0xf0));
  iVar2 = param_1;
  *(int *)(in_ECX + 0x104) = iVar4;
  if (iVar4 == 0) {
    return -0x7ff8fff2;
  }
  *(undefined1 *)(in_ECX + 0x9d) = 0;
  puVar7 = (undefined4 *)(in_ECX + 0x9e);
  for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  iVar4 = *(int *)(in_ECX + 0xf0);
  *(int *)(in_ECX + 0xf4) = iVar4 + -4;
  *(int *)(in_ECX + 0xf8) = iVar4 + -0xe;
  if (*(char *)(param_1 + 0x2d) != '\0') {
    *(int *)(in_ECX + 0xf8) = iVar4 + -0xf;
  }
  iVar5 = *(int *)(param_1 + 4) + -1;
  *(int *)(in_ECX + 0x124) = iVar5;
  uVar3 = thunk_FUN_002ea01d(iVar5 * (iVar4 + -4));
  *(undefined4 *)(in_ECX + 0x108) = uVar3;
  uVar3 = thunk_FUN_002ea01d(*(int *)(in_ECX + 0x124) * *(int *)(iVar2 + 8));
  *(undefined4 *)(in_ECX + 0x10c) = uVar3;
  uVar3 = thunk_FUN_002ea01d(*(int *)(iVar2 + 0x10) * *(int *)(in_ECX + 0x124) * 0xc);
  *(undefined4 *)(in_ECX + 0x110) = uVar3;
  uVar3 = thunk_FUN_002ea01d(*(int *)(in_ECX + 0x124) * *(int *)(iVar2 + 0xc));
  *(undefined4 *)(in_ECX + 0x114) = uVar3;
  iVar4 = thunk_FUN_002ea01d(*(int *)(iVar2 + 0x10) * *(int *)(in_ECX + 0x124) * 0xc);
  *(int *)(in_ECX + 0x118) = iVar4;
  if ((((*(int *)(in_ECX + 0x108) != 0) && (*(int *)(in_ECX + 0x10c) != 0)) &&
      (*(int *)(in_ECX + 0x110) != 0)) && ((*(int *)(in_ECX + 0x114) != 0 && (iVar4 != 0)))) {
    iVar4 = thunk_FUN_002ea01d(*(int *)(in_ECX + 0x124) * 0x7c8);
    *(int *)(in_ECX + 0x128) = iVar4;
    if (iVar4 != 0) {
      uVar6 = 0;
      *(undefined4 *)(in_ECX + 300) = *(undefined4 *)(iVar2 + 0x10);
      if (*(int *)(in_ECX + 0x124) != 0) {
        param_1 = 0;
        do {
          if (*(int *)(in_ECX + 0x128) + param_1 != 0) {
            iVar4 = *(int *)(iVar2 + 0x10) * uVar6 * 0xc;
            FUN_002e3e00(*(int *)(in_ECX + 0xf4) * uVar6 + *(int *)(in_ECX + 0x108),
                         *(int *)(iVar2 + 8),*(int *)(iVar2 + 0xc),*(int *)(iVar2 + 0x10),
                         *(int *)(iVar2 + 8) * uVar6 + *(int *)(in_ECX + 0x10c),
                         *(int *)(in_ECX + 0x110) + iVar4,
                         *(int *)(iVar2 + 0xc) * uVar6 + *(int *)(in_ECX + 0x114),
                         *(int *)(in_ECX + 0x118) + iVar4);
          }
          uVar6 = uVar6 + 1;
          param_1 = param_1 + 0x7c8;
        } while (uVar6 < *(uint *)(in_ECX + 0x124));
      }
      uVar6 = *(uint *)(iVar2 + 8);
      if (*(uint *)(iVar2 + 8) <= *(uint *)(iVar2 + 0xc)) {
        uVar6 = *(uint *)(iVar2 + 0xc);
      }
      DAT_0040e864 = thunk_FUN_002ea01d(uVar6);
      if (DAT_0040e864 != 0) {
        iVar4 = FUN_002e3500(2);
        if (iVar4 < 0) {
          return iVar4;
        }
        FUN_002e3560(0,1000);
        uVar3 = FUN_000a3d50();
        iVar4 = FUN_002e3070(uVar3);
        if (iVar4 < 0) {
          return iVar4;
        }
        local_24[0] = 1;
        iVar4 = FUN_002e3100(0x8004667e,local_24);
        if (iVar4 < 0) {
          return iVar4;
        }
        *(undefined1 *)(in_ECX + 0xc2) = 0;
        cVar1 = *(char *)(iVar2 + 0x2c);
        *(char *)(in_ECX + 0x9c) = cVar1;
        if (cVar1 != '\0') {
          iVar4 = FUN_002e3500(1);
          if (iVar4 < 0) {
            return iVar4;
          }
          FUN_002e3560(0,0x3ea);
          uVar3 = FUN_000a3d50();
          iVar4 = FUN_002e3070(uVar3);
          if (iVar4 < 0) {
            return iVar4;
          }
          param_1 = 1;
          iVar4 = FUN_002e3100(0x8004667e,&param_1);
          if (iVar4 < 0) {
            return iVar4;
          }
          FUN_002e3140(0x20);
        }
        *(undefined4 *)(in_ECX + 0x11c) = *(undefined4 *)(iVar2 + 0x14);
        *(undefined4 *)(in_ECX + 0x120) = *(undefined4 *)(iVar2 + 0x18);
        *(undefined4 *)(in_ECX + 0x38) = *(undefined4 *)(iVar2 + 0x24);
        *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(iVar2 + 0x24);
        *(undefined4 *)(in_ECX + 0x3c) = *(undefined4 *)(iVar2 + 0x20);
        *(undefined4 *)(in_ECX + 0x30) = *(undefined4 *)(iVar2 + 0x28);
        *(undefined1 *)(in_ECX + 0x630) = *(undefined1 *)(iVar2 + 0x2d);
        *(undefined4 *)(in_ECX + 0x634) = *(undefined4 *)(iVar2 + 0x30);
        *(undefined1 *)(in_ECX + 4) = 1;
        return 0;
      }
    }
  }
  return -0x7ff8fff2;
}
