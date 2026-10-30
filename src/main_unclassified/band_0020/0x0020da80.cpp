/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6E103A90DA921FFEFDC75AD4844F1F5662949E24C3AFA05ADBCB398C0D0D5A65
 * Entry: 0x0020da80, Ghidra index: 7389, label: FUN_0020da80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00414da0;
void FUN_0020da80(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (param_2 == param_3) {
    *param_1 = param_4;
    return;
  }
  do {
    puVar3 = param_3 + -9;
    puVar2 = param_4 + -9;
    if (puVar2 != puVar3) {
      uVar1 = param_3[-8];
      if (uVar1 != param_4[-8]) {
        if (param_4[-8] != 0) {
          FUN_0008f6e0();
        }
        param_4[-8] = uVar1;
        if ((uVar1 != 0) && ((uVar1 & 1) == 0)) {
          uVar1 = uVar1 * 0x19660d + 0x3c6ef35f >> 0x15;
          *puVar2 = *(undefined4 *)(&DAT_00414da0 + uVar1 * 4);
          *(undefined4 **)(&DAT_00414da0 + uVar1 * 4) = puVar2;
        }
      }
      param_4[-7] = param_3[-7];
      param_4[-6] = param_3[-6];
      param_4[-5] = param_3[-5];
      param_4[-4] = param_3[-4];
      param_4[-3] = param_3[-3];
      param_4[-2] = param_3[-2];
      param_4[-1] = param_3[-1];
    }
    param_4 = puVar2;
    param_3 = puVar3;
  } while (puVar3 != param_2);
  *param_1 = puVar2;
  return;
}
