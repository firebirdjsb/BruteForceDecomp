/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DC57ACB54057DE486AFDF3E84ADF274B7B8DAC5465C1DAE86D1D3D42B2D705BB
 * Entry: 0x001304b0, Ghidra index: 3824, label: FUN_001304b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040017c;
extern uint32_t *DAT_00469908;
void FUN_001304b0(void)

{
  char *in_EAX;
  int iVar1;
  undefined4 ***pppuVar2;
  int *unaff_EDI;
  int *piVar3;
  int local_40 [3];
  undefined4 local_34;
  undefined4 uStack_28;
  uint local_20;
  undefined4 **local_18;
  uint uStack_14;
  undefined4 local_8;
  uint local_4;
  
  if ((in_EAX != (char *)0x0) && (*in_EAX != '\0')) {
    local_4 = 0xf;
    local_8 = 0;
    local_18 = (undefined4 **)((uint)local_18 & 0xffffff00);
    FUN_0001fe90(in_EAX);
    FUN_0001f4f0(&DAT_0040017c,0,0xffffffff);
    FUN_001e8a20();
    FUN_000784c0(0);
    FUN_000784c0(0);
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(local_34);
    }
    local_40[0] = 0;
    local_40[1] = 0;
    pppuVar2 = (undefined4 ***)local_18;
    if (local_4 < 0x10) {
      pppuVar2 = &local_18;
    }
    piVar3 = local_40;
    iVar1 = (**(code **)(*DAT_00469908 + 0xc))(DAT_00469908,pppuVar2,0x80000000);
    if (-1 < iVar1) {
      iVar1 = FUN_0019cee0(&stack0xffffffb4);
      if (-1 < iVar1) {
        local_40[0] = 0;
        local_40[1] = 0;
        iVar1 = FUN_0023a790(0x12d0dbe5,1);
        if (iVar1 != 0) {
          FUN_00135270();
        }
        FUN_00131f80();
      }
      if (unaff_EDI != (int *)0x0) {
        (**(code **)(*unaff_EDI + 8))(unaff_EDI);
      }
    }
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))(piVar3);
    }
    if (0xf < uStack_14) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(uStack_28);
    }
  }
  return;
}
