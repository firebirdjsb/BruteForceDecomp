/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A040D806EE81DA1B4881F8766152C9A22C943FEE055520A8E7052C59AFD0BD7F
 * Entry: 0x002c7f40, Ghidra index: 10114, label: FUN_002c7f40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0038e63c;
extern uint32_t PTR_FUN_0038e7ec;
void FUN_002c7f40(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *unaff_ESI;
  
  puVar1 = unaff_ESI;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  puVar1 = (undefined4 *)FUN_002ea01d(8);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = &PTR_FUN_0038e7ec;
  }
  unaff_ESI[1] = puVar1;
  puVar1[1] = 0;
  puVar1 = (undefined4 *)FUN_002ea01d(0xc);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *(undefined2 *)(puVar1 + 2) = 0;
    *puVar1 = 0;
    puVar1[1] = 0x501502f9;
  }
  unaff_ESI[2] = puVar1;
  puVar2 = (undefined4 *)FUN_002ea01d(8);
  puVar1 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &PTR_FUN_0038e63c;
    puVar1 = puVar2;
  }
  unaff_ESI[3] = puVar1;
  uVar3 = FUN_002d5d50(puVar1,-(float)*(double *)(unaff_ESI + 6));
  puVar1[1] = uVar3;
  return;
}
