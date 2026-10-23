/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E110FA4C3B71C17DC9723EC8022003864D092B5192B3D46627306A3C48CD8838
 * Entry: 0x0010ea50, Ghidra index: 3520, label: FUN_0010ea50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046d064;
void FUN_0010ea50(undefined4 param_1,undefined4 param_2,int *param_3,int param_4,float param_5,
                 char param_6,int param_7)

{
  undefined4 uVar1;
  undefined1 local_6c [72];
  float fStack_24;
  undefined1 uStack_20;
  
  if (param_4 != 0) {
    if (param_5 <= 0.0) {
      param_5 = 0.0;
    }
    if (1.0 <= param_5) {
      param_5 = 1.0;
    }
    if ((*(int *)(param_4 + 0xc) != DAT_0046d064) && (*(int *)(param_4 + 0xc) != 0)) {
      if (param_6 != '\0') {
        uVar1 = FUN_0017c080(param_2);
        *(undefined4 *)(param_7 + 0x10) = uVar1;
        return;
      }
      FUN_0003f010();
      (**(code **)(*param_3 + 0x40))();
      FUN_00040f10();
      uStack_20 = 1;
      fStack_24 = param_5;
      FUN_0017c020(local_6c);
    }
  }
  return;
}
