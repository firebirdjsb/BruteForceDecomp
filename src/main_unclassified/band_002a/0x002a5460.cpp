/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 268ABEA390AFEEE1BC8E641611FFB908321EA40F70F8E878812C5D458B123265
 * Entry: 0x002a5460, Ghidra index: 9564, label: FUN_002a5460
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046af48;
undefined4 FUN_002a5460(undefined4 param_1,int *param_2,int *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  uint unaff_ESI;
  int *piVar3;
  
  piVar1 = param_2;
  piVar3 = param_3;
  if (param_3 == (int *)0x0) {
    piVar3 = DAT_0046af48;
  }
  (**(code **)(*piVar3 + 0x10))(piVar3);
  (**(code **)(*piVar3 + 0x24))(piVar3,&param_1);
  if ((unaff_ESI & 1) != 0) {
    (**(code **)(*piVar1 + 0x54))(piVar1);
    return 0;
  }
  uVar2 = (**(code **)(*piVar3 + 0x30))(piVar3);
  FUN_002a5400(piVar1,uVar2);
  return 0;
}
