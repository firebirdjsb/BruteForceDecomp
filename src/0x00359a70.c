/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6C22FFA523003C0E23E1D0556AE0D46E2B54E7D2E8EDAD8398620CD0F870B278
 * Entry: 0x00359a70, Ghidra index: 13169, label: FUN_00359a70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004b1690;
void FUN_00359a70(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  if (param_1 != 0) {
    if (param_2 == 0) {
      param_2 = 1;
    }
    *(undefined4 *)(param_1 + 0x138) = 1;
    if (*(uint *)(param_1 + 8) < param_2) {
      param_2 = *(uint *)(param_1 + 8);
    }
    uVar2 = param_2;
    if (((param_3 & 2) == 0) && (*(int *)(param_1 + 0x2f8) != 0)) {
      uVar2 = (*(int *)(param_1 + 0x14) + -1 + *(uint *)(param_1 + 0x18)) /
              *(uint *)(param_1 + 0x18);
      if (uVar2 < param_2) {
        uVar2 = param_2 - uVar2;
      }
      else {
        uVar2 = 1;
      }
    }
    if (*(uint *)(param_1 + 0xc) != param_2) {
      if (((param_3 & 1) != 0) && ((param_3 & 2) != 0)) {
        FUN_003571b0();
        *(undefined4 *)(param_1 + 0x138) = 0;
        return;
      }
      uVar3 = param_2;
      if ((param_3 & 1) == 0) {
        uVar3 = FUN_00358cb0(param_1,param_2,0);
      }
      if (uVar2 < uVar3) {
        iVar4 = *(int *)(param_1 + 0x2a4);
        *(undefined4 *)(param_1 + 0x2a4) = 0;
      }
      else {
        iVar4 = 0;
        uVar2 = uVar3;
      }
      if (((*(uint *)(param_1 + 0xc) <= param_2) && (uVar2 <= *(uint *)(param_1 + 0xc))) ||
         (FUN_003571b0(), uVar2 != param_2)) {
        FUN_0035ada0(DAT_004b1690,param_1 + 0x34c);
        iVar1 = *(int *)(param_1 + 0x2a0);
        if (iVar1 != 0) {
          FUN_00359140(param_1,0);
        }
        if (*(int *)(param_1 + 0xc) != *(int *)(param_1 + 0x2ec)) {
          FUN_003592c0(param_1);
          *(undefined4 *)(param_1 + 0x304) = 1;
        }
        FUN_003598d0(param_1);
        uVar2 = *(uint *)(param_1 + 0xc);
        while (uVar2 != param_2) {
          if ((iVar4 != 0) && (*(uint *)(param_1 + 0xc) == uVar3)) {
            *(undefined4 *)(param_1 + 0x2a4) = 1;
            iVar4 = 0;
          }
          FUN_003592c0(param_1);
          *(undefined4 *)(param_1 + 0x304) = 1;
          FUN_003598d0(param_1);
          uVar2 = *(uint *)(param_1 + 0xc);
        }
        *(undefined4 *)(param_1 + 0x280) = 0;
        if (iVar4 != 0) {
          *(undefined4 *)(param_1 + 0x2a4) = 1;
        }
        FUN_0035ae30(DAT_004b1690,param_1 + 0x34c);
        if (iVar1 != 0) {
          FUN_00359140(param_1,1);
        }
      }
    }
    *(undefined4 *)(param_1 + 0x138) = 0;
  }
  return;
}
