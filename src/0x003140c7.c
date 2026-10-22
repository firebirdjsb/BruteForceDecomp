/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 60021F13B6FF5BB15C830AEB7639FEA8840987E0D6DB28E35FCEF01F1D8E4335
 * Entry: 0x003140c7, Ghidra index: 12047, label: FUN_003140c7
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003869f8;
int FUN_003140c7(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)FUN_003118df(0xc4);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[1] = 1;
    *puVar1 = &PTR_FUN_003869f8;
  }
  iVar3 = (-(uint)(puVar1 != (undefined4 *)0x0) & 0x7ff8fff2) + 0x8007000e;
  *(undefined4 **)(param_1 + 0x20) = puVar1;
  if (-1 < iVar3) {
    iVar3 = FUN_00314069(param_2);
    if (-1 < iVar3) {
      iVar3 = FUN_003118df(0x1a0);
      if (iVar3 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = FUN_00316c07(*(undefined4 *)(*(int *)(param_1 + 0xc) + 0xc),
                             *(undefined4 *)(param_1 + 0x20));
      }
      iVar3 = (-(uint)(iVar2 != 0) & 0x7ff8fff2) + 0x8007000e;
      *(int *)(param_1 + 0x24) = iVar2;
      if (-1 < iVar3) {
        iVar3 = FUN_00316743();
        if (-1 < iVar3) {
          FUN_00312e7f(param_1 + 4,*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x20));
        }
      }
    }
  }
  return iVar3;
}
