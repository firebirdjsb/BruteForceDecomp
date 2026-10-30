/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5375A42115E81C3DD616532A2974F08F138313FD994BCB218D27DD422D2D7F0E
 * Entry: 0x00065140, Ghidra index: 1099, label: FUN_00065140
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_000620a0(void);
extern void FUN_00062710(undefined4 param_1);
extern void FUN_00063360(undefined4 param_1);

extern uint32_t PTR_FUN_003a3468;
void FUN_00065140(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *in_EAX;
  
  FUN_000620a0();
  *in_EAX = &PTR_FUN_003a3468;
  in_EAX[0xc] = 0;
  in_EAX[0xd] = 0;
  piVar4 = in_EAX + 0xc;
  in_EAX[0xe] = 0;
  piVar1 = in_EAX + 0xd;
  piVar2 = in_EAX + 0xe;
  in_EAX[0xf] = 0;
  in_EAX[0x10] = 0;
  in_EAX[0x12] = 0;
  in_EAX[0x11] = 0;
  piVar3 = (int *)*piVar4;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
    *piVar4 = 0;
  }
  FUN_00062710(0x42c80000,piVar4);
  piVar4 = (int *)*piVar1;
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4);
    *piVar1 = 0;
  }
  FUN_00062710(0x40000000,piVar1);
  piVar4 = (int *)*piVar2;
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4);
    *piVar2 = 0;
  }
  FUN_00062710(0x41200000,piVar2);
  piVar4 = (int *)in_EAX[0xf];
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4);
    in_EAX[0xf] = 0;
  }
  FUN_00062710(0,in_EAX + 0xf);
  piVar4 = (int *)in_EAX[0x10];
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4);
    in_EAX[0x10] = 0;
  }
  FUN_00062710(0,in_EAX + 0x10);
  piVar4 = (int *)in_EAX[0x12];
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4);
    in_EAX[0x12] = 0;
  }
  FUN_00063360(0x3f800000,in_EAX + 0x12);
  return;
}
