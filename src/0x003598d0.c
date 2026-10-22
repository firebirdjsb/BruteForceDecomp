/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 706F9423ABE32B0522E403A0DD735FB10AB94A397F9CC1DB4F0F06256F98E4F6
 * Entry: 0x003598d0, Ghidra index: 13168, label: FUN_003598d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004b168c;
extern uint32_t DAT_004b1690;
void FUN_003598d0(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  bVar1 = false;
  if (param_1 != 0) {
    uVar4 = 0;
    *(undefined4 *)(param_1 + 0x138) = 1;
    *(undefined4 *)(param_1 + 0x138) = 0;
    if (*(int *)(param_1 + 0x2f8) != 0) {
      iVar3 = 0;
      do {
        if (*(int *)(*(int *)(param_1 + 0x300) + 0x5c + iVar3) != 0) {
          *(undefined4 *)(*(int *)(param_1 + 0x300) + 0x5c + iVar3) = 0;
          if ((1 < *(uint *)(param_1 + 0xc)) &&
             ((int)*(uint *)(param_1 + 0xc) <= *(int *)(*(int *)(param_1 + 0x300) + 0x48 + iVar3)))
          {
            bVar1 = true;
          }
        }
        uVar2 = DAT_004b168c;
        uVar4 = uVar4 + 1;
        iVar3 = iVar3 + 0x178;
      } while (uVar4 < *(uint *)(param_1 + 0x2f8));
      if (bVar1) {
        *(int *)(param_1 + 0x2fc) = *(int *)(param_1 + 0x2fc) + 1;
        FUN_0035add0(DAT_004b1690,param_1 + 0x34c,uVar2,param_1 + 0x20c);
        FUN_00359140(param_1,0);
        if ((uint)((*(int *)(param_1 + 0x158) + 1) * 100) / (*(int *)(param_1 + 0x154) + 1U) < 0x5a)
        {
          do {
            iVar3 = (**(code **)(param_1 + 0x120))(param_1 + 0x110);
            if (iVar3 == 0) break;
          } while ((uint)((*(int *)(param_1 + 0x158) + 1) * 100) / (*(int *)(param_1 + 0x154) + 1U)
                   < 0x5a);
        }
        *(undefined4 *)(param_1 + 0x280) = 0;
        *(undefined4 *)(param_1 + 0x338) = 0;
        FUN_00359140(param_1,1);
        FUN_0035ae30(DAT_004b1690,param_1 + 0x34c);
        FUN_0035ae30(DAT_004b168c,param_1 + 0x20c);
      }
    }
    *(undefined4 *)(param_1 + 0x138) = 1;
    if (*(int *)(param_1 + 0x2f8) != 0) {
      FUN_00356f00(param_1);
    }
    iVar3 = FUN_0035b1a0();
    if (*(int *)(param_1 + 0x27c) != 0) {
      *(int *)(param_1 + 0x2b4) = *(int *)(param_1 + 0x2b4) + (iVar3 - *(int *)(param_1 + 0x27c));
      *(undefined4 *)(param_1 + 0x27c) = 0;
    }
    if (*(uint *)(param_1 + 8) <= *(uint *)(param_1 + 0xc)) {
      FUN_003571b0();
      *(undefined4 *)(param_1 + 0x138) = 0;
      return;
    }
    FUN_003571b0();
    *(undefined4 *)(param_1 + 0x138) = 0;
  }
  return;
}
