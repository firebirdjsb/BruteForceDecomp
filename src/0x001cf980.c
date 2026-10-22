/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 287CDFADC3E3C1B315C447CE67503E3B5A413AFE22C9789ADFD426A4689C0D01
 * Entry: 0x001cf980, Ghidra index: 6136, label: FUN_001cf980
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001cf980(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *unaff_EDI;
  
  if (param_1 != param_2) {
    puVar3 = param_1 + 3;
    do {
      *param_1 = *unaff_EDI;
      uVar1 = unaff_EDI[3];
      uVar2 = unaff_EDI[2];
      puVar3[-2] = unaff_EDI[1];
      puVar3[-1] = uVar2;
      *puVar3 = uVar1;
      puVar3[1] = unaff_EDI[4];
      FUN_000b0db0();
      param_1 = param_1 + 9;
      puVar3 = puVar3 + 9;
    } while (param_1 != param_2);
  }
  return;
}
