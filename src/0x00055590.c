/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 448B16102A1478455405F679A14A1FE4AEA3DE0FF248E881561FCFA70FCC3835
 * Entry: 0x00055590, Ghidra index: 809, label: FUN_00055590
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003ffca1;
void FUN_00055590(float param_1)

{
  char cVar1;
  undefined4 uVar2;
  int unaff_ESI;
  
  if (DAT_003ffca1 != '\0') {
    uVar2 = (**(code **)(**(int **)(unaff_ESI + 8) + 0xf4))();
    *(float *)(unaff_ESI + 0x10) = param_1 + *(float *)(unaff_ESI + 0x10);
    param_1 = 0.0;
    FUN_00044140(uVar2,&param_1);
    FUN_00044030(uVar2);
    FUN_00043f00();
    cVar1 = FUN_00055200();
    if (cVar1 != '\0') {
      FUN_00055390();
    }
  }
  return;
}
