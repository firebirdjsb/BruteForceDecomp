/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4E2DCA1488D0BF765099D1B8C1D4C735E540AEE98BE82480E18FA0630D340C7A
 * Entry: 0x0028a1d0, Ghidra index: 9156, label: FUN_0028a1d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469888;
void FUN_0028a1d0(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00469888;
  iVar3 = *(int *)(DAT_00469888 + 0x30) + -1;
  *(int *)(DAT_00469888 + 0x30) = iVar3;
  puVar1 = (undefined4 *)(*(int *)(iVar2 + 0x2c) + iVar3 * 0xc);
  *(undefined4 *)(iVar2 + 0xc) = *puVar1;
  *(undefined4 *)(iVar2 + 0x10) = puVar1[1];
  *(undefined4 *)(iVar2 + 0x14) = puVar1[2];
  FUN_0028a4f0();
  return;
}
