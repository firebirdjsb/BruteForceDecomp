/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F134616BBBA993A893B03317C1AEA5803F7758AA7360B07BD37E7EE64FCF1FBA
 * Entry: 0x00237ff0, Ghidra index: 7863, label: FUN_00237ff0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046cf7c;
extern uint32_t *DAT_0046cf80;
extern uint32_t DAT_0046d064;
undefined4 FUN_00237ff0(int *param_1)

{
  int *in_EAX;
  int iVar1;
  uint unaff_EBX;
  undefined4 *puVar2;
  
  if ((in_EAX != (int *)0x0) && (*param_1 != DAT_0046d064)) {
    if (DAT_0046cf80 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = (undefined4 *)*DAT_0046cf80;
    }
    for (; (puVar2 != DAT_0046cf80 && (unaff_EBX < (uint)puVar2[4])); puVar2 = (undefined4 *)*puVar2
        ) {
    }
    (**(code **)(*in_EAX + 4))();
    iVar1 = FUN_000e1cb0(&DAT_0046cf7c,puVar2,puVar2[1]);
    FUN_0021d890();
    puVar2[1] = iVar1;
    **(int **)(iVar1 + 4) = iVar1;
    return 0;
  }
  return 0x80070057;
}
