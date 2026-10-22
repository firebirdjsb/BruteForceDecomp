/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 804A58C27E9285C03F68BD5812E03A2A7A673DC76A2DFA53BC96F97AABD094D2
 * Entry: 0x0022cbe0, Ghidra index: 7698, label: FUN_0022cbe0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046cfe0;
extern uint32_t DAT_0046d064;
undefined4 FUN_0022cbe0(int param_1,int param_2,int *param_3)

{
  int *piVar1;
  int unaff_retaddr;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (*param_3 != DAT_0046d064) {
    local_14 = 0;
    local_18 = 0;
    local_1c = 0;
    local_24 = 0;
    local_28 = 0;
    local_2c = 0;
    local_10 = 0x3f800000;
    local_20 = 0x3f800000;
    local_30 = 0x3f800000;
    local_58 = *(undefined4 *)(param_2 + 0xc);
    local_5c = *(undefined4 *)(param_2 + 8);
    local_c = *(undefined4 *)(param_2 + 4);
    if (*param_3 != DAT_0046d064) {
      local_8 = local_5c;
      local_4 = local_58;
      piVar1 = (int *)FUN_000da800();
      if (piVar1 != (int *)0x0) {
        *(undefined4 *)(piVar1[0x3a] + 0xc) = 0;
        (**(code **)(*piVar1 + 0x44))(&local_30);
        FUN_0021c380(0x3f800000);
        FUN_0021c220(piVar1,param_1 + 0x10);
        (**(code **)(*piVar1 + 0x38))(param_1 + 4);
        FUN_0021c380(param_2);
        *(byte *)(piVar1 + 0x43) =
             *(byte *)(piVar1 + 0x43) ^ ((char)param_3 << 6 ^ *(byte *)(piVar1 + 0x43)) & 0x40;
        if (0.0 < SQRT(*(float *)(unaff_retaddr + 0x24) * *(float *)(unaff_retaddr + 0x24) +
                       *(float *)(unaff_retaddr + 0x20) * *(float *)(unaff_retaddr + 0x20) +
                       *(float *)(unaff_retaddr + 0x1c) * *(float *)(unaff_retaddr + 0x1c))) {
          FUN_0001d0c0();
          (**(code **)(*piVar1 + 0x3c))(&local_5c);
          return 1;
        }
        (**(code **)(*piVar1 + 0x3c))(&DAT_0046cfe0);
        return 1;
      }
    }
  }
  return 0;
}
