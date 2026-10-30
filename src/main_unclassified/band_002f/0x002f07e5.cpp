/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7A5217CF5E0093CE8CEC4543609B41040FAE2CFE292A724A937EE8CC0EE66160
 * Entry: 0x002f07e5, Ghidra index: 10754, label: FUN_002f07e5
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t _DAT_003b6df8;
extern uint32_t _DAT_003b6e00;
extern uint32_t _DAT_003b6e18;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_002f07e5(int param_1,int param_2,int param_3,int param_4,double *param_5)

{
  double dVar1;
  double dVar2;
  int iVar3;
  undefined4 uVar4;
  
  dVar1 = (double)CONCAT44(param_2,param_1);
  uVar4 = 0;
  if (dVar1 < 0.0) {
    dVar1 = -dVar1;
  }
  dVar2 = _DAT_003b6df8;
  if (param_4 == 0x7ff00000) {
    if (param_3 != 0) goto LAB_002f0881;
    if (1.0 < dVar1) goto LAB_002f0930;
    if (1.0 <= dVar1) goto LAB_002f0838;
  }
  else {
    if ((param_4 == -0x100000) && (param_3 == 0)) {
      if (1.0 < dVar1) {
        dVar2 = 0.0;
        goto LAB_002f0930;
      }
      if (dVar1 < 1.0) goto LAB_002f0930;
LAB_002f0838:
      uVar4 = 1;
      dVar2 = _DAT_003b6e00;
      goto LAB_002f0930;
    }
LAB_002f0881:
    if (param_2 != 0x7ff00000) {
      if (param_2 != -0x100000) {
        return 0;
      }
      if (param_1 != 0) {
        return 0;
      }
      iVar3 = FUN_002f0784(CONCAT44(param_4,param_3));
      if ((double)CONCAT44(param_4,param_3) <= 0.0) {
        if (0.0 <= (double)CONCAT44(param_4,param_3)) {
          dVar2 = 1.0;
          goto LAB_002f0930;
        }
        dVar1 = _DAT_003b6e18;
        if (iVar3 != 1) {
          dVar1 = 0.0;
        }
      }
      else {
        dVar1 = _DAT_003b6df8;
        if (iVar3 == 1) {
          dVar1 = -_DAT_003b6df8;
        }
      }
      *param_5 = dVar1;
      return 0;
    }
    if (param_1 != 0) {
      return 0;
    }
    if (0.0 < (double)CONCAT44(param_4,param_3)) goto LAB_002f0930;
    if (0.0 <= (double)CONCAT44(param_4,param_3)) {
      dVar2 = 1.0;
      goto LAB_002f0930;
    }
  }
  dVar2 = 0.0;
LAB_002f0930:
  *param_5 = dVar2;
  return uVar4;
}
