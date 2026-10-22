/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7C416F954ADDB42EB2AA2AED5A0C67D7DB559CB06E7D930F3108C59BF53D0AF3
 * Entry: 0x000cb580, Ghidra index: 2516, label: FUN_000cb580
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004a5c78;
extern uint32_t DAT_004a5c7c;
extern uint32_t PTR_FUN_0039f038;
void FUN_000cb580(void)

{
  int *piVar1;
  uint uVar2;
  undefined4 *in_EAX;
  int *piVar3;
  undefined4 local_4;
  
  FUN_000bbcb0();
  uVar2 = DAT_004a5c7c & 1;
  *in_EAX = &PTR_FUN_0039f038;
  in_EAX[0x10] = 0;
  in_EAX[0x1f] = 0x41000000;
  if (uVar2 == 0) {
    DAT_004a5c7c = DAT_004a5c7c | 1;
    DAT_004a5c78 = 0xffffffff;
  }
  in_EAX[0x1e] = DAT_004a5c78;
  *(undefined2 *)((int)in_EAX + 0xe) = 0x80;
  *(undefined2 *)(in_EAX + 3) = 0x40;
  in_EAX[0xe] = 0;
  in_EAX[0xf] = 0;
  in_EAX[0x11] = 3;
  in_EAX[0x22] = 0;
  in_EAX[0x21] = 0;
  in_EAX[0x20] = 0;
  in_EAX[0x23] = 0;
  in_EAX[0x12] = 0;
  in_EAX[0x13] = 0;
  in_EAX[0x16] = 0;
  in_EAX[0x14] = 0x3f800000;
  in_EAX[0x17] = 0;
  local_4 = 0xe11fb292;
  piVar3 = (int *)FUN_000a7770(&local_4);
  piVar1 = (int *)in_EAX[0x10];
  if (piVar1 != piVar3) {
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      in_EAX[0x10] = 0;
    }
    in_EAX[0x10] = piVar3;
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))(piVar3);
    }
  }
  in_EAX[0x1c] = 0;
  in_EAX[0x1a] = 0x3fb33333;
  in_EAX[0x1d] = 0x3fb33333;
  in_EAX[0x18] = 0x40000000;
  in_EAX[0x19] = 0x40400000;
  in_EAX[0x1b] = 0x40000000;
  return;
}
