/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 60CA259FADB045969FF0A88A3F081113CB7A360BDF94B8D039708437AB0FA0B7
 * Entry: 0x000691e0, Ghidra index: 1160, label: FUN_000691e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046995c;
extern uint32_t DAT_00469b60;
void FUN_000691e0(int param_1,float param_2)

{
  int in_ECX;
  
  if ((*(int *)(DAT_0046995c + 0x1c) == 0) || (*(int *)(DAT_0046995c + 0x1c) != 5)) {
    *(undefined1 *)(in_ECX + 0xb8) = 0;
    *(undefined4 *)(in_ECX + 0xb4) = 0;
  }
  else {
    if ((param_1 == 0) || (*(char *)(DAT_0046995c + 0x2e24) == '\0')) {
      *(float *)(in_ECX + 0xb4) = param_2 + *(float *)(in_ECX + 0xb4);
    }
    else {
      *(undefined4 *)(in_ECX + 0xb4) = 0;
    }
    if ((15.0 < *(float *)(in_ECX + 0xb4)) && (*(char *)(in_ECX + 0xb8) == '\0')) {
      *(undefined1 *)(in_ECX + 0xb8) = 1;
      DAT_00469b60 = 0;
      (**(code **)(**(int **)(in_ECX + 8) + 0x254))();
      return;
    }
  }
  return;
}
