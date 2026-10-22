/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 21F82EB7F603C14676941DC05D4E431F7A781625C65EE22FAA881B71AA20B592
 * Entry: 0x00106d10, Ghidra index: 3366, label: FUN_00106d10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
/* WARNING: Type propagation algorithm not settling */

void FUN_00106d10(int param_1)

{
  char cVar1;
  int ****ppppiVar2;
  char unaff_BP;
  int ***pppiVar3;
  float10 fVar4;
  undefined4 ****ppppuStack_f0;
  int ***pppiStack_e4;
  int ***pppiStack_e0;
  undefined1 auStack_dc [220];
  
  (**(code **)(**(int **)(DAT_00469b58 + 8) + 0xa4))();
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x48) != 0) {
      pppiStack_e4 = (int ***)0x0;
      pppiStack_e0 = (undefined4 ***)0x0;
      auStack_dc[0] = 0;
      ppppuStack_f0 = &pppiStack_e4;
      (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x1dc))(*(int *)(param_1 + 0x48));
      pppiVar3 = (int ***)0x0;
      pppiStack_e0 = (int ***)0x0;
      FUN_00106660();
      cVar1 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x1d0))(auStack_dc);
      if (cVar1 != '\0') {
        pppiStack_e4 = pppiStack_e0;
        fVar4 = (float10)FUN_00106860(&pppiStack_e0);
        pppiVar3 = (int ***)(int)fVar4;
        pppiStack_e4 = pppiVar3;
      }
      ppppiVar2 = &pppiStack_e4;
      if ((int)pppiVar3 <= (int)ppppuStack_f0) {
        ppppiVar2 = (int ****)&ppppuStack_f0;
      }
      ppppuStack_f0 = (undefined4 ****)*ppppiVar2;
      if (-1 < unaff_BP) {
        (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x1d4))();
      }
      (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x1d8))();
      FUN_00106a80();
      FUN_00106b10();
      (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x1e0))
                (*(undefined4 *)(param_1 + 0x48),&ppppuStack_f0);
    }
    (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x1f8))();
  }
  return;
}
