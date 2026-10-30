/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3918DB07D6B1A61AFB2EB1495B442F2B251CB88AFA41DD5BEAC549FDCE750E87
 * Entry: 0x00060bb0, Ghidra index: 1009, label: FUN_00060bb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_000620a0(void);
extern void FUN_00061500(void);
extern void FUN_00063360(undefined4 param_1);

extern uint32_t PTR_FUN_003a3e90;
void FUN_00060bb0(void)

{
  int *piVar1;
  int *piVar2;
  undefined4 *in_EAX;
  undefined4 uVar3;
  
  FUN_000620a0();
  *in_EAX = &PTR_FUN_003a3e90;
  uVar3 = FUN_00061500(in_EAX + 0xc);
  in_EAX[0xd] = uVar3;
  in_EAX[0xe] = 0;
  piVar1 = in_EAX + 0xf;
  *piVar1 = 0;
  piVar2 = (int *)*piVar1;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    *piVar1 = 0;
  }
  FUN_00063360(0x3f800000,piVar1);
  return;
}
