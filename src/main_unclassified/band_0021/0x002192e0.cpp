/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B271279018D68727E2BC1CA3201A7B370FCD5777B64414A70224F2836D60CE20
 * Entry: 0x002192e0, Ghidra index: 7493, label: FUN_002192e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00394da0;
void FUN_002192e0(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *unaff_EBX;
  
  *unaff_EBX = PTR_FUN_00394da0;
  unaff_EBX[2] = 0;
  unaff_EBX[3] = 0;
  unaff_EBX[4] = 0;
  iVar1 = FUN_002ea01d(0xd0);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_000a3c70();
  }
  unaff_EBX[5] = uVar2;
  FUN_001611d0();
  FUN_000a42d0();
  return;
}
