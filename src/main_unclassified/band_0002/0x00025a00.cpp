/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 497B216B2B159AF8056EA2C71AF51C1C832ECF1C98805C2D29CB907D790E0A9F
 * Entry: 0x00025a00, Ghidra index: 261, label: FUN_00025a00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t FUN_000120f0(int32_t in_EAX);

extern uint32_t PTR_FUN_003a3fe0;
void FUN_00025a00(undefined2 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 *unaff_ESI;
  undefined4 unaff_EDI;
  
  unaff_ESI[0x41] = 0;
  unaff_ESI[0x42] = 0;
  unaff_ESI[0x43] = 0;
  *(undefined2 *)(unaff_ESI + 0x45) = param_1;
  *unaff_ESI = PTR_FUN_003a3fe0;
  piVar3 = (int *)FUN_000120f0();
  iVar4 = (**(code **)(*piVar3 + 0x40))();
  uVar1 = *(undefined4 *)(iVar4 + 0x2c);
  uVar2 = *(undefined4 *)(iVar4 + 0x28);
  unaff_ESI[0x46] = *(undefined4 *)(iVar4 + 0x24);
  unaff_ESI[0x47] = uVar2;
  unaff_ESI[0x48] = uVar1;
  unaff_ESI[0x49] = unaff_EDI;
  unaff_ESI[0x43] = 0x40200000;
  return;
}
