/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 05B8AE023EB288E2351CDEB854C92A381F99E6A4DB99B2FEAFC81C8B30CE4DD7
 * Entry: 0x00280ff0, Ghidra index: 9040, label: FUN_00280ff0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_00391700;
void FUN_00280ff0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 *in_EAX;
  int *unaff_EBX;
  int *unaff_EDI;
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 auStack_28 [40];
  
  FUN_00280d50(param_1,unaff_EDI,param_2,param_3,param_4,param_5);
  *in_EAX = &PTR_LAB_00391700;
  (**(code **)(*unaff_EBX + 0x20))();
  puVar2 = auStack_28;
  uVar1 = 7;
  (**(code **)(*unaff_EDI + 0x20))();
  in_EAX[0xd] = uVar1;
  in_EAX[0xf] = unaff_EBX;
  in_EAX[0xe] = puVar2;
  in_EAX[10] = uVar1;
  in_EAX[0xb] = puVar2;
  in_EAX[0xc] = unaff_EBX;
  in_EAX[0x10] = uStack_34;
  in_EAX[0x11] = uStack_30;
  in_EAX[0x12] = uStack_2c;
  return;
}
