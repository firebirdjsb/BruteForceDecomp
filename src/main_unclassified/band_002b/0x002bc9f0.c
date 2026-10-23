/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A2CFA8925B2362BD9EE2F0E780025DC7788A4697D2678D204351B59F7E1BF78D
 * Entry: 0x002bc9f0, Ghidra index: 9925, label: FUN_002bc9f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0038e848;
extern uint32_t PTR_LAB_0038e790;
extern uint32_t PTR_LAB_0038e798;
void FUN_002bc9f0(void)

{
  undefined4 in_EAX;
  undefined4 *puVar1;
  int iVar2;
  undefined4 *unaff_EBX;
  
  puVar1 = unaff_EBX;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  unaff_EBX[1] = in_EAX;
  puVar1 = (undefined4 *)FUN_002ea01d(0x1c);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[4] = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[5] = in_EAX;
    *puVar1 = &PTR_FUN_0038e848;
    puVar1[6] = 0;
    puVar1[1] = 1;
  }
  *unaff_EBX = puVar1;
  puVar1 = (undefined4 *)FUN_002ea01d(0x10);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_002be8e0();
    *puVar1 = &PTR_LAB_0038e798;
  }
  unaff_EBX[2] = puVar1;
  puVar1 = (undefined4 *)FUN_002ea01d(0x10);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_002be8e0();
    *puVar1 = &PTR_LAB_0038e790;
    unaff_EBX[3] = puVar1;
    return;
  }
  unaff_EBX[3] = 0;
  return;
}
