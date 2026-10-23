/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D0D584A5A781E7392FD85016AF35DCB2D5F0203C9EB19DB16442D77E36BA9A1A
 * Entry: 0x001ee700, Ghidra index: 6960, label: FUN_001ee700
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004698d0;
extern uint32_t DAT_0046cfd8;
extern uint32_t PTR_FUN_003968e8;
void FUN_001ee700(void)

{
  char cVar1;
  int iVar2;
  int unaff_ESI;
  undefined **local_2c [6];
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if ((*(int *)(unaff_ESI + 0x2e1c) != -1) && (*(int *)(unaff_ESI + 0x2e1c) == DAT_004698d0)) {
    FUN_002e8c40();
    local_14 = 0xffffffff;
    local_2c[0] = &PTR_FUN_003968e8;
    if (*(int *)(unaff_ESI + 0x1c) != 0) {
      cVar1 = FUN_002e5880();
      if (cVar1 == '\0') {
        iVar2 = FUN_002e5bf0(0);
        local_14 = *(undefined4 *)(iVar2 + 0x2c);
      }
      else {
        local_14 = 0;
      }
    }
    local_10 = *(undefined4 *)(unaff_ESI + 0x2e1c);
    local_c = DAT_0046cfd8;
    local_4 = 0;
    local_8 = 0;
    FUN_00085320(&local_4,&local_8);
    FUN_002e7f50(0xfffffffb,local_2c,1,1);
    *(undefined4 *)(unaff_ESI + 0x2e1c) = 0xffffffff;
    FUN_002e8b80();
  }
  return;
}
