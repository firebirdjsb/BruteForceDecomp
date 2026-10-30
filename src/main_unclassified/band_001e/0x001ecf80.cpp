/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6C71EC842577529E27375B41BB31871A8C2988C31C181EAE3224163479A173AD
 * Entry: 0x001ecf80, Ghidra index: 6922, label: FUN_001ecf80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469948;
undefined4 FUN_001ecf80(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 0x1c) == 1) {
    *(undefined4 *)(unaff_ESI + 0x1c) = 0;
    FUN_002e7280(1);
  }
  *(undefined4 *)(unaff_ESI + 0xa4) = 0x80000013;
  iVar1 = FUN_001eddf0(param_1);
  if (iVar1 != 0) {
    *(undefined4 *)(unaff_ESI + 0x1c) = 1;
    FUN_001ed3a0();
    FUN_001ed360();
    FUN_001ed310();
    FUN_002e66d0(*(byte *)(DAT_00469948 + 0x7c) & 0xf);
    iVar2 = FUN_002e5bf0(0);
    *(undefined4 *)(iVar2 + 0x2c) = 0xffffffff;
    *(undefined4 *)(unaff_ESI + 0x2e20) = 0xffffffff;
    *(undefined1 *)(unaff_ESI + 0x2e26) = 0;
    *(undefined1 *)(unaff_ESI + 0x2e25) = 0;
    *(undefined4 *)(unaff_ESI + 0x24) = 0;
    *(undefined1 *)(unaff_ESI + 0xa0) = 0;
    *(undefined4 *)(unaff_ESI + 0x5740) = 0;
    *(undefined4 *)(unaff_ESI + 0x5744) = 0;
    *(undefined4 *)(unaff_ESI + 0x5748) = 0;
    *(undefined4 *)(unaff_ESI + 0x574c) = 0;
    *(undefined4 *)(unaff_ESI + 0x5750) = 0;
    *(undefined4 *)(unaff_ESI + 0x5754) = 0;
    *(undefined4 *)(unaff_ESI + 0x5710) = 0;
    *(undefined4 *)(unaff_ESI + 0x5714) = 0;
    *(undefined4 *)(unaff_ESI + 0x5718) = 0;
    *(undefined4 *)(unaff_ESI + 0x571c) = 0;
    *(undefined4 *)(unaff_ESI + 0x5720) = 0;
    *(undefined4 *)(unaff_ESI + 0x5724) = 0;
    iVar1 = FUN_002e7460(iVar1);
    if (-1 < iVar1) {
      *(undefined4 *)(unaff_ESI + 0xa4) = 0x80000012;
      return 1;
    }
  }
  return 0;
}
