/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FD57E4F28BB477301F12FFA675E0717269E29E10E2B3FE0C064976650C86F1DA
 * Entry: 0x002fe2fd, Ghidra index: 11018, label: FUN_002fe2fd
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002fe2fd(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if ((*(uint *)(param_1 + 4) & 0x66) != 0) {
    *(undefined4 *)(param_2 + 0x24) = 1;
    return 1;
  }
  ___InternalCxxFrameHandler
            (param_1,*(undefined4 *)(param_2 + 0xc),param_3,0,*(undefined4 *)(param_2 + 8),
             *(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x14),1);
  if (*(int *)(param_2 + 0x24) == 0) {
    __UnwindNestedFrames__YGXPAUEHRegistrationNode__PAUEHExceptionRecord___Z(param_2,param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x002fe365. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(param_2 + 0x18))();
  return uVar1;
}
