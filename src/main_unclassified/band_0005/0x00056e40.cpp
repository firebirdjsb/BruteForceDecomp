/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 026CA878934BCF7208AEE112A1E3FBD1DD4D176D0F7C5E11E8EB640C6F322E35
 * Entry: 0x00056e40, Ghidra index: 842, label: FUN_00056e40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046cfd8;
extern uint32_t PTR_FUN_003a3f80;
void FUN_00056e40(int param_1,int param_2)

{
  int iVar1;
  int unaff_ESI;
  float10 fVar2;
  undefined **local_1c [2];
  int local_14;
  int local_c;
  float local_4;
  
  iVar1 = param_2;
  if (param_1 != param_2) {
    FUN_00056d50(param_1,param_2);
    FUN_000581f0(&param_2,*(undefined4 *)(unaff_ESI + 4),*(undefined4 *)(unaff_ESI + 8),local_1c,0);
    if (((param_2 == *(int *)(unaff_ESI + 8)) || (*(int *)(param_2 + 8) != local_14)) ||
       (*(int *)(param_2 + 0x10) != local_c)) {
      *(int *)(unaff_ESI + 0x1c) = *(int *)(unaff_ESI + 0x1c) + 1;
      fVar2 = (float10)FUN_00057890(unaff_ESI);
      DAT_0046cfd8 = DAT_0046cfd8 * 0x19660d + 0x3c6ef35f;
      local_4 = (float)(((float10)(float)(DAT_0046cfd8 >> 9 | 0x3f800000) - (float10)1.0) *
                        (float10)*(int *)(unaff_ESI + 0x1c) * (float10)0.086666666 + fVar2);
      FUN_00057d20(&param_2,param_2,local_1c);
      *(short *)(param_1 + 0x72) = *(short *)(param_1 + 0x72) + 1;
      *(short *)(iVar1 + 0x72) = *(short *)(iVar1 + 0x72) + 1;
    }
    local_1c[0] = &PTR_FUN_003a3f80;
    if (local_c != 0) {
      FUN_0008f6e0();
    }
    if (local_14 != 0) {
      FUN_0008f6e0();
    }
  }
  return;
}
