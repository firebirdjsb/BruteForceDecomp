/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2DD0E92B12520237C622A5B6270F339B3395AC010E4F013C25A95E4143E4F479
 * Entry: 0x00101ef0, Ghidra index: 3258, label: FUN_00101ef0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
extern uint32_t DAT_0046d064;
uint FUN_00101ef0(undefined4 param_1)

{
  int *in_EAX;
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  uint unaff_EBP;
  int unaff_ESI;
  uint uStack_30;
  int aiStack_2c [2];
  undefined4 uStack_24;
  undefined1 auStack_1c [4];
  undefined4 uStack_18;
  uint uStack_10;
  undefined4 uStack_8;
  uint uStack_4;
  
  uStack_30 = (uint)(uint3)uStack_30;
  if (in_EAX != (int *)0x0) {
    iVar1 = (**(code **)(*in_EAX + 4))();
    if (iVar1 == 4) {
      iVar1 = in_EAX[1];
      uVar4 = *(undefined4 *)(iVar1 + 4);
      uStack_4 = 7;
      uStack_8 = 0;
      /* 0x00101F37 MOV WORD PTR [ESP+0x34],BX (BX=0): clear only the low 16 bits.\n       * Guest stack high 16 bits remain unknown (ABI_UNVERIFIED). */\n      uStack_18 &= UINT32_C(0xffff0000);
      FUN_00087940(auStack_1c,0,0xffffffff);
      puVar2 = uStack_18;
      if (uStack_4 < 8) {
        puVar2 = &uStack_18;
      }
      (**(code **)(**(int **)(DAT_00469b58 + 8) + 400))(aiStack_2c,puVar2,param_1);
      if (unaff_ESI == DAT_0046d064) {
        unaff_EBP = 0x1000000;
      }
      else if (unaff_ESI == -0x2f30a58) {
        FUN_00101c80();
      }
      else {
        uStack_30 = 0;
        piVar3 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
        aiStack_2c[0] = *piVar3;
        uVar4 = FUN_001e97c0(uVar4,*(undefined4 *)(iVar1 + 0x60),0);
        uVar4 = FUN_001e97c0(uVar4);
        (**(code **)(aiStack_2c[0] + 0x34))(&uStack_30,uVar4);
      }
      if (7 < uStack_10) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(uStack_24);
      }
      return unaff_EBP >> 0x18;
    }
  }
  return 0;
}
