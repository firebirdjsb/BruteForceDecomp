/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 92629945D293440517BFC1C5E46D454F064CBD612AF3D1EB5FD47D5D1C357234
 * Entry: 0x001ec4d0, Ghidra index: 6911, label: FUN_001ec4d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00396b58;
extern char s_Parameters_004071bc[];
void FUN_001ec4d0(void)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int unaff_ESI;
  int iVar4;
  char *pcVar5;
  undefined **local_18 [6];
  
  if (*(int *)(unaff_ESI + 0x1c) == 4) {
    cVar2 = FUN_002e5880();
    if (cVar2 != '\0') {
      iVar4 = 0;
      if ((*(char *)(unaff_ESI + 0x5630) != '\0') && (*(char *)(unaff_ESI + 0x5631) != '\0')) {
        iVar4 = 1;
      }
      if ((*(char *)(unaff_ESI + 0x5648) != '\0') && (*(char *)(unaff_ESI + 0x5649) != '\0')) {
        iVar4 = iVar4 + 1;
      }
      if ((*(char *)(unaff_ESI + 0x5660) != '\0') && (*(char *)(unaff_ESI + 0x5661) != '\0')) {
        iVar4 = iVar4 + 1;
      }
      if ((*(char *)(unaff_ESI + 0x5678) != '\0') && (*(char *)(unaff_ESI + 0x5679) != '\0')) {
        iVar4 = iVar4 + 1;
      }
      pcVar5 = s_Parameters_004071bc;
      FUN_002e5920(s_Parameters_004071bc);
      iVar3 = FUN_002e4a30(pcVar5);
      uVar1 = *(uint *)(iVar3 + 0x21c);
      if (iVar4 == ((uVar1 & 4) >> 2) + ((uVar1 & 2) >> 1) + 1 + (uVar1 & 1)) {
        FUN_002e8c40();
        local_18[0] = &PTR_FUN_00396b58;
        FUN_002e7f50(0xfffffffc,local_18,1,1);
        FUN_002e8b80();
      }
    }
  }
  return;
}
