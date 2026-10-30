/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 35B02F83A21400ECDF646296558EFA72F8A9819316C4CACBD392CB00C7D5C177
 * Entry: 0x000d9e70, Ghidra index: 2684, label: FUN_000d9e70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern undefined4 FUN_002386d0(void);
extern void FUN_00072e40(undefined4 param_1);
extern void FUN_000b8c30(void);

extern uint32_t DAT_003c06e3;
void FUN_000d9e70(void)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int unaff_EDI;
  
  if (*(int *)(unaff_EDI + 0xbd4) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined4 *)(*(int *)(unaff_EDI + 0xbd4) + 0xe68);
  }
  FUN_002386d0();
  D3D8LTCG__D3DDevice_Clear(0,0,0xf3,uVar5,0x3f800000,0xff);
  iVar4 = 0;
  piVar2 = (int *)(*(int *)(unaff_EDI + 0xbf0) + 0x38);
  iVar3 = 7;
  do {
    if (*piVar2 != 0) {
      iVar4 = iVar4 + 1;
    }
    piVar2 = piVar2 + 2;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  DAT_003c06e3 = iVar4 == 1;
  FUN_00072e40(unaff_EDI);
  puVar1 = (uint *)(*(int *)(unaff_EDI + 0xbe4) + 0x137c);
  *puVar1 = *puVar1 & 0xfffffffb;
  FUN_000b8c30(*(undefined4 *)(unaff_EDI + 0xbe4));
  return;
}
