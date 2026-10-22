/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0447E596042EBD3F1DF751F6E1A57B820D5BD46C3AA02A0E478B64871E05B843
 * Entry: 0x001edf10, Ghidra index: 6952, label: FUN_001edf10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004698d0;
extern uint32_t DAT_0046d064;
extern uint32_t PTR_FUN_003969c8;
extern uint32_t PTR_FUN_00396adc;
void FUN_001edf10(void)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  int unaff_ESI;
  uint local_260;
  int local_25c;
  undefined **local_258 [6];
  int local_240;
  undefined **local_23c [6];
  undefined1 local_224 [548];
  
  FUN_001ee620();
  if (*(int *)(unaff_ESI + 0x576c) != DAT_0046d064) {
    if (*(int *)(*(int *)(unaff_ESI + 0x18) + 0x4898) != 3) {
      FUN_002e8c40();
      local_23c[0] = &PTR_FUN_00396adc;
      FUN_001ed100(local_224);
      FUN_002e7f50(0xfffffffc,local_23c,1,1);
      FUN_002e8b80();
    }
    uVar2 = 0xffffffff;
    if (*(int *)(unaff_ESI + 0x1c) != 0) {
      cVar1 = FUN_002e5880();
      if (cVar1 == '\0') {
        iVar5 = FUN_002e5bf0(0);
        uVar2 = *(undefined4 *)(iVar5 + 0x2c);
      }
      else {
        uVar2 = 0;
      }
    }
    FUN_001ee0e0(unaff_ESI,*(undefined4 *)(unaff_ESI + 0x5768),uVar2,(int *)(unaff_ESI + 0x576c));
    *(int *)(unaff_ESI + 0x576c) = DAT_0046d064;
  }
  XAPILIB__QueryPerformanceCounter(&local_260);
  uVar3 = *(uint *)(unaff_ESI + 0x5710);
  uVar3 = __alldiv(local_260 - uVar3,
                   (local_25c - *(int *)(unaff_ESI + 0x5714)) - (uint)(local_260 < uVar3),
                   *(undefined4 *)(unaff_ESI + 0x5730),*(undefined4 *)(unaff_ESI + 0x5734));
  if ((2000 < uVar3) && (*(int *)(unaff_ESI + 0x1c) == 5)) {
    puVar4 = (undefined4 *)(unaff_ESI + 0x563c);
    iVar5 = 4;
    do {
      *puVar4 = 0;
      puVar4 = puVar4 + 6;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    FUN_002e8c40();
    local_240 = DAT_004698d0 + 10;
    *(int *)(unaff_ESI + 0x5738) = local_240;
    local_258[0] = &PTR_FUN_003969c8;
    FUN_002e7f50(0xfffffffc,local_258,1,1);
    XAPILIB__QueryPerformanceCounter((uint *)(unaff_ESI + 0x5710));
    FUN_002e8b80();
  }
  return;
}
