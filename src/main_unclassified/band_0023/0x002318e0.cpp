/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E4F8B9F3B25873EF12A18E8C4EEDE2A03DAD260FFEFB173F796151269A965BEE
 * Entry: 0x002318e0, Ghidra index: 7755, label: FUN_002318e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469aac;
extern uint32_t _DAT_003bc6c0;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_002318e0(int param_1)

{
  int iVar1;
  char in_AL;
  int unaff_EDI;
  float10 fVar2;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  float local_4c;
  float local_48;
  float local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  undefined4 local_8 [2];
  
  if ((*(int **)(unaff_EDI + 0x44) != (int *)0x0) && (in_AL != '\0')) {
    local_1c = *(undefined4 *)(unaff_EDI + 0x3c);
    local_4c = -*(float *)(unaff_EDI + 0x10);
    local_40 = 0;
    local_30 = 0;
    local_20 = 0;
    local_18 = 0;
    local_c = *(int *)(DAT_00469aac + 0xbd8) + 0xc + *(int *)(unaff_EDI + 0x54) * 0x14;
    local_2c = *(undefined4 *)(unaff_EDI + 4);
    local_48 = -*(float *)(unaff_EDI + 0x14);
    local_24 = *(undefined4 *)(unaff_EDI + 0xc);
    local_44 = -*(float *)(unaff_EDI + 0x18);
    local_28 = *(undefined4 *)(unaff_EDI + 8);
    local_3c = *(undefined4 *)(unaff_EDI + 0x1c);
    local_38 = *(undefined4 *)(unaff_EDI + 0x20);
    local_34 = *(undefined4 *)(unaff_EDI + 0x24);
    local_8[0] = 0;
    local_14 = 0;
    local_10 = 0;
    (**(code **)(**(int **)(unaff_EDI + 0x44) + 0xa8))(unaff_EDI + 0x10,&local_4c,1);
    local_8[0] = 0;
    (**(code **)(**(int **)(unaff_EDI + 0x44) + 0xc4))(local_8);
    iVar1 = *(int *)(*(int *)(*(int *)(unaff_EDI + 0x44) + 0xc) + 4);
    if (((iVar1 != 2) && (((iVar1 != 0x1a && (iVar1 != 0x1f)) && (iVar1 != 3)))) && (param_1 != 0))
    {
      uStack_54 = *(undefined4 *)(unaff_EDI + 0xc);
      uStack_58 = *(undefined4 *)(unaff_EDI + 8);
      uStack_5c = *(undefined4 *)(unaff_EDI + 4);
      uStack_50 = 0;
      uStack_60 = 0;
      if (*(int *)(param_1 + 0x1b0) != 0) {
        FUN_0014ab50();
      }
      fVar2 = (float10)FUN_0022c940();
      fVar2 = fVar2 * (float10)_DAT_003bc6c0;
      if (*(char *)(*(int *)(param_1 + 0x228) + 0x6c) != '\0') {
        fVar2 = fVar2 * (float10)3.0;
      }
      fStack_6c = (float)(fVar2 * (float10)*(float *)(unaff_EDI + 0x1c));
      fStack_68 = (float)(fVar2 * (float10)*(float *)(unaff_EDI + 0x20));
      fStack_64 = (float)(fVar2 * (float10)*(float *)(unaff_EDI + 0x24));
      FUN_002b3bc0(&uStack_5c,&fStack_6c);
    }
  }
  (**(code **)(*(int *)(*(int *)(param_1 + 0xc) + 0x1d4) + 8))(*(undefined4 *)(param_1 + 8));
  return 1;
}
