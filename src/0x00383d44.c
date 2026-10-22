/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5B98E6C167274C9B6E18936FB398B92D6BB718F74100EB4C05390F0CED31FE56
 * Entry: 0x00383d44, Ghidra index: 13635, label: FUN_00383d44
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Address-tied callee source: FUN_00384491; callback ABI remains ABI_UNVERIFIED.
 * Provisional C11 declaration only; not a verified link/runtime contract. */
extern void FUN_00384491(undefined4 param_1,undefined4 param_2);
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00412868;
extern uint32_t DAT_00412870;
extern uint32_t DAT_004128b4;
void FUN_00383d44(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined2 uVar7;
  
  iVar5 = FUN_00380fc4();
  uVar4 = *(ushort *)(iVar5 + 0x3a);
  if ((uVar4 & 0x10) == 0) {
    if ((uVar4 & 1) == 0) {
      if ((uVar4 & 2) == 0) {
        if ((uVar4 & 4) == 0) {
          if ((uVar4 & 8) == 0) {
            *(undefined2 *)(iVar5 + 0x3a) = 0;
            FUN_00384491(iVar5 + 8,param_1);
            return;
          }
          uVar4 = uVar4 & 0xfff7;
          uVar7 = 0x13;
        }
        else {
          uVar4 = uVar4 & 0xfffb;
          uVar7 = 0x12;
        }
      }
      else {
        uVar4 = uVar4 & 0xfffd;
        uVar7 = 0x11;
      }
      *(ushort *)(iVar5 + 0x3a) = uVar4;
    }
    else {
      cVar1 = *(char *)(iVar5 + 3);
      bVar3 = '\x01' << (cVar1 - 1U & 0x1f);
      if ((*(byte *)(iVar5 + 0x38) & 1) != 0) {
        if ((*(byte *)(iVar5 + 5) & bVar3) != 0) {
          FUN_003824fa(cVar1);
        }
        FUN_00383bdd(param_1);
        return;
      }
      if ((bVar3 & *(byte *)(iVar5 + 5)) != 0) {
        *(byte *)(iVar5 + 5) = ~bVar3 & *(byte *)(iVar5 + 5);
        FUN_003824fa(cVar1);
      }
      *(byte *)(iVar5 + 0x3a) = *(byte *)(iVar5 + 0x3a) & 0xfe;
      uVar7 = 0x10;
    }
  }
  else {
    if ((DAT_004128b4 == 1) && (DAT_00412868 != 0)) {
      uVar6 = 0;
      KeCancelTimer(&DAT_00412870);
      iVar2 = DAT_00412868;
      uVar4 = *(ushort *)(iVar5 + 0x38);
      if (((uVar4 & 2) == 0) || ((uVar4 & 0x10) != 0)) {
        uVar6 = 0x80000600;
      }
      else if ((uVar4 & 0x200) != 0) {
        uVar6 = 0x1000000;
      }
      DAT_00412868 = 0;
      thunk_FUN_00382218(uVar6,iVar2);
    }
    *(byte *)(iVar5 + 0x3a) = *(byte *)(iVar5 + 0x3a) & 0xef;
    uVar7 = 0x14;
  }
  *(undefined2 *)(iVar5 + 0x32) = uVar7;
  *(ushort *)(iVar5 + 0x34) = (ushort)*(byte *)(iVar5 + 3);
  *(undefined1 *)(iVar5 + 8) = 0x30;
  *(undefined1 *)(iVar5 + 9) = 0x40;
  *(code **)(iVar5 + 0x10) = FUN_00384491;
  *(undefined4 *)(iVar5 + 0x14) = param_1;
  *(undefined4 *)(iVar5 + 0x18) = 0;
  *(undefined4 *)(iVar5 + 0x20) = 0;
  *(undefined4 *)(iVar5 + 0x1c) = 0;
  *(undefined1 *)(iVar5 + 0x24) = 0;
  *(undefined1 *)(iVar5 + 0x25) = 0;
  *(undefined1 *)(iVar5 + 0x26) = 0;
  *(undefined1 *)(iVar5 + 0x30) = 0x23;
  *(undefined1 *)(iVar5 + 0x31) = 1;
  *(undefined2 *)(iVar5 + 0x36) = 0;
  FUN_00381379((undefined1 *)(iVar5 + 8));
  return;
}
