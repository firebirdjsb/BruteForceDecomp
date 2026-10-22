/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C02313B980405F96CD382772B2DA33A8CFA57F9A59AC497B50AF900469544E1A
 * Entry: 0x000ee560, Ghidra index: 2962, label: FUN_000ee560
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046d064;
undefined4
FUN_000ee560(undefined4 param_1,char param_2,int *param_3,int *param_4,undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  int in_EDX;
  char *unaff_ESI;
  
  uVar1 = 0;
  if (*unaff_ESI == '\0') {
    if (*param_3 == *param_4) {
      if (param_2 != '\0') {
        if (*(int *)(in_EDX + 4) == 0) {
          *in_ECX = DAT_0046d064;
          *unaff_ESI = '\x01';
          return uVar1;
        }
        *in_ECX = *(undefined4 *)(*(int *)(in_EDX + 4) + 4);
        *unaff_ESI = '\x01';
        return uVar1;
      }
      FUN_000d6ac0(param_1,in_EDX,param_5);
      uVar1 = 1;
      *unaff_ESI = '\x01';
    }
  }
  return uVar1;
}
