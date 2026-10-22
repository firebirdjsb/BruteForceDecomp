/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AFB67CC9B3739D984296851D48043BFDC768B911A6460956A222070BBF23F36F
 * Entry: 0x000cca40, Ghidra index: 2528, label: FUN_000cca40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00443300;
undefined4 FUN_000cca40(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_EAX;
  int *piVar3;
  int *in_ECX;
  undefined4 in_EDX;
  undefined4 *unaff_ESI;
  
  *unaff_ESI = *in_EAX;
  unaff_ESI[2] = param_3;
  unaff_ESI[1] = in_EDX;
  unaff_ESI[3] = param_2;
  piVar3 = (int *)(**(code **)(*DAT_00443300 + 0x2c))(param_1);
  piVar1 = (int *)unaff_ESI[10];
  if (piVar1 != piVar3) {
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      unaff_ESI[10] = 0;
    }
    unaff_ESI[10] = piVar3;
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))(piVar3);
    }
  }
  iVar2 = *in_ECX;
  unaff_ESI[4] = in_ECX[1];
  unaff_ESI[5] = in_ECX[2];
  unaff_ESI[6] = in_ECX[3];
  if (iVar2 != 4) {
    return 0x80004005;
  }
  *(short *)(unaff_ESI + 7) = (short)in_ECX[5];
  *(undefined2 *)((int)unaff_ESI + 0x1e) = *(undefined2 *)((int)in_ECX + 0x16);
  unaff_ESI[9] = in_ECX + 7;
  return 0;
}
