/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 29ECD73147743BCF66C16FCFA3AE6BD31060C93B81DF92F2A57AB130BFEB8976
 * Entry: 0x00225130, Ghidra index: 7628, label: FUN_00225130
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469940;
void FUN_00225130(byte *param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  int iStack_4;
  
  if (*(int *)(param_2 + 100) != 0) {
    cVar1 = (**(code **)(*DAT_00469940 + 0x2c))(*(int *)(param_2 + 100));
    if ((cVar1 != '\0') && ((*param_1 & 4) == 0)) {
      uVar2 = *(undefined4 *)(param_1 + 100);
      (**(code **)(*DAT_00469940 + 0x40))(uVar2,param_1 + 4);
      fStack_10 = *(float *)(iStack_4 + 0x1c);
      fStack_18 = fStack_10 * *(float *)(iStack_4 + 0x10);
      fStack_14 = fStack_10 * (float)*(undefined8 *)(iStack_4 + 0x14);
      fStack_10 = fStack_10 * (float)((ulonglong)*(undefined8 *)(iStack_4 + 0x14) >> 0x20);
      (**(code **)(*DAT_00469940 + 0x44))
                (*(undefined4 *)(iStack_4 + 100),&fStack_18,uVar2,fStack_10,fStack_14);
      return;
    }
    (**(code **)(*DAT_00469940 + 0x20))(*(undefined4 *)(param_1 + 100),1);
    *(undefined4 *)(iStack_4 + 100) = 0;
  }
  return;
}
