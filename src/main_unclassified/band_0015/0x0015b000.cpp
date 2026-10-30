/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BD1E15E8A144825C7F0946B51FF20D4CEAB071639073F63658094F6A36B7F853
 * Entry: 0x0015b000, Ghidra index: 4521, label: FUN_0015b000
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046d064;
void FUN_0015b000(int param_1)

{
  undefined4 in_EAX;
  int iVar1;
  int *unaff_EDI;
  bool bVar2;
  
  if (*unaff_EDI != DAT_0046d064) {
    bVar2 = unaff_EDI[1] != DAT_0046d064;
    iVar1 = FUN_00160da0(0xffffffff,1);
    if (((iVar1 != 0) && ((*(byte *)(iVar1 + 0xc) & 2) == 0)) &&
       (iVar1 = FUN_000defa0(bVar2 + '\x01',0,in_EAX,unaff_EDI + 1,0x3f800000),
       *(int *)(param_1 + 4) != iVar1)) {
      FUN_0008f6a0(iVar1);
    }
  }
  return;
}
