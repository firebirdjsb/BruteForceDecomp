/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DD2B3F7F021E90AA714D708A9444561DD387497D0CCEF4FE0A359DA605B5399F
 * Entry: 0x00280480, Ghidra index: 9029, label: FUN_00280480
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_003918a0;
void FUN_00280480(undefined4 param_1)

{
  undefined4 *in_EAX;
  undefined4 in_ECX;
  int *unaff_EBX;
  int *unaff_EDI;
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 auStack_28 [40];
  
  FUN_00280180(in_ECX,unaff_EDI,param_1);
  uVar1 = 7;
  *in_EAX = &PTR_LAB_003918a0;
  (**(code **)(*unaff_EBX + 0x20))();
  (**(code **)(*unaff_EDI + 0x20))();
  in_EAX[0xb] = auStack_28;
  in_EAX[0xd] = uVar1;
  in_EAX[0xc] = unaff_EBX;
  in_EAX[8] = auStack_28;
  in_EAX[9] = unaff_EBX;
  in_EAX[10] = uVar1;
  in_EAX[0xe] = uStack_34;
  in_EAX[0xf] = uStack_30;
  in_EAX[0x10] = uStack_2c;
  return;
}
