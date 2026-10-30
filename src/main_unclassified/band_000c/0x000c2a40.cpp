/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 66BAD5ABA38953DD0FF10B7F78A7917FF4111F3D6AB0209F2F83B505C4406858
 * Entry: 0x000c2a40, Ghidra index: 2378, label: FUN_000c2a40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_000b25a0(int param_1,int *param_2);
extern void FUN_000adfb0(void);
extern void FUN_000c2550(undefined4 param_1);

extern uint32_t DAT_00469ab0;
void FUN_000c2a40(void)

{
  int iVar1;
  int iVar2;
  int unaff_EDI;
  
  iVar1 = unaff_EDI + 0x2c;
  iVar2 = FUN_000b9120(DAT_00469ab0);
  if (iVar2 != 0) {
    if (iVar1 != 0) {
      FUN_000b25a0(iVar1,iVar2);
    }
    *(byte *)(iVar2 + 0x13) = *(byte *)(iVar2 + 0x13) & 0xfb;
  }
  *(int *)(unaff_EDI + 0x68) = iVar2;
  *(int *)(iVar2 + 0x84) = unaff_EDI;
  FUN_000adfb0();
  iVar2 = FUN_000b9120(DAT_00469ab0);
  if (iVar2 != 0) {
    if (iVar1 != 0) {
      FUN_000b25a0(iVar1,iVar2);
    }
    *(byte *)(iVar2 + 0x13) = *(byte *)(iVar2 + 0x13) & 0xfb;
  }
  *(int *)(unaff_EDI + 100) = iVar2;
  FUN_000c2550(unaff_EDI);
  return;
}
